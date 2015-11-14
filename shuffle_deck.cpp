#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;


int main()
{
    int deck[52];
    for(int i = 0; i < 52; i++)
        deck[i] = i+1;
    srand(time(NULL));
    for(int i = 0; i < 52; i++)
    {
        int random = rand() % (i+1);
        int temp = deck[i];
        deck[i] = deck[random];
        deck[random] = temp;
    }
    for(int i = 0; i < 52; i++)
        cout << deck[i] <<endl;
    return 0;
}