#include<bits/stdc++.h>

using namespace std;

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define F(i, a, b) for(int i = a; i < b; ++i)
#define FD(i, a, b) for(int i = a; i > b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define all(x) (x).begin(), (x).end()
#define endl '\n'
 
int main()
{
    faster();
    int t = 1, n;
    cin >> t;
    while(t--)
    {
        int ans = -1;
        cin >> n;
        vi a(n);
        for(int &i : a) cin >> i;
        --n;
        for(int i = 0; i < n; ++i) if(a[i] > a[i + 1]) ans = i + 1;
        if(ans == -1)
        {
            if(a[0] <= a[n - 1]) cout << 0 << endl;
            else cout << n << endl;
        }
        else cout << ans << endl;
    }
    return 0;
}