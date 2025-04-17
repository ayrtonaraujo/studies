#link: https://www.youtube.com/watch?v=qUe36p4P2CI&t=85s

#funcao iterativa -> eficiente, porém complexa
def factorial (n):
    resultado = 1
    for i in range (1,n):
        resultado*=i
    return resultado


#funcao recursiva -> mais lentas, porém mais simples
def fatorial (n):
    if (n == 1 or n == 0): #caso base
        return 1
    return n * fatorial(n-1) #chamada recursiva

print(fatorial(int(input("Insira um valor: "))))

#fibonacci recursivo
def fibonacci (p):
    if p == 1:
        return 0
    elif p == 2:
        return 1
    
    return fibonacci(p-1) + fibonacci(p-2)

print(fibonacci(int(input("Insira um valor: "))))
    