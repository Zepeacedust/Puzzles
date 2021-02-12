#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
template <class T> int size(const T &x) { return x.size(); }
#define rep(i,a,b) for(int i = (a); i < (b); i++)
#define iter(it,c) for(auto it = (c).begin(); it != (c).end();++it)
#define pb push_back
#define fs first
#define sc second
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

const int INF = ~(1<<31);
const double pi = acos(-1);
const double EPS = 1e-9;

int main() {
    cin.sync_with_stdio(false);
    int n,m,q;
    cin >> n >> m >> q;
    vii M(m);
    rep(i,0,m) cin >> M[i].fs >> M[i].sc;
    int cost = M[0].sc;
    int sm = 0;
    rep(i,0,q) {
        int a,b;
        cin >> a >> b;
        if(a == 2) sm += b*cost;
    }
    cout << sm << endl;
    return 0;
}


