# problem 1
print("Hello, world!")


# problem 2
name: str = "Ayrton"
age: int = 30
alive: bool = True

print (f'{name}, {age}, {alive}')


# problem 3
user_number = int(input('Number: '))

if user_number == 0:
    print("It's zero.")
elif user_number < 0:
    print("It's negative")
else:
    print("It's positive")
    

# problem 4
def calculate (a, b):
    operations_ab = (a+b, a-b, a*b, a/b)
    return operations_ab

#problem 5
food_list = ['peanuts', 'tacacá', 'pé de moleque', 'x-tudo', 'beef']
food_list.append('cake')
del food_list[1]
print(sorted(food_list))