
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n;
    cout << "Enter number of streetlight control units: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid number of units!\n";
        return 0;
    }

    vector<vector<int>> cost(n, vector<int>(n));

    cout << "\nEnter installation cost matrix:\n";
    cout << "(Enter 0 if there is no direct connection.)\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> cost[i][j];
        }
    }

    vector<bool> visited(n, false);
    int edges = 0;
    long long totalCost = 0;

    visited[0] = true;

    cout << "\nEdges selected by Prim's Algorithm:\n";

    while (edges < n - 1) {
        int minCost = INT_MAX;
        int u = -1, v = -1;

        for (int i = 0; i < n; i++) {
            if (visited[i]) {
                for (int j = 0; j < n; j++) {
                    if (!visited[j] && cost[i][j] > 0 &&
                        cost[i][j] < minCost) {
                        minCost = cost[i][j];
                        u = i;
                        v = j;
                    }
                }
            }
        }

        if (u == -1) {
            cout << "Network cannot connect all units.\n";
            return 0;
        }

        cout << "Unit " << u + 1 << " - Unit "
             << v + 1 << " : Cost = " << minCost << "\n";

        visited[v] = true;
        totalCost += minCost;
        edges++;
    }

    cout << "\nMinimum Total Installation Cost = "
         << totalCost << "\n";

    return 0;
}
