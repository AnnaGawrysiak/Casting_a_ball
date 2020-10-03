/*
Rzucasz pi�k� w pokoju. Mo�e ona trafi� w okno, �cian� lub drzwi. W zale�no�ci w co trafi, wydaje inny d�wi�k,
np. "Crack" dla okna, "Boom" dla drzwi, "Smash" dla �ciany. Stw�rz typ enum Place dla miejsc, w kt�re uderza pi�ka
i zmienn� typu Place z przypisan� wybran� warto�ci� miejsca (w opcji zaawansowanej, mo�e to by� losowe miejsce),
np. Place place = Window; Za pomoc� operatora tr�jsk�adnikowego wypisz na ekran odpowiedni d�wi�k w zale�no�ci o wybranego
(lub wylosowanego) miejsca.
*/


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

enum Place
{
    Window,
    Door,
    Wall
};

int main()
{
    srand( time( 0 ) );

    Place place = Door;

    int number = static_cast < Place >( rand() % 2 );

    cout << number << endl;

    cout << "A ball has been cast. The ball hit the: ";

    number == 0 ? cout << " window " << endl : (number == 1 ? cout << "door "<< endl  : cout << "wall" << endl);

    return 0;
}

