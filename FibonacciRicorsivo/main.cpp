#include <iostream>

using namespace std;
/*
	La serie di Fibonacci è una successione di 
	interi definita a partire dalla coppia 1,1
	in cui l'elemento successivo   
	è calcolato come somma degli ultimi due.
	Una definizione più formale è:
		a0 = 1
		a1 = 1
		an+1 = an + an-1  se n>2  
*/

//prototipi
int fib(int n);
// programma principale
int main(int argc, char** argv) {
	cout<<"Fibonacci (5):"<<fib(5)<<endl;
	return 0;
}
// fibonacci ricorsivo
int fib(int n) {
	if (n==0) return 0; //base induttiva
	if (n==1) return 1; //base induttiva
	else return fib(n-1)+fib(n-2);// passo indittivo
}
