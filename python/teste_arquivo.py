file = open("teste_arquivo.txt", "r")
content = file.read()
print (content)
file.close()

file = open("teste_arquivo.txt", "w")
file.write("Hello, world!")
file.close()