#include<iostream>


using namespace std;

void dfs(int cnt);

int N,M;
bool visit[10];
int arr[10];

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> N >> M;
    dfs(0);
    return 0;
}

void dfs(int cnt){
    if(cnt == M){
        for(int i = 0; i < M; i++){
            cout << arr[i]+1 << " ";
        }
        cout << "\n";
    }

    for(int i = 0; i < N; i++){
        if(!visit[i]){
            visit[i]=true;
            arr[cnt] = i;
            dfs(cnt + 1);
            visit[i] = false;
        }
    }
}
