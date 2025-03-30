nome = "Ayrton"
idade = 30
profissao = "inventor"
linguagem = "python"

# old style -> se parece com C
print("Olá, me chamo %s. Tenho %d anos, sou %s e programo em %s." % (nome.upper(), idade, profissao.title(), linguagem.title()))

#  metodo format
print("Olá, me chamo {}. Tenho {} anos, sou {} e programo em {}.".format(nome.upper(), idade, profissao.title(), linguagem.title()))

# f-string
print(f"Olá, me chamo {nome}. Tenho {idade} anos, sou {profissao} e programo em {linguagem}.")

PI = 3.14159265359

print(f"Pi: {PI:.2f}") # para reduzir float
print(f"Pi: {PI:4.1f}") # para limitar espaço