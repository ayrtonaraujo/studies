#7. Solicitar a idade de uma pessoa em dias e informar na tela
#  a idade em anos, meses e dias

idade = input("Idade em dias:")
anos = int(idade) / 365
print("Anos:", anos)
print("Meses:", int(anos) *12)
print("Dias:", int(idade))