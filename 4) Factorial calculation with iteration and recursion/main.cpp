#include <iostream>

/* run this program using the console 
pauser or add your own getch, system("pause") or input loop
 */

using namespace std;

int fattorialer(int n);
int fattorialec(int n);

int main(int argc, char** argv) {
	cout<<"Ricorsivo:"<<fattorialer(4)<<endl;
	cout<<"Ciclico:"<<fattorialec(4)<<endl;	
	return 0;
}
//ciclico
int fattorialec(int n) {
	int f=1;
	for (int i=n;i>1;i--) f=f*i;
	return f;
}
//ricorsiva
int fattorialer(int n) {
	if (n==1) return 1;
	int f=n*fattorialer(n-1);
	return f;
}
