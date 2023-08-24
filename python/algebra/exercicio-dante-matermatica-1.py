#Numa classe de 8ª série com 40 alunos, foram arrecadados R$ 2749,60 para as comemorações da formatura. As depeses foram as aseguintes:
#R$ 754,15 para a banda, R$ 285,35 para enfeites da igreja e do salão e R$ 880,50 para a excur~soa. A sobra foi repartida igualmente entre
#os alunos dessa classe. Quanto cada aluno recebeu?

#alternativas
a = 116.74 
b = 82.96
c = 48.00
d = 20.74

valorArrecadado = 2749.60
totalAlunos = 40

#gastos
banda = 754.15
enfeites = 285.35
excursao = 880.50



gastos = float(banda) + float(enfeites) + float(excursao)
print ('A soma dos gastos foram: R$', gastos)

calc1 = float(gastos) - float(valorArrecadado)
calc= float(calc1)  / int(totalAlunos) * -1
print ('Cada aluno receberá de volta: R$', calc)


if calc == a:
    print ("A reposta é: A.")
if calc == b:
    print ("A reposta é: B.")
if calc == c:
    print ("A reposta é: C.")
else:
    print ("A reposta é: D.")