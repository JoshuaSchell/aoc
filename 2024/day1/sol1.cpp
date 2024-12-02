#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::ios;
using std::vector;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, dist = 0;
    vector<int> one, two;
    while (cin >> a >> b) {
        one.push_back(a);
        two.push_back(b);
    }

    sort(one.begin(), one.end());
    sort(two.begin(), two.end());

    for (int i = 0; i < one.size(); i++) {
        dist += (abs(one[i] - two[i]));
    }

    cout << dist << "\n";
}
