class Historic:
    def __init__(self, transaction = 0):
        self.transaction = transaction

    def add_transaction(self, transaction):
        self.transaction += transaction


class Account:
    def __init__(self, balance = 0, account_number, agency):
        self.balance = balance
        self.account_number = account_number
        self.agency = agency
        self.historic = Historic()
        self.client = Client()


class Individual:
    def __init__(self, cpf, name, birthday):
        self.cpf = cpf
        self.name = name
        self.birthday = birthday


class Client:
    def __init__(self, address, account_list):
        self.address = address
        self.account_list = account_list


class CurrentAccount:
    def __init__(self, limit, withdrawal_limit):
        self.limit = limit
        self.withdrawal_limit = withdrawal_limit





