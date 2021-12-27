/*
Implementation of adjacency list of a unweighted graph
for directed and undirected graph
*/

#include <iostream>
#include <vector>
#include <list>

using namespace std;

typedef vector<vector<int>> GRAPH;

void add_directed_edge(GRAPH &graph, int from, int to)
{
    graph[from].push_back(to);
}

void add_undirected_edge(GRAPH &graph, int from, int to)
{
    graph[from].push_back(to);
    graph[from].push_back(from);
}

void print_adjaceny_matrix(GRAPH const &graph)
{
    int nodes = graph.size();
    for (int from = 0; from < nodes; ++from)
    {
        cout << "Node " << from << " has neighbors: ";
        for (int to{0}; to < (int)graph[from].size(); ++to)
        {
            cout << graph[from][to] << " ";
        }
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    int nodes, edges;
    cout << "Enter nodes and edges" << endl;
    cin >> nodes >> edges;
    GRAPH graph(nodes, vector<int>(0));

    for (int edge{0}; edge < edges; ++edge)
    {
        int from, to;
        cout << "Enter from node, to node then the weight of  the edge " << endl;
        cin >> from >> to;
        add_directed_edge(graph, from, to);
    }
    print_adjaceny_matrix(graph);

    return 0;
}