#include <bits/stdc++.h>

using namespace std;

const int MAX_PILARES = 1001;

vector<pair<int, int>> grafo[MAX_PILARES];  // Grafo de adjacência (pilar, peso)

int dijkstra(int inicio, int fim) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;  // Min-heap para priorizar menor distância
    vector<int> dist(MAX_PILARES, INT_MAX);                                              // Distâncias mínimas

    dist[inicio] = 0;
    pq.push({0, inicio});

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        for (auto& p : grafo[u]) {
            int v = p.first;
            int peso = p.second;

            if (dist[u] + peso < dist[v]) {
                dist[v] = dist[u] + peso;
                pq.push({dist[v], v});
            }
        }
    }

    return dist[fim];
}

int main() {
    int numero_de_pilares, numero_de_pontes;
    cin >> numero_de_pilares >> numero_de_pontes;

    // Construindo o grafo
    for (int i = 0; i < numero_de_pontes; i++) {
        int pilar1, pilar2, quant_buracos;
        cin >> pilar1 >> pilar2 >> quant_buracos;
        grafo[pilar1].push_back({pilar2, quant_buracos});
        grafo[pilar2].push_back({pilar1, quant_buracos});  // Grafo não direcionado
    }

    int menor_numero_de_buracos = dijkstra(0, numero_de_pilares + 1);
    cout << menor_numero_de_buracos << endl;

    return 0;
}
