#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int max;
    max = 11;
    srand(time(0));
    switch (rand()%max)
    {
        case 1:
            cout << "The operation failed successfully." << endl;
            break;
        case 2:
            cout << "You're really good at this." << endl;
            break;
        case 3:
            cout << "That's what you get for typing too fast." << endl;
            break;
        case 4:
            cout << "Hey, if you want to go back to the GUI, I won't judge." << endl;
            break;
        case 5:
            cout << "Wrong way, buddy." << endl;
            break;
        case 6:
            cout << "I gotta go, I gotta be... literally anywhere else." << endl;
            break;
        case 7:
            cout << "What, were you expecting a train or something?" << endl;
            break;
        case 8:
            cout << "I'm sure you meant 'dir' but I'm just gonna let it slide." << endl;
            break;
        case 9:
            cout << "Let's roll a die! It's " + rnd.Next(1,6) + "!" << endl;
            break;
        case 10:
            cout << "You're lucky I don't smack you for being a bad typer." << endl;
            break;
        case 11:
            cout << "Did you know? You can type by typing! The sky is also blue and the floor is made of floor." << endl;
            break;
        case 12:
            cout << "Congratulations! You found an ultra-rare nothing!" << endl;
            break;
    }
    return 0;
}
