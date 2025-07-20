#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "NAMA : RASINTIA LILA YULIANTI\n";
    cout << "NIM  : 23533774\n";
    cout << "KELAS: 4C\n\n";

    vector<int> coin = {7, 5, 4, 3, 2};
    int amount = 74;

    vector<pair<int, int>> result;
    for (int c : coin) {
        int count = amount / c;
        if (count > 0) {
            result.push_back({c, count});
            amount -= c * count;
        }
    }

    cout << "Penukaran koin untuk jumlah 74:\n";
    int totalCoins = 0;
    for (auto [koin, jumlah] : result) {
        cout << koin << " x " << jumlah << " = " << koin * jumlah << endl;
        totalCoins += jumlah;
    }
    cout << "Total koin: " << totalCoins << endl;

    return 0;
}
