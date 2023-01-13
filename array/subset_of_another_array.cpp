#include <bits/stdc++.h>
using namespace std;
int checkSubset(int *a, int *b, int n1, int n2)
{
    int j = 0, c = 0;
    int maxi = max(n1, n2);
    int mini = min(n1, n2);

    for (int i = 0; i < maxi; i++)
    {
        if (n1 > n2)
        {
            if (a[i] == b[j])
            {
                c++;
                j++;
            }
        }
        else if (n1 < n2)
        {
            if (b[i] == a[j])
            {
                c++;
                j++;
            }
        }else{
            if (a[i] == b[j])
            {
                c++;
                j++;
            }
        }
    }
    return c;
}
int main()
{
    int n1, n2;
    cin >> n1;
    int a1[n1];
    for (int i = 0; i < n1; i++)
    {
        cin >> a1[i];
    }
    cin >> n2;
    int a2[n2];
    for (int i = 0; i < n2; i++)
    {
        cin >> a2[i];
    }
    sort(a1, a1 + n1);
    sort(a2, a2 + n2);
    int maxi = max(n1, n2);
    int mini = min(n1, n2);
    int r = checkSubset(a1, a2, n1, n2);
    cout << mini << " " << r << endl;
    if (r == mini)
    {
        cout << "Yes";
    }
    else
        cout << "No";
}
