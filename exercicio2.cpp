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
int fibbo(int n){
if(n == 0){
    return 0;
}

if(n == 1){
    
    return 1;
}
    
    return fibbo(n -1) + fibbo(n-2);
}

int main()
{
    int n=0;
    cout<<"Insira a posição da sequencia de fibbonachi: "<< endl;
    cin >> n;
    
    cout << fibbo(n);

    return 0;
}