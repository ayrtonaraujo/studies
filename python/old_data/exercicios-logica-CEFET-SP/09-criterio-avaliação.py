## 9) O critério de avaliação semestral de determinada escola
# # segue a regra:
# P1 – primeira avaliação do semestre.
# P2 – segunda avaliação do semestre.
# Ativ – nota atribuída pelas atividades realizadas no semestre.
# 
# Média  =  P1 x 4 + P2 x 4 + Ativ x 2 
#_________________________________
# 10 
# Escreva um programa que leia as notas das provas (P1 e P2)
# e da atividade (Ativ), calcule e mostre a média, seguindo
# o cálculo acima.


p1 = input('Nota P1:')
p2 = input('Nota P2:')
ativ = input('Nota Ativ:')

media1 = float(p1)*4+float(p2)*4+float(ativ)*2
mediaF = float(media1)/10

print('Média:', mediaF)