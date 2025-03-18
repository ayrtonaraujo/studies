#12)  Elaborar  um  programa  que  receba,  via  teclado,
# os  valores  do  espaço percorrido  e  do  tempo  gasto
# por  um  veículo  em  movimento,  para  calcular  e
# apresentar em tela sua velocidade média.

dist = input("Insira o valor em Km:")
tempo = input("Insira o valor em minutos:")

cvMinutoParaHora = float(tempo) /60

calVmed = float(dist) / float(cvMinutoParaHora)

print ("Velocidade média:", float(calVmed), 'Km/h')