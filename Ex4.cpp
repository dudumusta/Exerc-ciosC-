#include <iostream>

using namespace std;

float funcaoMaior(float n1, float n2, float n3){
    if(n1 < n2 && n1 < n3){
        return n1;
    } else if (n2 < n1 && n2 < n3){
        return n2;
    }else{
        return n3;
    } 
}


int main()
{
    float n1,n2,n3, resultado;
    cout<<"Digite um número";
    cin >> n1;
    cout << "Digite outro número";
    cin >> n2;
    cout << "Digite outro número";
    cin >> n3;
    resultado = funcaoMaior(n1, n2, n3);
    
    cout << "\nO numero menor é: " << resultado;

    return 0;
}
