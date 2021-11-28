#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    int**mas = new int*[4];
    mas[0] = new int[1];
    mas[1] = new int[3];
    mas[2] = new int[3];
    mas[3] = new int[4];
    srand(time(NULL));
    for(i = 0; i < 1; i++)
    {
        mas[0][i] = rand()%10;
        cout << mas[0][i] << " ";
    }
    cout << endl;
    for(i = 0; i < 3; i++)
    {
        mas[1][i] = rand()%10;
        cout << mas[1][i] << " ";
    }
    cout << endl;
    for(i = 0; i < 3; i++)
    {
        mas[2][i] = rand()%10;
        cout << mas[2][i] << " ";
    }
    cout << endl;
    for(i = 0; i < 4; i++)
    {
        mas[3][i] = rand()%10;
        cout << mas[3][i] << " ";
    }
    cout << endl;
}
