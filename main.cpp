#include <iostream>
#include <cstdlib>
#include <string>
#include <time>
using namespace std;

/*
I haven't tested if any of this works. I'll try to check when I get the chance.
At the very least the switch-case statement should work.

UPDATE -- tested, the code compiles and runs perfectly. I'll leave this comment here
for future reference.
*/

int main()
{
    int max,diemax,dieroll;
    max = 11;
    diemax = 5;
    dieroll = rand()%max;
    srand(time(0));
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
            cout << "Let's roll a die! It's " << dieroll << "!" << endl;
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
    }
    return 0;
}
