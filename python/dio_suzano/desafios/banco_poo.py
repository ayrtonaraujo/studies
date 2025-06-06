import textwrap
from abc import ABC, abstractmethod
from datetime import datetime
import os


class Client:
    def __init__(self, address):
        self.address = address
        self.accounts = []

    @staticmethod
    def make_transaction (account, transaction):
        transaction.register(account)

    def add_account(self, account):
        self.accounts.append(account)


class NaturalPerson(Client):
    def __init__(self, name, birthday, cpf, address):
        super().__init__(address)
        self.name = name
        self.birthday = birthday
        self.cpf = cpf



class Account:
    def __init__(self, number, client):
        self._balance = 0
        self._number = number
        self._agency = "0001"
        self._client = client
        self._historic = Historic()

    @classmethod
    def new_account (cls, client, number):
        return cls(number, client)
    
    @property
    def balance(self):
        return self._balance
    
    @property
    def number (self):
        return self._number
    
    @property
    def agency(self):
        return self._agency
    
    @property
    def client (self):
        return self._client
    
    @property
    def historic(self):
        return self._historic
    
    def withdraw (self, value):
        balance = self.balance
        except_balance = value > balance

        if except_balance:
            print("Operation failed! Balance was excepted.")
        
        elif value > 0:
            self._balance -= value
            print("Withdraw successful!")
            return True
        
        else:
            print("Operation failed. Invalid value.")

        return False

    def deposit (self, value):
        if value > 0:
            self._balance += value
            print ("Deposit: success!")
            return True

        else:
            print ("Operation failed. Invalid value.")
            return False
        

class CurrentAccount (Account):
    def __init__(self, number, client, limit = 500, limit_withdraw = 3):
        super().__init__(number, client)
        self.limit = limit
        self.limit_withdraw = limit_withdraw

    def withdraw(self, value):
        withdraw_qty = len (
            [transaction for transaction in self.historic.transactions if transaction["type"] == Withdraw.__name__]
        )

        except_limit = value > self.limit
        except_withdraw = withdraw_qty >= self.limit_withdraw

        if except_limit:
            print("Operation failed! Limit was excepted.")

        elif except_withdraw:
            print("Operation failed! Withdraw was excepted.")
        else:
            return super().withdraw(value)

        return False

    def __str__(self):
        return f"""\
            Agency: \t{self.agency}
            C/C: \t{self.number}
            Client: \t{self.client.name}
        """


class Historic:
    def __init__(self):
        self._transactions = []

    @property
    def transactions (self):
        return self._transactions

    def add_transaction (self, transaction):
        self._transactions.append ({
                "type": transaction.__class__.__name__,
                "value": transaction.value,
                "date" : datetime.now().strftime("%d/%m/%Y %H:%M:%S")
            })


class Transaction(ABC):
    @property
    @abstractmethod
    def value (self):
        pass

    @abstractmethod
    def register(self, account):
        pass


class Withdraw(Transaction):
    def __init__(self, value):
        self._value = value

    @property
    def value (self):
        return self._value

    def register(self, account):
        success_transaction = account.withdraw(self._value)

        if success_transaction:
            account.history.add_transaction (self)


class Deposit(Transaction):
    def __init__(self, value):
        self._value = value

    @property
    def value (self):
        return self._value

    def register(self, account):
        success_transaction = account.deposit(self._value)

        if success_transaction:
            account.historic.add_transaction (self)


#app
def menu ():
    os.system('cls')

    menu_interface = """\n
    ======== BANCO =======
    [1] Deposit
    [2] Withdraw
    [3] Statement
    [4] New Account
    [5] List Accounts
    [6] New User
    [7] Exit
    -> """
    return int(input(textwrap.dedent(menu_interface)))


def main():
    clients = []
    accounts = []

    while True:
        try:
            option = int(menu())
        except ValueError:
            print("Operation failed. Enter a valid number.")
            continue

        if option == 1:
            deposit(clients)
        elif option == 2:
            withdraw(clients)
        elif option == 3:
            show_statement(clients)
        elif option == 4:
            account_number = len(accounts) + 1
            create_account(account_number, clients, accounts)
        elif option == 5:
            list_accounts(accounts)
        elif option == 6:
            create_client(clients)
        elif option == 7:
            break
        else:
            print("Operation failed.")




def filter_client (cpf, clients):
    filtered_clients = [client for client in clients if client.cpf == cpf]
    return filtered_clients[0] if filtered_clients else None


def recover_client_account (client):
    if not client.accounts:
        print("No accounts available.")
        return None

    return client.accounts[0]


def deposit (clients):
    cpf = input("Enter CPF: ")
    client = filter_client(cpf, clients)

    if not client:
        print("Client not found.")
        return

    value = float(input("Enter value: "))
    transaction = Deposit(value)

    account = recover_client_account(client)
    if not account:
        return

    client.make_transaction(account, transaction)


def withdraw (clients):
    cpf = input("Enter CPF: ")
    client = filter_client(cpf, clients)

    if not client:
        print("Client not found.")
        return

    value = float(input("Enter value: "))
    transaction = Withdraw(value)

    account = recover_client_account(client)
    if not account:
        return

    client.make_transaction(account, transaction)


def show_statement (clients):
    cpf = input("Enter CPF: ")
    client = filter_client(cpf, clients)

    if not client:
        print("Client not found.")
        return

    account = recover_client_account(client)
    if not account:
        return

    print("Statement:")
    transactions = account.historic.transactions

    extract = ""
    if not transactions:
        extract = "No transactions available."
    else:
        for transaction in transactions:
            extract += f"{transaction['date']} \t {transaction['type']} \t {transaction['value']}\n"

    print(extract)
    print(f"Balance: R$ {account.balance:.2f}")
    print("\n" * 2)


def create_account (account_number, clients, accounts):
    cpf = input("Enter CPF: ")
    client = filter_client(cpf, clients)

    if not client:
        print("Client not found.")
        return

    account = CurrentAccount.new_account (client = client, number = account_number)
    accounts.append(account)
    client.accounts.append(account)

    print("Account created.")


def list_accounts (accounts):
    for account in accounts:
        print(str(account))


def create_client (clients):
    cpf = input("Enter CPF: ")
    client = filter_client(cpf, clients)

    if client:
        print("Client already exists.")
        return

    name = input("Enter name: ")
    birthday = input("Enter birthday: ")
    address = input("Enter address: ")

    client = NaturalPerson(name = name, birthday = birthday, cpf = cpf, address = address)

    clients.append(client)

    print("Client created.")


main()





