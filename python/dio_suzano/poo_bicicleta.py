class Bicicleta:
    def __init__(self, cor, modelo, ano, valor):
        self.cor = cor
        self.modelo = modelo
        self.ano = ano
        self.valor = valor
    
    def buzinar(self):
        print("Bip, bip")
        
    def parar(self):
        print("Freiando")
        
    def correr(self):
        print("Andando")
        
    def __str__(self): # isso seria parecido com o get
        return f'{self.__class__.__name__}: {self.cor.title()}, {self.ano}, R$ {self.valor:.2f}, {self.modelo.title()}'

caloi = Bicicleta("red", "caloi 10", 2010, 500.0)

caloi.correr()
caloi.buzinar()
# print(caloi.ano, caloi.cor.title(), caloi.modelo.title(), caloi.valor, sep="\n")

print(caloi)


# __init__ -> método inicializador
# __del__ -> destrutor