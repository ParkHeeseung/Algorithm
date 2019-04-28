#include <iostream>
#include <cstdio>
#include <map>
#include <vector>

using namespace std;

map<int, int> m;

vector<int> slice(const vector<int> &v, int a, int b)
{
    return vector<int>(v.begin() + a, v.begin() + b);
}

void printPostOrder(const vector<int> &preorder, const vector<int> &inorder)
{
    const int N = preorder.size();

    if (preorder.empty())
        return;

    const int root = preorder[0];

    int L;

    for (int i = 0; i < N; i++)
        if (inorder[i] == root)
        {
            L = i;
            break;
        }

    printPostOrder(slice(preorder, 1, L + 1), slice(inorder, 0, L));
    printPostOrder(slice(preorder, L + 1, N), slice(inorder, L + 1, N));

    printf("%d\n", root);
}

int main()
{
    int val;
    vector<int> pre;
    vector<int> in;

    while (scanf("%d", &val) != EOF)
    {
        m[val] = 1;
        pre.push_back(val);
    }

    for (size_t it = m.begin(); it != m.end(); it++)
        in.push_back(it->first);

    printPostOrder(pre, in);

    return 0;
}
