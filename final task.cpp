
#include <iostream>
using namespace std;


    struct stcount
    {
        int znach; 
        int count = 0; 
    };


    int main()
    {
        int max = 10;
        int a[10];

        struct stcount counter[100] = { }; // счетчик


        for (int i = 0; i < max; i++)
        {
            cout << "enter " << i + 1 << "-number:  " << endl;
            cin >> a[i];

            for (int x = 0; x < max; x++)

                if (counter[x].count == 0) // если элемент еще не посчитан, добавим +1
                {
                    counter[x].znach = a[i];

                    counter[x].count++;

                    break;
                }

                else if (counter[x].znach == a[i]) // если элемент посчитан и значение == этому элементу
                {
                    counter[x].count++; // увеличим счетчик

                    break;
                }
        }

        cout << "------------------------------------" << endl;
        cout << "duplicate items have been removed!" << endl;

        for (int i = 0; i < max; i++)
            if (counter[i].count == 1) {

                cout << counter[i].znach << ",";
            }




    };

