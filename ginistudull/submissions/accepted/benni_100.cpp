#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,a,b) for(int i = (a); i < (b); i++)
#define iter(it,c) for(auto it = (c).begin(); it != (c).end();++it)
#define pb push_back
#define fs first
#define sc second
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;

const int INF = ~(1<<31);
const double pi = acos(-1);
const double EPS = 1e-9;
typedef unsigned long long ull;

template <class T> T smod(T a, T b) {
  return (a % b + b) % b; }

int main() {
    cin.sync_with_stdio(false);
    int n;
    cin >> n;
    vector<double> T(n);
    rep(i,0,n) cin >> T[i];
    double sm = 0;
    rep(i,0,n) sm += T[i];
    double bot = 2*sm*n;
    double top = 0;
    sort(T.begin(), T.end());
    double t = 0;
    rep(i,0,n) {
        t += T[i];
        sm -= T[i];
        top += abs(t - T[i]*(i+1));
        top += abs(sm - T[i]*(n-(i+1)));
    }
    cout << setprecision(10) << fixed << top/bot << endl;

    return 0;
}


