#include <iostream>
#include <math.h>
using namespace std;

int main( int argc,char** argv) {
  char op,continuar;
  float num1,num2,exp, base, y,r;
  int x,x2,x3,i,i2,resultado,resultado2,cont,i3;
 
do{ 
  cout << "escolha a operação: +,-,*,/,f,r:";
  cin >> op;
  switch (op){
    case '+':
    	cout<< "Digite um numero: ";
	cin>> num1;
  	cout<< "Digite um numero: ";
  	cin>> num2;
      cout << num1 << "+" << num2 << "=" << num1 + num2;
      break;
    case '-':
    
    	cout<< "Digite um numero: ";
	cin>> num1;
  	cout<< "Digite um numero: ";
  	cin>> num2;
       cout << num1 << "-" << num2 << "=" << num1 - num2;
      break;
    case '*':
    	
    	cout<< "Digite um numero: ";
	cin>> num1;
  	cout<< "Digite um numero: ";
  	cin>> num2;
      cout << num1 << "*" << num2 << "=" << num1 * num2;
      break;
    case '/':
    
    	cout<< "Digite um numero: ";
	cin>> num1;
  	cout<< "Digite um numero: ";
  	cin>> num2;
      cout << num1 << "/" << num2 << "=" << num1 / num2;
      break;
    case 'f':
    	
    	cout<< "Digite um numero: ";
	cin>> num1;
  	cout<< "Digite um numero: ";
  	cin>> num2;
       resultado=1;
		  for (i=1;i<=num1;i++){
		  resultado = resultado*i;} cout<<resultado;
      break;
    case 'r':
    	cout<<("digite o numero:");
	cin>>num1;
	cout << "A raiz quadrada de " << num1 <<
		" é " << sqrt(num1) << "\n\n";
      
      break;
    default:
      cout<<"O operador esta errado";
      break;
  }
	;
  
    cout<<("\n deseja continuar? digite qualquer para sair ou z para continuar");
  	cin>>(continuar); }  while (continuar == 'z' );
  	return 0;
}