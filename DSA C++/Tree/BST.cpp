// binary search tree...........................................
#include <iostream>
using namespace std;

// Node structure...............................................
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int value) : data(value), left(nullptr), right(nullptr)
    {
    }
};

// Binary Tree class............................................
class BinaryTree
{
private:
    Node *root;

    // Insertion.....................................................
    Node *insertRecursively(Node *node, int value) // as we have to return a node pointer, so we have to use Node* instead of Node
    {
        if (node == nullptr)
        {
            return new Node(value);
        }
        if (value < node->data)
        {
            node->left = insertRecursively(node->left, value);
        }
        else
        {
            node->right = insertRecursively(node->right, value);
        }
        return node;
    }

    // Inorder Traversal [left -> root -> right] .....................................................
    void InorderTraversal(Node *node)
    {
        if (node == nullptr)
        {
            return;
        }
        InorderTraversal(node->left);
        cout << node->data << " ";
        InorderTraversal(node->right);
    }

    // Preorder traversal [root -> left -> right] .......................................................
    void preorderTraversal(Node *root)
    {
        if (root == nullptr)
            return;

        cout << root->data << " ";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }

    // Postorder traversal [left -> right -> root]
    void postorderTraversal(Node *root)
    {
        if (root == nullptr)
            return;

        postorderTraversal(root->left);
        postorderTraversal(root->right);
        cout << root->data << " ";
    }

    // search data recursively and return it ..........................
    Node *searchRecursively(Node *node, int data)
    {
        if (node == nullptr || node->data == data)
            return node;
        if (data < node->data)
            return searchRecursively(node->left, data);
        else
            return searchRecursively(node->right, data);
    }

    Node *FindMin(Node *root)
    {
        while (root->left != nullptr)
        {
            root = root->left;
        }
        return root;
    }

    Node *FindMax(Node *root)
    {
        while (root->right != nullptr)
        {
            root = root->right;
        }
        return root;
    }

    Node *deleteNode(Node *root, int value)
    {
        if (root == nullptr)
            return root;

        if (value < root->data)
            root->left = deleteNode(root->left, value); // Left me search karo
        else if (value > root->data)
            root->right = deleteNode(root->right, value); // Right me search karo
        else
        {
            // Node found! Handle deletion cases

            // Case 1: No child
            if (root->left == nullptr && root->right == nullptr)
            {
                delete root;
                return nullptr;
            }
            // Case 2: One child
            else if (root->left == nullptr)
            {
                Node *temp = root->right;
                delete root;
                return temp;
            }
            else if (root->right == nullptr)
            {
                Node *temp = root->left;
                delete root;
                return temp;
            }
            // Case 3: Two children
            else
            {
                Node *temp = FindMin(root->right);                 // Inorder Successor
                root->data = temp->data;                           // Replace node value
                root->right = deleteNode(root->right, temp->data); // Delete successor
            }
        }
        return root;
    }

public:
    BinaryTree()
    {
        root = nullptr;
    }

    // get the root data............................................
    int getRoot()
    {
        return root->data;
    }

    // insert by calling recursion....................................
    // Time complexity : O(N) ::::: Space Complexity : O(N)
    void insert(int data)
    {
        root = insertRecursively(root, data);
    }

    // display tree by traversing recursively.........................
    // Time Complexity : O(N)
    void traverseTree()
    {
        cout<<"Inorder: ";
        InorderTraversal(root);
        cout<<endl;

        cout<<"Preorder: ";
        preorderTraversal(root);
        cout<<endl;

        cout<<"Postorder: ";
        postorderTraversal(root);
        cout<<endl;
    }

    // Searching......................................................
    // Time Complexity : O(log N)(Balanced Tree)::::::::Space Complexity : O(log N)(Recursive Calls)
    void search(int data)
    {
        cout << "\nSearching for " << data << ":\t";
        if (searchRecursively(root, data))
            cout << "Found \n";
        else
            cout << "Not Found\n";
    }

    void findMin()
    {
        cout << "Minimum is : " << FindMin(root)->data << endl;
    }

    void findMax()
    {
        cout << "Maximum is : " << FindMax(root)->data << endl;
    }

    // Deletion..................................................
    //  Time Complexity : O(log N) ::::: Space Complexity : O(log N)
    void delete_node(int data)
    {
        if (!searchRecursively(root, data)) // Pehle check karo ke data exist bhi karta hai ya nahi
        {
            cout << "Not Found: " << data << endl;
            return;
        }

        root = deleteNode(root, data); // Root update karo

        // Dubara check karo ke delete ho chuka hai ya nahi
        if (searchRecursively(root, data))
            cout << "Error: " << data << " not deleted properly!" << endl;
        else
            cout << "Deleted: " << data << endl;
    }
};

int main()
{
    BinaryTree tree;
    tree.insert(50);
    tree.insert(30);
    tree.insert(70);
    tree.insert(20);
    tree.insert(40);
    tree.insert(60);
    tree.insert(80);
    tree.insert(10);

    cout << "Root: " << tree.getRoot() << endl;
    
    tree.traverseTree();
    
    tree.search(80);
    
    tree.findMin();
    tree.findMax();
    
    tree.delete_node(50);
    
    cout << "Root: " << tree.getRoot() << endl;
    tree.traverseTree();

    return 0;
}