#include <iostream>
using namespace std;
class TreeNode
{
private:
    int *Data;
    TreeNode *Left;
    TreeNode *Right;

public:
    TreeNode()
    {
        Data = NULL;
        Left = NULL;
        Right = NULL;
    }
    TreeNode(int *Data)
    {
        this->Data = Data;
        this->Left = NULL;
        this->Right = NULL;
    }
    int *GetData()
    {
        return Data;
    }
    void setData(int *Data)
    {
        this->Data = Data;
    }
    void setRight(TreeNode *Right)
    {
        this->Right = Right;
    }
    TreeNode *getRight()
    {
        return Right;
    }
    void setLeft(TreeNode *Left)
    {
        this->Left = Left;
    }
    TreeNode *getLeft()
    {
        return Left;
    }
    bool isLeaf()
    {
        if (Left == NULL && Right == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
void InsertNode(TreeNode *root, int *info)
{
    TreeNode *node = new TreeNode(info);
    TreeNode *p;
    TreeNode *q;
    p = q = root;
    while (*info != *(p->GetData()) && q != NULL)
    {
        p = q;
        if (*info < *(p->GetData()))
        {
            q = p->getLeft();
        }
        else
        {
            q = p->getRight();
        }
    }
    if (*info == *(p->GetData()))
    {
        cout << "You try to insert the duplicate data that is " << *info << endl;
        delete node;
    }
    else if (*info > *(p->GetData()))
    {
        p->setRight(node);
    }
    else
    {
        p->setLeft(node);
    }
}
void preOrder(TreeNode *treeNode)
{
    if (treeNode != NULL)
    {
        cout << *(treeNode->GetData()) << " ";
        preOrder(treeNode->getLeft());
        preOrder(treeNode->getRight());
    }
}

void postOrder(TreeNode *treeNode)
{
    if (treeNode != NULL)
    {
        postOrder(treeNode->getLeft());
        postOrder(treeNode->getRight());
        cout << *(treeNode->GetData()) << " ";
    }
}

void inOrder(TreeNode *treeNode)
{
    if (treeNode != NULL)
    {
        inOrder(treeNode->getLeft());
        cout << *(treeNode->GetData()) << " ";
        inOrder(treeNode->getRight());
    }
}

int main()
{
    cout << endl;
    int dataValue = 10;
    int *dataPtr = &dataValue;
    TreeNode node(dataPtr);
    cout << "Data ->" << *(node.GetData()) << endl;
    dataValue = 12;
    node.setData(dataPtr);
    cout << "After seting Data->" << *(node.GetData()) << endl;
    if (node.isLeaf())
    {
        cout << "Yes,Empty." << endl;
    }
    else
    {
        cout << "No,Empty." << endl;
    }

    cout << endl;
    int nodes[] = {14, 15, 4, 9, 7, 18, 3, 5, 16, 4, 20, 17, 9, 14, 5, -1};

    TreeNode *root = new TreeNode();
    root->setData(nodes);

    for (int i = 1; nodes[i] > 0; i++)
    {
        InsertNode(root, &nodes[i]);
    }

    cout << "\n---------- Pre-Order ----------\n ";
    preOrder(root);
    cout << "\n\n---------- In-Order ----------\n ";
    inOrder(root);
    cout << "\n\n---------- Post-Order ----------\n ";
    postOrder(root);

    delete root;
    cout << "\n\n";
    return 0;
}