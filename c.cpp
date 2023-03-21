#include <iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    
    while (t--)
    {
        int i, N, K, arr[2];
        for (i = 0; i < 2; i++)
        {
            cin >> arr[i];
        }
        N = arr[0];
        K = arr[1];
        
        int prod = 1, x;
        for (i = 0; i < N; i++)
        {
            cin >> x;
            prod *= x;
            if (prod % K == 0)
            {
                cout << "YES" << endl;
                break;
            }
        }
        
        if (prod % K != 0)
        {
            cout << "NO" << endl;
        }
    }
 
 return 0;
}