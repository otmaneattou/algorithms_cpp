#include <iostream>
#include <vector>

using namespace std;

typedef vector<vector<int>> GRAPH;

void add_directed_edge(GRAPH &graph, int from, int to)
{
    graph[from][to]++;
}
void add_undirected_edge(GRAPH &graph, int from, int to)
{
    graph[from][to]++;
    graph[to][from]++;
}

void print_adjaceny_matrix(GRAPH const &graph)
{
    int nodes = graph.size();
    for (int from = 0; from < nodes; ++from)
    {
        for (int to = 0; to < nodes; ++to)
        {
            if (graph[from][to] > 0)
                cout << "From " << from << " to " << to
                     << " there are " << graph[from][to] << " edges\n";
        }
    }
}

int main(int argc, char const *argv[])
{
    int nodes, edges;
    cout << "Enter nodes and edges" << endl;
    cin >> nodes >> edges;
    GRAPH graph(nodes, vector<int>(nodes));

    for (int edge{0}; edge < edges; ++edge)
    {
        int from, to;
        cout << "Enter from node then to node" << endl;
        cin >> from >> to;
        add_directed_edge(graph, from, to);
    }
    print_adjaceny_matrix(graph);

    return 0;
}
