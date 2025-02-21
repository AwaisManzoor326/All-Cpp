// using recursion in DFS
// #include <iostream>
// #include <queue>
// #include <stack>
// using namespace std;

// #define V 5 // Number of vertices

// char vertices[V] = {'A', 'B', 'C', 'D', 'E'};

// // Adjacency Matrix
// int graph[V][V] = {
// //   A  B  C  D  E
//     {0, 1, 1, 0, 0}, // A
//     {1, 0, 0, 1, 0}, // B
//     {1, 0, 0, 0, 1}, // C
//     {0, 1, 0, 0, 0}, // D
//     {0, 0, 1, 0, 0}  // E
// };

// // BFS using Adjacency Matrix
// void bfs(int start_idx)
// {
//     bool visited[V] = {false};
//     queue<int> q;
//     q.push(start_idx);
//     cout << "BFS: ";
//     while (!q.empty())
//     {
//         int index = q.front();
//         q.pop();
//         if (!visited[index])
//         {
//             cout << vertices[index] << " ";
//             visited[index] = true;
//             for (int i = 0; i < V; ++i)
//             {
//                 if (graph[index][i] && !visited[i])
//                 {
//                     q.push(i);
//                 }
//             }
//         }
//     }
//     cout << endl;
// }

// // DFS using Adjacency Matrix
// void dfs(int index, bool visited[V])
// {
//     cout << vertices[index] << " ";
//     visited[index] = true;
//     for (int i = 0; i < V; ++i)
//     {
//         if (graph[index][i] && !visited[i])
//         {
//             dfs(i, visited);
//         }
//     }
// }

// int main()
// {
//     // BFS Traversal
//     bfs(0); // Starting from vertex 'A'

//     // DFS Traversal
//     cout << "DFS: ";
//     bool visited[V] = {false};
//     dfs(0, visited); // Starting from vertex 'A'
//     cout << endl;

//     return 0;
// }






// using stack in DFS
#include <iostream>
#include <queue>
#include <stack>
using namespace std;

#define V 5 // Number of vertices

char vertices[V] = {'A', 'B', 'C', 'D', 'E'};

// Adjacency Matrix
int graph[V][V] = {
    //   A  B  C  D  E
    {0, 1, 1, 0, 0}, // A
    {1, 0, 0, 1, 0}, // B
    {1, 0, 0, 0, 1}, // C
    {0, 1, 0, 0, 0}, // D
    {0, 0, 1, 0, 0}  // E
};

// BFS using Adjacency Matrix
void bfs(int start_idx)
{
    bool visited[V] = {false};
    queue<int> q;
    q.push(start_idx);
    cout << "BFS: ";
    while (!q.empty())
    {
        int index = q.front();
        q.pop();
        if (!visited[index])
        {
            cout << vertices[index] << " ";
            visited[index] = true;
            for (int i = 0; i < V; ++i)
            {
                if (graph[index][i] && !visited[i])
                {
                    q.push(i);
                }
            }
        }
    }
    cout << endl;
}

// DFS using Stack (Explicit Stack Implementation)
void dfs(int start_idx)
{
    bool visited[V] = {false};
    stack<int> s;
    s.push(start_idx);
    cout << "DFS: ";
    while (!s.empty())
    {
        int index = s.top();
        s.pop();
        if (!visited[index])
        {
            cout << vertices[index] << " ";
            visited[index] = true;
            for (int i = V - 1; i >= 0; --i)
            {
                if (graph[index][i] && !visited[i])
                {
                    s.push(i);
                }
            }
        }
    }
    cout << endl;
}

int main()
{
    // BFS Traversal
    bfs(0); // Starting from vertex 'A'

    // DFS Traversal using Stack
    dfs(0); // Starting from vertex 'A'
    cout << endl;

    return 0;
}