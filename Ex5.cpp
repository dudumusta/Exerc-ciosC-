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
    cout<<"Sorteie um número entre 1 e 6: ";
    numero = dado();
    cout << "O número sorteado foi: " << numero;

    return 0;
}


