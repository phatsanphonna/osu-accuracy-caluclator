#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    long double scores[3];
    long double totalObject = 0;
    long double s;
    long double accuracy;

    for (int i = 0; i < sizeof(scores) / sizeof(scores[0]); i++)
    {
        scanf("%Lf", &s);
        scores[i] = s;
        totalObject += s;
    }

    accuracy = (((50 * scores[2]) + (100 * scores[1]) + (300 * scores[0])) / (300 * totalObject)) * 100;
    int accInt = (int)accuracy;

    if (accuracy - accInt == 0)
    {
        cout << setprecision(4) << accuracy << ".00%" << endl;
    }
    else
    {
        cout << setprecision(4) << accuracy << "%" << endl;
    }
    return 0;
}