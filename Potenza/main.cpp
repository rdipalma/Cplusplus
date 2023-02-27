#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int base;
    int esp;
    do {
        cout<<"Inserisci la base:"<<endl;
        cin>>base;
    } while (base<=0);
    do {
        cout<<"Inserisci l'esponente:"<<endl;
        cin>>esp;
    } while (esp<0);
    int p,i;
    for (p=1,i=0;i<esp;p=p*base,i++) ;
    cout<<"La potenza vale:"<<p<<endl;
      
    system("PAUSE");
    return EXIT_SUCCESS;
}
