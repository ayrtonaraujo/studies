pessoa = {'nome': 'Ayrton', 'idade': 30}

pessoa = dict(nome = 'Ayrton', idade = 30)

pessoa['telefone'] = 994504049

print(pessoa)

# iterando um dicionario
for chave, valor in pessoa.items():
    print(f'{chave.title()}: {valor}')


#métodos
# clear
# copy
# from keys -> adiciona novas chaves no dicionário
