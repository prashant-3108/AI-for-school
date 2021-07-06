#include <bits/stdc++.h>
using namespace std;

class DAGGenerator
{
public:
    static int num_vars; 
    static int num_nodes;

    static vector<vector<int>> adj;
    static vector<string> content; 
    static vector<int> values;
    static vector<string> operators;
    static vector<int> indeg;
    static vector<string> expressions;

    void init();
    void generate_dag();
    void assign_content();
    void assign_values();
    void display_dag();
};