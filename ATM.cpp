#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int person;
        int money;
        cin >> person>> money;
        int arr[person];
        for (int i = 0; i < person; i++)
        {

            cin >> arr[i];
            money = money - arr[i];
            if (arr[i] > money)
            {
                cout << 0<<endl;
            }
            else
            {
                cout << 1<<endl;
            }
        }
    }
    return 0;
}
