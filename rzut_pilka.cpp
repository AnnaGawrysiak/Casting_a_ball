/*
Rzucasz pi³k¹ w pokoju. Mo¿e ona trafiæ w okno, œcianê lub drzwi. W zale¿noœci w co trafi, wydaje inny dŸwiêk,
np. "Crack" dla okna, "Boom" dla drzwi, "Smash" dla œciany. Stwórz typ enum Place dla miejsc, w które uderza pi³ka
i zmienn¹ typu Place z przypisan¹ wybran¹ wartoœci¹ miejsca (w opcji zaawansowanej, mo¿e to byæ losowe miejsce),
np. Place place = Window; Za pomoc¹ operatora trójsk³adnikowego wypisz na ekran odpowiedni dŸwiêk w zale¿noœci o wybranego
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

