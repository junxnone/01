#include <iostream>
using namespace std;

int a[100];
int b[100];
int now;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
    {
        now = a[i - 1];

        if (i == 0 || i == n - 1)
            b[i] = 1;
        else
            b[i] = 2;

        for (int j = i - 1; j >= 0; j--)
        {
            if (a[j] > now)
            {
                now = a[j];
                b[i]++;
            }
        }

        now = a[i + 1];

        for (int j = i + 1; j < n; j++)
        {
            if (a[j] > now)
            {
                now = a[j];
                b[i]++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}
