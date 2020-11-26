#include <iostream>
#include <cstdlib> 
#include <time.h> 
using namespace std;

/*
-- UPDATE --
Less important to the overall program, but I fixed a thing where the "dieroll" variable used the "max" variable instead of the "diemax" variable.
Also I got rid of the previous updates (they would have taken up too much space)
*/

int main()
{
    int max,diemax,dieroll;
    max = 11; // used for the maximum amount of messages -- is zero-indexed
    diemax = 5; // used for the below dieroll variable -- zero-indexed
    dieroll = rand()%diemax; // used for the "Let's roll a die!" message
    srand(time(0)); // RNG seeding (no idea what that is)
    switch (rand()%max)
    {
        case 0:
            cout << "The operation failed successfully." << endl;
            break;
        case 1:
            cout << "You're really good at this." << endl;
            break;
        case 2:
            cout << "That's what you get for typing too fast." << endl;
            break;
        case 3:
            cout << "Hey, if you want to go back to the GUI, I won't judge." << endl;
            break;
        case 4:
            cout << "Wrong way, buddy." << endl;
            break;
        case 5:
            cout << "I gotta go, I gotta be... literally anywhere else." << endl;
            break;
        case 6:
            cout << "What, were you expecting a train or something?" << endl;
            break;
        case 7:
            cout << "I'm sure you meant 'dir' but I'm just gonna let it slide." << endl;
            break;
        case 8:
            cout << "Let's roll a die! It's " << dieroll+1 << "!" << endl;
            break;
        case 9:
            cout << "You're lucky I don't smack you for being a bad typer." << endl;
            break;
        case 10:
            cout << "Did you know? You can type by typing! The sky is also blue and the floor is made of floor." << endl;
            break;
        case 11:
            cout << "Congratulations! You found an ultra-rare nothing!" << endl;
            break;
        default:
            // this has never happened and it shouldn't happen, but it's apparently good practice to put this here anyway
            break;
    }
    return 0;
}
