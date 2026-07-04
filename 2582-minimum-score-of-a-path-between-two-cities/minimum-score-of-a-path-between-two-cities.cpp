class Solution {
public:
struct DSU {
    //space O(n)
    vector<int> p, sz;

    DSU(int n) {
        p.resize(n + 1);
        sz.resize(n + 1, 1);
        for (int i = 1; i <= n; i++)
            p[i] = i;
    }

    //TC O(α(n)) - α(n) = Inverse Ackermann Function  // almost O(1)
    int find(int x) {
        if (p[x] == x) return x;
        return p[x] = find(p[x]); //path compression
    }

    //TC 2*O(α(n))
    void unite(int a, int b) {
        a = find(a);
        b = find(b);
        if (a == b) return;

        if (sz[a] < sz[b]) swap(a, b);

        p[b] = a;
        sz[a] += sz[b];
    }
};
    static bool cmp(vector<int>&a, vector<int> &b) {
        return a[2] <= b[2];
    }
    int minScore(int n, vector<vector<int>>& roads) {
        DSU dsu(n);
        for(auto &e : roads) dsu.unite(e[0], e[1]); // created dsu

        int comp = dsu.find(1); // find component which contains node 1
        int ans = INT_MAX; // current ans

        for(auto &e : roads) { // all edges which contributes in current component is responsible of answer
            if(dsu.find(e[0]) == comp) ans = min(ans, e[2]);
        }

        return ans;


    }
};