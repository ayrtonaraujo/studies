#3)  Calcule  quantos  azulejos  são  necessários  para
#  azulejar  uma  parede.  É necessário  conhecer  a 
# altura  da  parede  (AP),  a  sua  largura (LP),  e 
# a  altura  do azulejo (AA) e sua largura (LA). Leia
# os dados através do teclado.
import math

larguraParede = input('Largura da Parede: ')
alturaParede = input('Altura da Parede: ')
larguraAzulejo = input('Largura do Azulejo: ')
alturaAzulejo = input('Altura do Azulejo: ')

areaParede = float(larguraParede) * float(alturaParede)
print ('A parede mede: ', float(areaParede), 'm²')

areaAzulejo = float(larguraAzulejo) * float(alturaAzulejo)
print ( "O Azulejo mede: ", areaAzulejo, 'm²')

calc =  pow(float(areaParede),0.5) / pow(float(areaAzulejo),0.5)
calc1 = float(calc) **2
print ('Para cobrir a parede serão necessários:', math.ceil(calc1) , 'azulejos.')