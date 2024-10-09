#include <iostream>
using namespace std;
int main()
{
    int a, b, n, k, m;
    int i = 0, j, num = 0;
    int sum = 1;
    int SUM = 10;
    cin >> a >> b >> n >> k >> m;
    for (j = i * 10 + n; j < a; i++)
        ;
    for (int p = 1; p <= m - 1; p++)
    {
        sum = sum * 10;
        SUM = SUM * 10;
    }
    if (b >= SUM)
    {
        for (j; j < SUM; j = j + 10)
        {
            if (j % k == 0)
                num++;
            else
                continue;
        }
    }
    else
    {
        for (j; j <= b; j = j + 10)
        {
            if (j % k == 0)
                num++;
            else
                continue;
        }
        cout << num;
        return 0;
    }
}
