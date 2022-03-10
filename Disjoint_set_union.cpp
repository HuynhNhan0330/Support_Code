#include "bits/stdc++.h"

using namespace std;

const int xmax = 1e5 + 5;

int n, parent[xmax];

void makeSet()
{
    for (int i = 0; i < xmax; ++i) parent[i] = i;
}

int findSet(int u)
{
    while (u != parent[u]) u = parent[u];
    return u;
}

void unionSet(int u, int v)
{
    int up = parent[u], vp = parent[v];
    parent[up] = vp;
}

int32_t main() 
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    
    return 0;
}