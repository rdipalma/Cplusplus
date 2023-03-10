#include <iostream>
#include <string>
using namespace std;

// Classe base Veicolo
class Veicolo {
  protected:
    string marca;
    int anno;

  public:
    Veicolo(string m, int a) : marca(m), anno(a) {}

    void stampaInfo() {
        cout << "Marca: " << marca << endl;
        cout << "Anno: " << anno << endl;
    }
};

// Classe derivata Automobile
class Automobile : public Veicolo {
  private:
    int numeroPorte;

  public:
    Automobile(string m, int a, int np) : Veicolo(m, a), numeroPorte(np) {}

    void stampaInfo() {
        cout << "Veicolo: Automobile" << endl;
        Veicolo::stampaInfo();
        cout << "Numero porte: " << numeroPorte << endl;
    }
};

// Classe derivata Moto
class Moto : public Veicolo {
  private:
    string tipoMoto;

  public:
    Moto(string m, int a, string tm) : Veicolo(m, a), tipoMoto(tm) {}

    void stampaInfo() {
        cout << "Veicolo: Moto" << endl;
        Veicolo::stampaInfo();
        cout << "Tipo moto: " << tipoMoto << endl;
    }
};

int main() {
    Automobile auto1("Fiat", 2015, 4);
    Moto moto1("Honda", 2020, "Sportiva");

    cout << "Informazioni automobile:" << endl;
    auto1.stampaInfo();
    cout << endl;

    cout << "Informazioni moto:" << endl;
    moto1.stampaInfo();
    cout << endl;

    return 0;
}
