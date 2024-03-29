#include <vector>
#include <string>
using namespace std;

class DAGGenerator
{
public:
    static int num_vars;
    static int num_nodes;
    int id; //id of current node to be added
    int var_name, num_not;

    static vector<vector<int>> adj;
    static vector<string> content;
    static vector<int> values;
    static vector<string> operators;
    static vector<int> indeg;
    static vector<string> expressions;
    static vector<int> y_coor;
    static vector<int> x_coor;
    static vector<vector<int>> edge_carvature;

    int get_num_vars() const;
    void set_num_vars(int);
    int get_num_nodes() const;
    void set_num_nodes(int);
    vector<vector<int>> get_adj() const;
    vector<string> get_content() const;
    vector<int> get_values() const;
    vector<string> get_operators() const;
    vector<int> get_indeg() const;
    vector<string> get_expressions() const;
    vector<int> get_x_coor() const;
    vector<int> get_y_coor() const;
    vector<vector<int>> get_edge_carvature() const;

    DAGGenerator();
    void restore_dag(char, int, int, string);
    void init();
    int random(int, int);
    void generate_dag();
    void assign_content();
    void assign_values();
    void display_dag();
    void compute_graph_layout();
    void do_all_tasks();
};