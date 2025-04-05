# estabelecer limite de 10 transações para uma conta [ok]
# se usuario atingir limite, informar que excedeu [ok]
# mostrar data e hora no extrato

import os, time, datetime, pytz

saldo = 0
lista_deposito = []
lista_saque = []

LIMITE_OPERACOES = 10
operacoes = 0

# ultima_data = datetime.datetime.now().date()

def limpa_tela():
    os.system("clear")

def voltar_menu():
    saida = -1
    if saida != 0:
        while True:
            try:
                saida = int(input("Digite 0 para voltar: ").strip())
                break
            except:
                print("Entrada inválida.")

    limpa_tela()
    menu_inicial()

def menu_inicial():
    limpa_tela()

    print ("""
------$ BANCO $------
| 1. Extrato        |
| 2. Deposito       |
| 3. Saque          |
| 0. Sair           |
---------------------""")
    escolha_opcao()

def escolha_opcao ():
    opcao = -1
    while opcao < 0 or opcao > 3:
        while True:
            try:
                opcao = int(input("Escolha uma opção: ").strip())
                break
            except:
                print("Entrada inválida.")
    match opcao:
        case 1:
            limpa_tela()
            mostra_extrato()
        case 2:
            limpa_tela()
            adicionar_deposito()
        case 3:
            limpa_tela()
            efetua_saque()
        case 0:
            print("Saindo do sistema", end="")
            for i in range(5):
                print(".", end="", flush=True)
                time.sleep(0.2)
            limpa_tela()
            exit()
        
    voltar_menu()

# acoes
def adicionar_deposito ():
    global lista_deposito, saldo, operacoes, LIMITE_OPERACOES

    print("------ DEPÓSITO ------\n")
    print(f'Saldo em conta: R$ {saldo:.2f}')
    print(f'# Operação: {operacoes}/10')

    # contador operacoes
    operacoes += 1
    if operacoes > LIMITE_OPERACOES:
        print("Excedeu o limite diário de operações (10).")
        return
        
    while True:
        try:
            valor = float(input("\nInsira um valor para depósito: "))

            if valor <= 0:
                print("Depósito deve ser maior que 0.")
                continue

            break
        except:
            print("Entrada inválida.")
    
    lista_deposito.append(valor)
    print(f'Valor de R${valor:.2f}, inserido com sucesso.')
    saldo += valor
    print(f'Saldo em conta: R$ {saldo:.2f}\n')
   
def efetua_saque ():
    global lista_saque, saldo, operacoes, LIMITE_OPERACOES
     
    print("------ SAQUE ------")
    print(f'Saldo em conta: R$ {saldo:.2f}')
    print(f'# Operação: {operacoes}/10')
    
    # contador operacoes
    operacoes += 1
    if operacoes > LIMITE_OPERACOES:
        print("Excedeu o limite diário de operações (10).")
        return
    
    if len(lista_saque) >= 3:
        print("Não é possível efetuar saque. Limite: 3")
        return
        
    while True:
        try:
            valor = float(input("\nInsira um valor do saque: "))
            
            if valor <= 0:
                print("Saque deve ser maior que 0")
                continue

            if valor > 500:
                print("Não é permitido saque acima de R$ 500.00")
                continue

            if valor > saldo:
                print("Saldo insuficiente.")
                continue
            break
        except:
            print("Entrada inválida.")

    lista_saque.append(valor)
    print(f'Valor de R${valor:.2f}, sacado com sucesso.')
    saldo -= valor
    print(f'Saldo em conta: R$ {saldo:.2f}\n')

def mostra_extrato ():
    global saldo, lista_saque, lista_deposito

    print("------ EXTRATO ------")

    #listando os depósitos
    if lista_deposito:
        print("\nDepósito efetuados: ")
        for i in range(len(lista_deposito)):
            print(f'{i+1}. R$ {lista_deposito[i]:20.2f}')
        print(f'>> Total: R$ {sum(lista_deposito):10.2f}')
    else:
        print("Nenhum depósito realizado.")
            

    #listando os saques
    if lista_saque:
        print("-------------------")
        print("Saques efetuados: ")
        for i in range(len(lista_saque)):
            print(f'{i+1}. R$ {lista_saque[i]:20.2f}')
        print(f'>> Total: R$ {sum(lista_saque):10.2f}')
    else:
        print("Nenhum saque realizado.")

    print(f'\nSaldo: R$ {saldo:20.2f}\n')

#main
menu_inicial()