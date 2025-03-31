import os

lista_nomes = ["Ayrton", "Araújo"]


def limpa_tela ():
    os.system("clear")


def selecao_opcoes (minimo, maximo, texto_try, texto_except):
    selecao = -1
    while selecao < minimo or selecao > maximo:
        while True:
            try:
                selecao = int(input(texto_try))
                break
            except:
                print (texto_except)
    return selecao
    

def confirmacao():
    confirma = "k"
    while True:
        confirma = str(input("Confirmar (s/n)?: ").strip().lower())
        if confirma != "s" and confirma != "n":
            print ("Valor inválido. Digite s ou n.")
        else:
            break
            
    return confirma


def validar_nome():
    while True:
        nome = input("Nome: ").strip()
        if nome.replace(" ", "").isalpha():
            return nome
        else:
            print("Erro. Digite apenas letras.")


def menu_inicial ():
    limpa_tela()

    print("""
--- SISTEMA DE CADASTRO ---
|                         |
| Escolha uma opção:      |
|                         |
| 1. Listar nomes         |
| 2. Adicionar nome       |
| 3. Alterar nome         |
| 4. Deletar nome         |
| 0. Fechar o sistema     |
---------------------------
""")


def voltar_menu_inicial ():  
    while selecao_opcoes(0, 0, "Digite 0 para voltar ao menu inicial: ", "Opção inválida.") != 0:
        pass
    menu_inicial()
    escolha_opcao()
                

def escolha_opcao ():
    opcao = selecao_opcoes (0, 4, "Sua escolha: ", "Opção inválida")

    match opcao:
        case 0:
            exit()
        case 1:
            limpa_tela()
            listar_nomes()
        case 2:
            limpa_tela()
            adicionar_nome()
        case 3:
            limpa_tela()
            alterar_nome()
        case 4:
            limpa_tela()
            deletar_nome()
            
    voltar_menu_inicial()


def listar_nomes ():
    global lista_nomes 
    print("---- Lista de nomes: ----")

    for i in range(len(lista_nomes)):
        print(f'{i+1}. {lista_nomes[i]}')
    print("-------------------------")


def deletar_nome ():
    global lista_nomes
    listar_nomes()    

    selecao = selecao_opcoes(1, len(lista_nomes), "Deletar nome: ", "Opção inválida.")
             
    if confirmacao() == "s":
        del lista_nomes[selecao -1]
        print(">> Nome deletado com sucesso.")
        print("-----------------------------")
    else:
        print("Operação cancelada.")
        print("-----------------------------------")


def alterar_nome ():

    listar_nomes()
    selecao = selecao_opcoes(1, len(lista_nomes), "Alterar nome: ", "Opção inválida.")

    novo_nome = validar_nome()
    
    if confirmacao() == "s":
        lista_nomes[selecao - 1] = novo_nome
        print(">> Nome alterado com sucesso.")
        print("-----------------------------")  
    else:
        print("Operação cancelada.")
        print("-----------------------------------")
        

def adicionar_nome ():
    global lista_nomes

    print ("------ Adicione um novo nome ------")
    novo_nome = validar_nome()
    
    if confirmacao() == "s":
        lista_nomes.append(novo_nome)
        print(">> Nome adicionado com sucesso.")
        print("-----------------------------------")
    else:
        print("Operação cancelada.")
        print("-----------------------------------")


#### main
menu_inicial()
escolha_opcao()