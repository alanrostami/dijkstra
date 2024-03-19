#include <iostream>
#include <algorithm>
#include <vector>
#include <limits>

#define inf std::numeric_limits<int>::max()

//std::vector<int> distance;
//std::vector<char> prev;

void cheapestPath(int graph[][], int source);

int main(int argv, char* argc)
{
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
    
    int i, j;

    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            std::cout << "\t" << graph[i][j];
        }
        std::cout << std::endl;
    }

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

void cheapestPath(int graph[][], int source)
{

}