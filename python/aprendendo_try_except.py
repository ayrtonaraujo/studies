try:
    a = float(input("Numerador: "))
    b = float(input("Divisor: "))
    r = a/b
except Exception as error:
    print(f'error: {error.__class__}')
else:
    print(f'Resultado: {r}')
finally:
    print("Programa executado.")
