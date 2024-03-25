*** This is C Binary tree project Readme
in this project of this project were be able to uderstand this:

* What is a binary tree:
     is a tree data structure in wich each node has at most two children(left child, right child)

* What is the difference between a binary  tree and a Binary Search Tree:
    (BST specifique type of binary tree, ordred, sorted binary tree) is a rooted binary tree data structure with the key of each internal node being greater than all the keys in te following node's left subtree and less than the ones in its right subtree
    - so the difference is that the BST allows for efficient searching, insertion, and deletion operations

* What is the possible gain in terms of  time complexity compared to linked lists:
    BST provides significant gains in terms of search time complexity compared to a linked list
    - for example: time complexity of searching for an element is O(log n) on average and O(n) in the worst key but in the linked list case is O(n).


* What are the depth, the height, the size of a binary tree:
    - depth: the number of edges from the root node to that node (depth of the root node is 0)
    - height: the number of edges on the longest path from the root to a leaf node.
    - size: total number of nodes in the tree

* What are the different traversal methods to go through a binary tree:(node are visited)
    - In-order Traversal
        left subtree->current node->right subtree,
    - pre-ordred Traversal
        current node->left node->right node
    - post-order Traversal
        left subtree->right subtree->current node
* What is a complete, a full, a perfect, a balanced binary tree:
    - complet binary tree: is a tree in wich all levels are filled, if the last one is not complete, the nodes are filled from left to right
    - full binary tree: is a tree in which every node had either zero or two children
    - balanced binary tree: A balanced binary tree is a tree in which the height of the two subtrees of any node never differs by more than one