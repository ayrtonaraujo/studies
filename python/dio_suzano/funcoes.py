def meu_nome (nome = False, idade = 10):
    if not nome:
        nome = "Anonymous"
    print(f"Meu nome é {nome}, tenho {idade} anos.")

meu_nome(False, idade = 30)

# *args e **kwargs -> para parâmetros obrigatórios, o método recebe os valores como tupla e dicionátio respectivamente

