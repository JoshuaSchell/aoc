#include <iostream>
#include <vector>
#include <unordered_map>

using std::cin;
using std::cout;
using std::ios;
using std::vector;
using std::unordered_map;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, dist = 0;
    vector<int> one;
    unordered_map<int, int> two;
    while (cin >> a >> b) {
        one.push_back(a);
        if (two.find(b) != two.end())
            two[b]++;
        else
            two[b] = 1;
    }

    for (int i = 0; i < one.size(); i++) {
        dist += one[i] * two[one[i]];
    }

    cout << dist << "\n";
}
