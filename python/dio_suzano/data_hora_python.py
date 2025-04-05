from datetime import date, datetime, time

d = date(1994,6,25)
hoje = date.today()
print(f'{d} \n {hoje}')

idade = hoje -d
print (idade)

data_hora = datetime(2023,7,10)
print(data_hora)

hora = time(10,20,0)
print(hora)

hora