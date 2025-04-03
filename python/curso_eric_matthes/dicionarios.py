alien = {'name': 'etevaldo', 
         'color': 'pink',
         'age': 30}
print (alien)

# adding new values to a dict
alien['planet'] = 'Mars'
print(alien)

# dict vazio
alien2 = {}

# percorrendo com for
for key, value in alien.items():
    print("\nKey: " + key)
    print("Value: " + str(value))


