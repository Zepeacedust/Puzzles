#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
template <class T> int size(const T &x) { return x.size(); }
const int INF = 2147483647;
#define rep(i,a,b) for (__typeof(a) i=(a); i<(b); ++i)
#define iter(it,c) for (__typeof((c).begin()) it = (c).begin(); it != (c).end(); ++it)

int main() {
    string s;
    cin >> s;
    char *res = new char[size(s)];
    int at = 0;
    rep(i,0,size(s)) {
        if (s[i] == '<') {
            at--;
        } else {
            res[at++] = s[i];
        }
    }
    rep(i,0,at) {
        cout << res[i];
    }
    cout << endl;
    return 0;
}

