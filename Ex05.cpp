#include <iostream>
#include <clocale>
#include <cstdlib> 
#include <ctime>

using namespace std;

int dado(){
    srand(time(NULL));
    
    return(1+ rand() % 6);
}

int main()
{
    int numero = 0;
    cout<<"Sorteie um n�mero entre 1 e 6: ";
    cin >> numero;
    numero = dado();
    cout << "O n�mero sorteado foi: " << numero;

    return 0;
}


