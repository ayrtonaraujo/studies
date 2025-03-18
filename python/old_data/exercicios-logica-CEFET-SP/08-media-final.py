#8) Faça um programa para calcular a média final
# de um aluno, supondo-se que há quatro  notas
#  bimestrais  durante  o  ano  e  que  esta  é 
# calculada  através  de  uma média aritmética simples
# (todos os bimestres têm o mesmo peso).

import statistics

nota1 = input('Nota 1:')
nota2 = input('Nota 2:')
nota3 = input('Nota 3:')
nota4 = input('Nota 4:')

notaF = statistics.mean([float(nota1),float(nota2),float(nota3),float(nota4)])
print("A nota final é:", notaF)


