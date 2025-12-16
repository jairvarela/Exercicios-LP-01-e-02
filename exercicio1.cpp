#include <iostream>
using namespace std;

int soma(){
    int primeiro;
    int segundo;
    cout<<"Insira o primeiro número: "<< endl;
    cin >> primeiro;
    
    cout<<"Insira o segundo número: "<< endl;
    cin >> segundo;
    
    return primeiro+segundo;
    
}
int subtrair(){
    int primeiro;
    int segundo;
    cout<<"Insira o primeiro número: "<< endl;
    cin >> primeiro;
    
    cout<<"Insira o segundo número: "<< endl;
    cin >> segundo;
    
    return primeiro-segundo;
    
}

int multiplicar(){
    int primeiro;
    int segundo;
    cout<<"Insira o primeiro número: "<< endl;
    cin >> primeiro;
    
    cout<<"Insira o segundo número: "<< endl;
    cin >> segundo;
    
    return primeiro*segundo;
    
}

int dividir(){
    int primeiro;
    int segundo;
    cout<<"Insira o primeiro número: "<< endl;
    cin >> primeiro;
    
    cout<<"Insira o segundo número: "<< endl;
    cin >> segundo;
    
    return primeiro/segundo;
    
}

int main()
{

    cout<<soma()<< endl;
    cout<<subtrair()<< endl;
    cout<<multiplicar<< endl();
    cout<<dividir()<< endl;

    return 0;
}