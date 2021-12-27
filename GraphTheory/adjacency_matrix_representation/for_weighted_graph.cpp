/*
Implementation of adjacency matrix of a weighted graph
for directed and undirected graph
*/

#include <iostream>
#include <vector>

using namespace std;

typedef vector<vector<int>> GRAPH;

void add_directed_edge(GRAPH &graph, int from, int to, int cost)
{
    graph[from][to] = cost;
}
void add_undirected_edge(GRAPH &graph, int from, int to, int cost)
{
    graph[from][to] = graph[to][from] = cost;
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
                     << ", the weight of the edge is: " << graph[from][to] << " \n";
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
        int from, to, cost;
        cout << "Enter from node, to node then the weight of  the edge " << endl;
        cin >> from >> to >> cost;
        add_directed_edge(graph, from, to, cost);
    }
    print_adjaceny_matrix(graph);

    return 0;
}
