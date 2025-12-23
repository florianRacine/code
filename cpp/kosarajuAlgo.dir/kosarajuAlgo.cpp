/**
 *    author:  evoPrg
 *    created: 03.04.2024 06:55:14
**/
#include <bits/stdc++.h>

using namespace std;

void DFS1 (int v, vector<int> & visited, vector<int> adj[], int n, stack<int> & ord) {
    visited[v] = true;
    for (int u : adj[v]) {
        if (!visited[u]) {
            DFS1(u, visited, adj, n, ord);
        }
    }
    ord.push(v);
}

void DFS2 (int v, vector<int> radj[], int n, vector<int> & visited, int last, unordered_map<int, int> & who) {
    who[v] = last;
    visited[v] = true;
    for (int u : radj[v]) {
        if (!visited[u]) {
            DFS2(u, radj, n, visited, last, who);
        }
    }
}

void Kosaraju (int n, unordered_map<int,int> & who, vector<int> & rp, vector<int> adj[], vector<int> radj[]) {
    vector<int> visited(n, false);

    // First step of Kosaraju's algorithm DFS
    stack<int> ord;
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            DFS1(i, visited, adj, n, ord);
        }
    }

    // Reset visited
    for (int i = 0; i < n; i++) {
        visited[i] = false;
    }

    while (!ord.empty()) {
        int v = ord.top();
        ord.pop();
        if(!visited[v]) {
            rp.push_back(v);
            DFS2(v, radj, n, visited, v, who);
        }
    }
}

void getInput(int & n, int & m, vector<int> adj[], vector<int> radj[], unordered_map<string,int> & mp) {
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        mp[s] = i;
    }

    // Process edges
    cin >> m;
    for (int i = 0; i < m; i++) {
        string s1, s2;
        cin >> s1;
        cin >> s2;
        adj[mp[s1]].push_back(mp[s2]);
        radj[mp[s2]].push_back(mp[s1]);
    }
}

int main() {
    string source;
    cin >> source;

    // Process nodes
    int n = 0, m = 0;
    cin >> n;
    vector<int> adj[n];
    vector<int> radj[n];
    unordered_map<string,int> mp;
    unordered_map<int, int> who; // who[v] return the representant of v in the strongly connected componnent
    vector<int> rp;

    getInput(n, m, adj, radj, mp);

    Kosaraju(n, who, rp, adj, radj);

    unordered_map<int, int> inDegree;
    
    for (int v = 0; v < n; v++) {
        for (int u : adj[v]) {
            if (who[v] != who[u]) {
                inDegree[who[u]]++;
            }
        }
    }

    int sol = 0;
    for (int u : rp) {
        if (inDegree[u] == 0 && u != who[mp[source]]) {
            sol++;
        }
    }
    cout << sol << endl;

    return 0;
}
