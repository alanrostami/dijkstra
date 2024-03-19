#include <iostream>
#include <string>
#include <limits>

#define inf std::numeric_limits<int>::max()

struct Node
{
    std::string name;
    int distance; // Distance from origin
    Node* prev; // Pointing to the previous node
    bool isOpen;
};

Node openNodes[7];

int graph[7][7] =
{
    0, 10, 15, inf, 30, inf, inf,
    inf, 0, inf, inf, inf, 57, inf,
    15, inf, 0, 16, inf, inf, 52,
    inf, inf, 13, 0, inf, inf, inf,
    30, inf, inf, inf, 0, 11, 34,
    inf, 49, inf, inf, 12, 0, inf,
    inf, inf, 63, inf, 35, inf, 0
};


void cheapestPath(int graph[7][7], int source);

int main(int argv, char* argc)
{
    cheapestPath(graph, 0);

    return 0;
}

// function dijkstra(Graph, source)
//      for each vertex v in Graph. Vertices:
//          dist[v] = infinity
//          prev[v] = undefined
//          add v to Q
//      dist[source] = 0
//      
//      while Q is not empty:
//          u = vertex in Q with min dist[u]
//          remove u from Q
//          
//          for each neighbor v of u still in Q:
//              alt = dist[u] + Graph.Edges(u, v)
//              if alt < dist[v]:
//                  dist[v] = alt
//                  prev[v] = u
//      return dist[], prev[]

void cheapestPath(int graph[7][7], int source)
{
    int dist[7];
    int prev[7];

    for (int i = 0; i < 7; i++)
    {
        dist[i] = inf;
        prev[i] = NULL;

        openNodes[i].distance = inf;
        openNodes[i].prev = NULL;

        std::cout << openNodes[i].distance << std::endl;
    }
}