# Dicionário com os valores de desconto
descontos = {
    "DESCONTO10": 0.10,
    "DESCONTO20": 0.20,
    "SEM_DESCONTO": 0.00
}

# Entrada do usuário
preco = float(input('Preço: ' ).strip())
cupom = input('Cupom: ').upper().strip()

# TODO: Aplique o desconto se o cupom for válido:
for i, j in descontos.items():
  if cupom == i:
    desconto = j
 
print(desconto)

print (f'Preço final: {preco - (preco * desconto)}')