
#include <iostream>

using namespace std;

/*
4
0 1 1 0
0 0 0 1
0 1 0 0
1 1 0 0

*/

bool dfs(bool** adjMatrix, int n, int curr, int end, bool* visited, int* parent)
{
    if (curr == end)
        return true;

    if (visited[curr])
        return false;

    visited[curr] = true;

    for (int i = 0; i < n; i++)
    {
        if (!visited[i] && adjMatrix[curr][i] && dfs(adjMatrix, n, i, end, visited, parent))
        {
            parent[i] = curr;

            return true;
        }
    }

    return false;
}

void initParent(int* parent, int n)
{
    for (int i = 0; i < n; i++)
    {
        parent[i] = i;
    }
}

void print(int* parent, int n, int end)
{
    int* path = new int[n];
    int curr = end;
    int index = 0;

    while (parent[curr] != curr)
    {
        path[index++] = curr;
        curr = parent[curr];
    }

    path[index++] = curr;

    for (int i = index - 1; i >= 0; i--)
    {
        cout << path[i] << " ";
    }
    
    delete[] path;
}

void printPath(bool** adjMatrix, int n, int start, int end)
{
    bool* visited = new bool[n] { false };
    int* parent = new int[n];

    initParent(parent, n);

    if (dfs(adjMatrix, n, start, end, visited, parent))
    {
        print(parent, n, end);
    }
    else
    {
        cout << "No path";
    }

    delete[] visited;
    delete[] parent;

}

int main()
{
    int n;
    cin >> n;

    bool** matrix = new bool* [n];
    for (int i = 0; i < n; i++)
    {
        matrix[i] = new bool[n];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    printPath(matrix, n, 2, 0);

    for (int i = 0; i < n; i++)
    {
        delete[] matrix[i];
    }

    delete[] matrix;

}
