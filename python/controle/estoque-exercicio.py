#1) Identifique os dados de entrada, processamento e saída no algoritmo abaixo
#• Receba código da peça
#• Receba valor da peça
#• Receba Quantidade de peças
#• Calcule o valor total da peça (Quantidade * Valor da peça)
#• Mostre o código da peça e seu valor total
#2) Faça um algoritmo para “Calcular o estoque médio de uma peça”, sendo que #ESTOQUEMÉDIO = (QUANTIDADE MÍNIMA + QUANTIDADE MÁXIMA) /2
#3) Teste o algoritmo anterior com dados definidos por você.

codigoPeca = input('Código da Peça: ')
valorPeca = input('Valor da Peça:')
qtdPeca = input ('Quantidade de Peças:')

totalPeca = int(qtdPeca) * int(valorPeca)
print ('Código da Peça:', codigoPeca)
print ('Valor Total:', totalPeca)

print ('Estoque médio:')