#include <iostream>
using namespace std;
int binarySearch(int arr[], int searchItem, int n, bool searchFirst)
{
    int s = 0, e = n - 1, result = -1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (searchItem == arr[mid])
        {
            //    return arr[mid];
            // e=mid-1;
            result = mid;
            if (searchFirst)
                e = mid - 1;
            else
                s = mid + 1;
        }
        else if (searchItem < arr[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return result;
}
int main()
{
    int n, searchItem;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> searchItem;
    int firstIndex = binarySearch(arr, searchItem, n, true);
    if (firstIndex == -1)
        cout << "No\n";
    else
    {
        int lastIndex = binarySearch(arr, searchItem, n, false);
        int occurance = lastIndex - firstIndex + 1;
        if (occurance > 1)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}
