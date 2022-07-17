#include <bits/stdc++.h>
using namespace std;

// A Unique Letter
int main()
{
    string s;
    cin >> s;

    string res = "-1";
    for(int i=0; i<3; i++)
    {
        int cnt = count(s.begin(), s.end(), s[i]);
        if(cnt==1)
        {
            res = s[i];
            break;
        }
    }
    cout << res;
}
