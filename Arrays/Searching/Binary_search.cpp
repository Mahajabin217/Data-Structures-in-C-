// How Binary Search Works:

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int left = 0;
    int right = n - 1;

    int target;
    cin >> target;

    int ans = -1;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (a[mid] == target)
        {
            ans = mid;
            break;
        }

        if (a[mid] < target)
        {
            left = mid + 1;
        }

        else
        {
            right = mid - 1;
        }
    }

    if (ans != -1)
    {
        cout << "Found at the index " << ans << endl;
    }

    else
    {
        cout << "Not Found" << endl;
    }
}

/*
Input:
        8
        1 4 5 7 10 15 18 20
        15

Output: Found at the index 5
*/
