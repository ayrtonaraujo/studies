#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// Classe abstrata Figura
class Figura {
protected:
    string cor;

public:
    // Construtor
    Figura(const string& cor) : cor(cor) {}

    // Métodos virtuais puros (abstratos)
    virtual double area() const = 0;
    virtual string toString() const {
        return "Cor: " + cor + "\nÁrea: " + to_string(area());
    }

    // Métodos de acesso
    void setCor(const string& cor) {
        this->cor = cor;
    }

    string getCor() const {
        return cor;
    }

    // Virtual destructor
    virtual ~Figura() = default;
};

// Classe Retangulo
class Retangulo : public Figura {
protected:
    double lado1, lado2;

public:
    Retangulo(double lado1, double lado2, const string& cor)
        : Figura(cor), lado1(lado1), lado2(lado2) {}

    double getLado1() const { return lado1; }
    double getLado2() const { return lado2; }

    void setLado1(double lado1) { this->lado1 = lado1; }
    void setLado2(double lado2) { this->lado2 = lado2; }

    double area() const override {
        return lado1 * lado2;
    }

    string toString() const override {
        return Figura::toString() + "\nLado1: " + to_string(lado1) + 
               "\nLado2: " + to_string(lado2);
    }
};

// Classe Quadrado
class Quadrado : public Retangulo {
public:
    Quadrado(double lado, const string& cor)
        : Retangulo(lado, lado, cor) {}

    string toString() const override {
        return "Classe Quadrado\n" + Retangulo::toString();
    }
};

// Classe Triangulo
class Triangulo : public Figura {
private:
    double base, altura;

public:
    Triangulo(double base, double altura, const string& cor)
        : Figura(cor), base(base), altura(altura) {}

    double getBase() const { return base; }
    double getAltura() const { return altura; }

    void setBase(double base) { this->base = base; }
    void setAltura(double altura) { this->altura = altura; }

    double area() const override {
        return (base * altura) / 2.0;
    }

    string toString() const override {
        return Figura::toString() + "\nBase: " + to_string(base) + 
               "\nAltura: " + to_string(altura);
    }
};

// Classe Circulo
class Circulo : public Figura {
private:
    double raio;

public:
    Circulo(double raio, const string& cor)
        : Figura(cor), raio(raio) {}

    double getRaio() const { return raio; }
    void setRaio(double raio) { this->raio = raio; }

    double area() const override {
        return M_PI * raio * raio; // M_PI é o valor de Pi da biblioteca cmath
    }

    string toString() const override {
        return Figura::toString() + "\nRaio: " + to_string(raio);
    }
};

// Função principal
int main() {
    Retangulo ret(5.0, 10.0, "Azul");
    Quadrado quad(4.0, "Vermelho");
    Triangulo tri(6.0, 8.0, "Verde");
    Circulo circ(3.0, "Amarelo");

    cout << ret.toString() << endl << endl;
    cout << quad.toString() << endl << endl;
    cout << tri.toString() << endl << endl;
    cout << circ.toString() << endl;

    return 0;
}
