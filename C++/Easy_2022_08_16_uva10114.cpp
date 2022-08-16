#include <bits/stdc++.h>
#define inf 0x3f3f3f3f

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int mon;
    double bor, down, n, now, pay, per;
    deque<pair<int, double>> dif;
    cin >> mon >> down >> bor >> n;
    while(mon >=0)
    {
        pay = bor/mon;
        now = bor + down;
        int when;

        double amm;
        for(int i =0; i<n;i++)
        {
            cin >> when >> amm;
            dif.push_back(make_pair(when, amm));
        }
        int j;
        bor +=pay;
        for(j = 0; now < bor || j==0; j++)
        {
            bor -= pay;
            if(dif[0].first == j)
            {
                per = dif[0].second;
                dif.pop_front();
            }
            now *= (1-per);
        }
        
        cout << j-1 << " month";
        if(j != 2) cout << "s\n";
        else cout << '\n';
        cin >> mon >> down >> bor >> n;

        dif.clear();

    }
    


    
    return 0;
}