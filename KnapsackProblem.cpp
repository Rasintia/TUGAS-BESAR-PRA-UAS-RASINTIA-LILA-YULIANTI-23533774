#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Item {
    int index;
    int weight;
    int profit;
    double ratio;
};

bool cmp(Item a, Item b) {
    return a.ratio > b.ratio;
}

int main() {
    cout << "NAMA : RASINTIA LILA YULIANTI\n";
    cout << "NIM  : 23533774\n";
    cout << "KELAS: 4C\n\n";

    const int n = 8;
    int capacity = 15;
    int weight[n] = {2, 3, 5, 3, 3, 7, 7, 4};
    int profit[n] = {21, 35, 70, 42, 80, 20, 10, 5};

    vector<Item> items;
    for (int i = 0; i < n; ++i) {
        items.push_back({i+1, weight[i], profit[i], (double)profit[i]/weight[i]});
    }

    sort(items.begin(), items.end(), cmp);

    int totalWeight = 0, totalProfit = 0;
    cout << "Objek terpilih:\n";
    for (auto it : items) {
        if (totalWeight + it.weight <= capacity) {
            totalWeight += it.weight;
            totalProfit += it.profit;
            cout << "Objek " << it.index
                 << " (Berat: " << it.weight
                 << ", Profit: " << it.profit << ")\n";
        }
    }

    cout << "Total profit maksimum: " << totalProfit << endl;
    return 0;
}
