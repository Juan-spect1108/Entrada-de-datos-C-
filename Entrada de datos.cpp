  #include <iostream>
  
  using namespace std;
  
  int main(){
  	
  	int numero1;
  	int numero2;
  	int suma=0;
  	int resta=0;
  	int multiplicacion=0;
  	int division=0;
  	
  	cout<<"Digite un numero:"; cin>>numero1;
  	cout<<"Digite otro numero:";cin>>numero2;
  	
  	suma= numero1 + numero2;
  	resta= numero1-numero2;
  	multiplicacion= numero1 * numero2;
  	division= numero1/numero2;
  	
  	cout<<"La suma es: "<<suma<<endl;
  	cout<<"La resta es: "<<resta<<endl;
  	cout<<"La multiplicacion es: "<<multiplicacion<<endl;
  	cout<<"La division es: "<<division<<endl;
  	
  	return 0;
  }
