#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <vector>
#define mp make_pair
#define pb push_back
#define MAXV 100100

using namespace std;

typedef vector<int> vi;
typedef pair<int, string> is;

int main()
{
    ios::sync_with_stdio(false);
    double a, pi = 3.14159;
    cin >> a;
    cout << "VOLUME = " << fixed << setprecision(3) << (4 * pi * pow(a, 3)) / 3 << "\n";

    return 0;
}
