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
    int n;
    cin >> n;
    int s = 0;
    if (n >= 1) {
        for (int i = 1; i <= n; i++) {
            s += i;
        }
    } else {
        for (int i = n; i <= 1; i++) {
            s += i;
        }
    }
    cout << s << endl;

    return 0;
}
