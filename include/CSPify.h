#include <bits/stdc++.h>
using namespace std;

class CSPify
{
public:
    static vector<pair<pair<int,int>,int>> nodes;
    static vector<vector<vector<int>>> len;
    static vector<vector<vector<pair<int,int>>>> edges;
    static vector<vector<vector<vector<pair<int,int>>>>> graph;
    static deque <pair<pair<pair<int,int>,int>,pair<pair<int,int>,int>>> q;

    void init();
    void cspify();
    void print_graph();
};