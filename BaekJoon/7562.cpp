#include <stdio.h>
#include <queue>
using namespace std;

int t,n,sx,sy,ex,ey,ax,ay,x,y;
int dx[] = { -2,-2,-1,-1,1,1,2,2 };
int dy[] = { 1,-1,2,-2,2,-2,1,-1 };
int d[300][300];
bool check[300][300];

struct Node {
    int x;
    int y;
    Node(int _x, int _y) {
        x = _x;
        y = _y;
    }
};

void bfs(int a, int b) {
    check[a][b] = true;
    queue<Node> q;
    q.push(Node(a, b));
    while (!q.empty()){
        x = q.front().x;
        y = q.front().y;
        q.pop();
        for (int i = 0; i < 8; i++) {
            ax = x + dx[i];
            ay = y + dy[i];
            if (ax >= 0 && ay >= 0 && ax < n&&ay < n) {
                if (!check[ax][ay]) {
                    check[ax][ay] = true;
                    d[ax][ay] = d[x][y] + 1;
                    q.push(Node(ax, ay));

                }
            }
        }
    }
}

void init() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            check[i][j] = false;
            d[i][j] = 0;
        }
    }
}

int main() {
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++) {
        scanf("%d", &n);
        scanf("%d %d", &sx, &sy);
        scanf("%d %d", &ex, &ey);

        init();
        bfs(sx, sy);
        printf("%d\n", d[ex][ey]);
    }
}
