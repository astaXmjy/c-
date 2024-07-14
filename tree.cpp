#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node() = default;
    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    };
};
node *buildtree(node *root)
{
    cout << "enter the data :";
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter the data for inserting in left ";
    root->left = buildtree(root->left);
    cout << "Enter the data for inserting in right";
    root->right = buildtree(root->right);
    return root;
}
void PreOrderNonRecursive(node *root)
{
    if (root == NULL)
    {
        return;
    }

    stack<node *> s;
    node *curr = root;
    while (!s.empty() || curr != NULL)
    {
        while (curr != NULL)
        {
            cout << curr->data << " ";
            if (curr->right)
            {
                s.push(curr->right);
            }
            curr = curr->left;
        }
        if (!s.empty())
        {
            curr = s.top();
            s.pop();
        }
    }
}
void preordernonrec1(node *root)
{
    stack<node *> s;
    if (root == NULL)
    {
        return;
    }
    s.push(root);
    while (!s.empty())
    {
        node *node = s.top();
        cout << node->data << " ";
        s.pop();

        if (node->right)
        {
            s.push(node->right);
        }
        if (node->left)
        {
            s.push(node->left);
        }
    }
}
int depth(node *root, int x)
{
    if (root == NULL)
    {
        return -1;
    }
    int dist{-1};
    if (root->data == x || (dist = depth(root->left, x)) >= 0 || (dist = depth(root->right, x)) >= 0)
    {
        return dist + 1;
    }
    return dist;
}
int height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return max(height(root->left), height(root->right)) + 1;
}

void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void current_lvl(node *root, int lvl)
{
    if (root == NULL)
    {
        return;
    }
    if (lvl == 1)
    {
        cout << root->data << " ";
    }
    else if (lvl > 1)
    {
        current_lvl(root->left, lvl - 1);
        current_lvl(root->right, lvl - 1);
    }
}
int size_of_tree(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return size_of_tree(root->left) + size_of_tree(root->right) + 1;
}

void lvl_order_rec1(node *root)
{
    queue<node *> q;
    q.push(root);
    while (q.empty() == false)
    {
        node *p = q.front();
        cout << p->data << " ";
        q.pop();
        if (p->left != NULL)
        {
            lvl_order_rec1(p->left);
        }
        if (p->right != NULL)
        {
            lvl_order_rec1(p->right);
        }
    }
}

int max_elem(node *root)
{
    int root_val, right, left, max = INT_MIN;
    if (root != NULL)
    {
        root_val = root->data;
        left = max_elem(root->left);
        right = max_elem(root->right);
        if (left > right)
        {
            max = left;
        }
        else
            max = right;
        if (root_val > max)
        {
            max = root_val;
        }
    }
    return max;
}
int max_elem_using_lvl_order(node *root)
{
    int max = INT_MIN;
    queue<node *> q;
    q.push(root);
    while (q.empty() == false)
    {
        node *p = q.front();
        q.pop();
        if (max < p->data)
        {
            max = p->data;
        }

        if (p->left != NULL)
        {
            q.push(p->left);
        }
        if (p->right != NULL)
        {
            q.push(p->right);
        }
    }
    return max;
}
node *CreateNode(int data)
{

    node *newNode = new node();
    if (!newNode)
    {
        cout << "Memory error\n";
        return NULL;
    }
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

node *insert_in_binary(node *root, int x)
{
    if (root == NULL)
    {
        root = buildtree(root);
        return root;
    }
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp->left != NULL)
        {
            q.push(temp->left);
        }
        else
        {
            temp->left = CreateNode(x);
            return root;
        }
        if (temp->right != NULL)
        {
            q.push(temp->right);
        }
        else
        {
            temp->right = CreateNode(x);
            return root;
        }
    }
}
int size_of_binary_using_lvl_order(node *root)
{
    int count;
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        count++;
        if (temp->left != NULL)
        {
            q.push(temp->left);
        }
        if (temp->right != NULL)
        {
            q.push(temp->right);
        }
    }

    return count;
}
void lvl_order_reverse(node *root)
{
    queue<node *> q;
    stack<node *> s;
    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp->left != NULL)
        {
            q.push(temp->left);
        }
        if (temp->right != NULL)
        {
            q.push(temp->right);
        }
        s.push(temp);
    }
    while (!s.empty())
    {
        node *x = s.top();
        cout << "\n"
             << x->data << " ";
        s.pop();
    }
}
void Delete_binary_tree(node *root)
{
    if (root == NULL)
    {
        return;
    }
    Delete_binary_tree(root->left);
    Delete_binary_tree(root->right);
    free(root);
}
int findheight(struct node *root)
{

    // Initialising a variable to count the
    // height of tree
    int depth = 0;

    queue<node *> q;

    // Pushing first level element along with NULL
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        // When NULL encountered, increment the value
        if (temp == NULL)
        {
            depth++;
        }

        // If NULL not encountered, keep moving
        if (temp != NULL)
        {
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }

        // If queue still have elements left,
        // push NULL again to the queue.
        else if (!q.empty())
        {
            q.push(NULL);
        }
    }
    return depth;
}
node *DeepestNode(node *root)
{
    node *temp = NULL;
    if (root == NULL)
    {
        return NULL;
    }
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        temp = q.front();
        q.pop();
        if (temp->left != NULL)
        {
            q.push(temp->left);
        }
        if (temp->right != NULL)
        {
            q.push(temp->right);
        }
    }
    return temp;
}
void delete_deepest(node *root, node *d_node)
{
    node *temp;

    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        temp = q.front();
        q.pop();
        if (temp == d_node)
        {
            temp = NULL;
            delete (d_node);
            return;
        }

        if (temp->left)
        {
            if (temp->left == d_node)
            {
                temp->left = NULL;
                delete (d_node);
                return;
            }
            else
            {
                q.push(temp->left);
            }
        }
        if (temp->right)
        {
            if (temp->right == d_node)
            {
                temp->right = NULL;
                delete (d_node);
                return;
            }

            else
            {
                q.push(temp->right);
            }
        }
    }
    delete temp;
}
node *Deleting_node(node *root, int x)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->left == NULL && root->right == NULL)
    {
        if (root->data == x)
        {
            return NULL;
        }
        else
        {
            return root;
        }
    }

    queue<node *> q;
    q.push(root);
    node *temp;
    node *key_node = NULL;

    while (!q.empty())
    {
        temp = q.front();
        q.pop();
        if (temp->data == x)
        {
            key_node = temp;
        }
        if (temp->left)
        {
            q.push(temp->left);
        }
        if (temp->right)
        {
            q.push(temp->right);
        }
    }
    if (key_node != NULL)
    {
        int y = temp->data;
        delete_deepest(root, temp);
        key_node->data = y;
    }
    return root;
}
int no_of_nodes(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return no_of_nodes(root->left) + no_of_nodes(root->right) + 1;
}
int number_of_leaves(node *root)
{
    node *temp;
    queue<node *> q;
    int count = 0;
    if (!root)
    {
        return 0;
    }
    q.push(root);
    while (!q.empty())
    {
        temp = q.front();
        q.pop();
        if (!temp->left && !temp->right)
        {
            count++;
        }
        else
        {
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
    return count;
}
int AreStructurallySameTree(node *root1, node *root2)
{
    if (root1 == NULL && root2 == NULL)
    {
        return 1;
    }
    if (root1 == NULL && root2 != NULL || root1 != NULL && root2 == NULL)
    {
        return 0;
    }
    return (root1->data == root2->data && AreStructurallySameTree(root1->left, root2->left) && AreStructurallySameTree(root1->right, root2->right));
}
int diameter(node *root, int *ptr)
{
    int left, right;
    if (!root)
    {
        return 0;
    }
    left = diameter(root->left, ptr);
    right = diameter(root->right, ptr);
    if (left + right > *ptr)
    {
        *ptr = left + right;
    }
    return max(left, right) + 1;
}
int diameter1(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int lheight = height(root->left);
    int rheight = height(root->right);
    int ldiameter = diameter1(root->left);
    int rdiameter = diameter1(root->right);
    return max(lheight + rheight + 1, max(ldiameter, rdiameter));
}
int findlvlwithmaxsum(node *root)
{
    node *temp;
    int lvl = 0;
    int maxlvl = 0;
    queue<node *> q;

    int currsum = 0;
    int maxsum = 0;
    if (!root)
    {
        return 0;
    }
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            if (currsum > maxsum)
            {
                maxsum = currsum;
                maxlvl = lvl;
            }
            currsum = 0;
            if (!q.empty())
            {
                q.push(NULL);
            }
            lvl++;
        }
        else
        {
            currsum += temp->data;
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
    return maxlvl;
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    cout << "\n";
}
void printpathreccur(node *root, int path[], int pathlen)
{
    if (root == NULL)
    {
        return;
    }
    path[pathlen] = root->data;
    pathlen++;
    if (root->left == NULL && root->right == NULL)
    {
        printArray(path, pathlen);
    }
    else
    {
        printpathreccur(root->left, path, pathlen);
        printpathreccur(root->right, path, pathlen);
    }
}
int hasPathSum(node *root, int sum)

{
    if (root == NULL)
    {
        return 0;
    }
    int subsum = sum - root->data;

    if (subsum == 0 && root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    if (root->left)
    {
        return hasPathSum(root->left, subsum);
    }

    if (root->right)
    {
        return hasPathSum(root->right, subsum);
    }
}
int search(int arr[], int strt, int end, int value)
{
    for (int i = strt; i < end; i++)
    {
        if (arr[i] == value)
        {
            return i;
        }
    }
}
node *buildt(int in[], int pre[], int strt, int end)
{
    static int preindex = 0;
    if (strt > end)
    {
        return NULL;
    }
    node *tnode = new node(pre[preindex++]);
    if (strt == end)
    {
        return tnode;
    }

    int index = search(in, strt, end, tnode->data);
    tnode->left = buildt(in, pre, strt, index - 1);
    tnode->right = buildt(in, pre, index + 1, end);
    return tnode;
}
bool check_compelete_binary_tree(node *root)
{
    node *temp;
    if (root == NULL)
    {
        return true;
    }
    queue<node *> q;
    q.push(root);
    bool check = false;
    while (!q.empty())
    {
        temp = q.front();
        q.pop();
        if (temp->left)
        {
            if (check == true)
            {
                return false;
            }
            q.push(temp->left);
        }
        else
        {
            check = true;
        }
        if (temp->right)
        {
            if (check == true)
            {
                return false;
            }
            q.push(temp->right);
        }
        else
        {
            check = true;
        }
    }
    return true;
}
int main()
{
    int height = 0;
    node *root = NULL;
    root = buildtree(root);

    /*       1
            / \
           2   3
          / \  /  \
         4   5 44   55



              */
    /*  cout<<height(root->left->left)<<"\n";
   int dep=depth(root,99);
   cout<<dep; */
    /*preorder(root);
    cout<<"\n";
    cout<<size_of_tree(root);
    cout<<"\n";
    for (int i = 1; i <=height(root); i++)
    {
        current_lvl(root,i);
    }
    cout<<"\n";
    lvl_order_rec1(root);
    cout<<"\n";
    cout<<max_elem_using_lvl_order(root);
    insert_in_binary(root,7);
    insert_in_binary(root,999);
    preorder(root);
    lvl_order_reverse(root);
    Delete_binary_tree(root);*/
    //     cout << findheight(root);
    // Deleting_node(root,4);
    // lvl_order_rec1(root);
    // cout<<number_of_leaves(root);
    // cout<<diameter(root,&height);
    // cout<<"\n"<<diameter1(root);
    // cout<<findlvlwithmaxsum(root);
    // cout<<"\n";
    // int arr[100];
    // int len=0;
    // printpathreccur(root,arr,len);
    preordernonrec1(root);
    cout << "\n";

    // int sum = 73;
    // if (hasPathSum(root, sum))
    // {
    //     cout << "The path with " << sum << " has been found";
    // }
    // else
    // {
    //     cout << "Maa chuda bsdk";
    // }

    return 0;
}
