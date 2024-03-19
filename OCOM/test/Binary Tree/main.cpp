#include <bits/stdc++.h>

using namespace std;


struct node
{
    int id;
    node* left;
    node* right;
    node(int i)
    {
        id = i;
        left = right = nullptr;
    }
};
void inorder(node* now)
{
    if(now == nullptr)
        return;
    inorder(now->left);
    cout << now->id << ' ';
    inorder(now->right);
}
void postorder(node* now)
{
    if(now == nullptr)
        return;
    postorder(now->left);
    postorder(now->right);
    cout << now->id << ' ';
}
void preorder(node* now)
{
    if(now == nullptr)
        return;
    cout << now->id << ' ';
    preorder(now->left);
    preorder(now->right);
}
void addNode(node* now, int val, bool sideLeft = 1)
{
    if(sideLeft && now->left == nullptr) // Check if want to add node to left
        {
            now->left = new node(val);
        }
    else
        {
            now->right = new node(val);
        }
}
//void recurAdd(node* now, int val, bool sideLeft = 1)
//{
//    if(sideLeft && now->left == nullptr) // Check if want to add node to left
//        {
//            now->left = new node(val);
//        }
//    else if(now->right == nullptr)
//        {
//            now->right = new node(val);
//        }
//    else
//        if(!(now->left->left == nullptr || now->left->right == nullptr))
//        recurAdd(now->left,val);
//    else
//        recurAdd(now->right,val);
//}
void recurAdd(node* now, int val)
{
    if (now == nullptr)
    {
        now = new node(val);
        return;
    }

    queue<node*> q;
    q.push(now);

    while (!q.empty())
    {
        int levelSize = q.size();

        for (int i = 0; i < levelSize; i++)
        {
            node* curr = q.front();
            q.pop();

            if (curr->left != nullptr && curr->right != nullptr)
            {
                q.push(curr->left);
                q.push(curr->right);
            }
            else
            {
                if (curr->left == nullptr)
                {
                    curr->left = new node(val);
                    return;
                }
                else
                {
                    curr->right = new node(val);
                    return;
                }
            }
        }
    }
}
void displayLevelOrder(node* root)
{
    if(root == nullptr)
        return;
    queue<node*> q;
    q.push(root);
//    cout << q.front()->id << '\n';
    while(!q.empty())
        {
            int cnt = q.size();
            for(int i =0 ; i < cnt ; i++)
                {
                    node* curr = q.front();
                    q.pop();
                    cout << curr->id << ' ';
                    if(curr->left != nullptr) q.push(curr->left);
                    if(curr->right != nullptr) q.push(curr->right);

                }
            cout << '\n';

        }
}
int main()
{

    node *root=new node(0);
    root->left=new node(1);
    root->right=new node(2);
    root->left->left=new node(3);

    inorder(root);
    cout << '\n';

    postorder(root);
    cout << '\n';

    preorder(root);
    cout << '\n';

    addNode(root->left,4);
    inorder(root);
    for(int i = 5 ; i <= 32 ; i++)
        {
            recurAdd(root,i);
        }
    cout <<"\n\n";
    displayLevelOrder(root);
}
