#valor-hora-de-funcionario

salario = input('Salário:')
horas_trampo = input('Horas Trabalhadas por Dia:')
mes = 30

valor_hora = float(salario) / mes / float(horas_trampo)

print ('Horas trabalhadas por Mês: ', mes * float(horas_trampo))
print ('Valor Hora:', valor_hora)