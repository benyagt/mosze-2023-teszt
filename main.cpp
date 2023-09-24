#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //N_ELEMENTS
    std::cout << '1-100 ertekek duplazasa' //hianyzo sorzaro pontosvesszo, idezojel kell aposztrof helyett
    for (int i = 0;)  //hianyzik sokminden a ciklusbol
    {
        b[i] = i * 2; //(i+1)-et kellett volna irni
    }
    for (int i = 0; i; i++) //hibas ciklus
    {
        std::cout << "Ertek:" //hianyzo ertek meg endl;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; //memoriaszemet van bene
    for (int i = 0; i < N_ELEMENTS, i++) //vesszo helyett pontos vesszo
    {
        atlag += b[i] //pontosvesszo!!
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
