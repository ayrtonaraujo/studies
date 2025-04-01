from time import sleep
import os

REPETICOES = 5
DOTS = 10
GIRATORIO = 10

os.system('clear')
for i in range(1, REPETICOES+1):
    print(i, end="", flush=True)
    for j in range(1, DOTS+1):
        sleep(0.1)
        print('.', end='', flush=True)
    os.system('clear')

os.system('clear')