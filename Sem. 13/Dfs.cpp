
#include <iostream>

using namespace std;

/*
4
0 1 1 0
0 0 0 1
0 1 0 0
1 1 0 0

*/

bool dfs(bool** adjMatrix, int n, int curr, int end, bool* visited)
{
    if (curr == end)
        return true;

    if (visited[curr])
        return false;

    visited[curr] = true;

    for (int i = 0; i < n; i++)
    {
        if (!visited[i] && adjMatrix[curr][i])
        {
            if (dfs(adjMatrix, n, i, end, visited))
                return true;
        }
    }

    return false;
}

bool pathExist(bool** adjMatrix, int n, int start, int end)
{
    bool* visited = new bool[n] { false };

    bool result = dfs(adjMatrix, n, start, end, visited);

    delete[] visited;

    return result;
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

    if (pathExist(matrix, n, 1, 2))
    {
        cout << "yes";
    }

    for (int i = 0; i < n; i++)
    {
        delete[] matrix[i];
    }

    delete[] matrix;

}
