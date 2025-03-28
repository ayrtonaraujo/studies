#standard list
lista_1 = ['Oh', 'This is', 'Good', 'Bad']
print(lista_1[-1]) #print the last item from the list

#adds new item on list
lista_1.append('Eai')
print(lista_1)

#inserting an item on list
lista_1.insert(0, 'B')
print(lista_1)

#deleting an item
del lista_1[0]
print(lista_1)

#removing item accordling to a value
lista_1.remove('This is')
print(lista_1)

#sorting the list
lista_1 = ['Oh', 'This is', 'Good', 'Bad']
lista_1.sort()
print(lista_1)