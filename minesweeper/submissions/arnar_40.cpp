#include <bits/stdc++.h>
#pragma GCC target("arch=sandybridge")
#pragma GCC optimize("O3")
#pragma GCC optimize("expensive-optimizations")
using namespace std;
template <class T> int size(const T &x) { return x.size(); }
#define rep(i,a,b) for (__typeof(a) i=(a); i<(b); ++i)
#define iter(it,c) for (__typeof((c).begin()) \
  it = (c).begin(); it != (c).end(); ++it)
#define fs first
#define sc second
#define pb push_back
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
const int INF = ~(1<<31);

const double EPS = 1e-9;
const double pi = acos(-1);
typedef unsigned long long ull;
typedef vector<vi> vvi;
typedef vector<vii> vvii;
template <class T> T smod(T a, T b) {
  return (a % b + b) % b; }

int main()
{
    ios_base::sync_with_stdio(false);

    int n, m, k;    
    cin >> n >> m >> k;
    vii arr(k);
    rep(i,0,k) cin >> arr[i].first >> arr[i].second;
    rep(i,0,n)
    {
        rep(j,0,m)
        {
            bool found = false;
            rep(a,0,k)
            {
                if(i+1 == arr[a].first && j+1 == arr[a].second) found = true;
            }
            if(found) cout << "*";
            else cout << ".";
        }
        cout << endl;
    }

    return 0;
}
