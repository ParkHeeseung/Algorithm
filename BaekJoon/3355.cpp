#include <cstdio>

using namespace std;

int arr[1001], n, m, t, check;
bool mark[201], G[201][201];

void DFS(int x);

int main() {

	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			scanf("%d", &G[i][j]);

	for (int i = 0; i < m; i++)
		scanf("%d", &arr[i]);

	DFS(arr[0]);

	for (int i = 1; i < m && !check; i++)
		if (!mark[arr[i]]) check = 1;

	printf(check ? "NO" : "YES");

	return 0;

}

void DFS(int x) {

	mark[x] = 1;
	for (int i = 1; i <= n; i++)
		if (G[x][i] && !mark[i])
		{
			mark[i] = 1;
			DFS(i);
		}
}
