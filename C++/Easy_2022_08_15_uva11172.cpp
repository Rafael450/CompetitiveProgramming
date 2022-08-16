#include <bits/stdc++.h>
#define inf 0x3f3f3f3f

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int a, b;
        cin >> a >> b;
        if(a == b)
        {
            cout << "=\n";
        }
        else if(a > b)
        {
            cout << ">\n";
        }
        else
        {
            cout << "<\n";
        }
    }

    
    return 0;
}