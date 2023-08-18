#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec;
    while (true)
    {
        int k;
        cin >> k;
        if (!k)
            break;
        vec.push_back(k);
    }
    if (vec.size() == 4)
    {

        if (vec[0] == vec[2])
            cout << 1;

        if (vec[0] < vec[2] && vec[0] >= vec[1])
        {
            double l = ((1 / (vec[2] - vec[1])) * (vec[0] - vec[1]));
            cout << setprecision(1) << l << endl;
        }
        else if (vec[0] > vec[2] && vec[0] <= vec[3])
        {
            double d = ((1 / (vec[2] - vec[3])) * (vec[0] - vec[3]));
            cout << setprecision(1) << d;
        }
    }
    else
    {
        if (vec[0] >= vec[2] && vec[0] <= vec[3])
            cout << 1;

        if (vec[0] < vec[2] && vec[0] >= vec[1])
        {
            double l = ((1 / (vec[2] - vec[1])) * (vec[0] - vec[1]));
            cout << setprecision(1) << l << endl;
        }
        else if (vec[0] > vec[3] && vec[0] <= vec[4])
        {
            double data = ((1 / (vec[3] - vec[4])) * (vec[0] - vec[4]));
            cout << setprecision(1) << data;
        }
    }

    return 0;
}