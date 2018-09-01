# Construct-Binary-Tree-from-Preorder-and-Inorder-Traversal

问题：给出一个树的先序和中序遍历，给出这棵树的结构。

先序，后序不能还原二叉树。

思路：找根节点，然后在构造左孩子和右孩子。
     将根节点的序号记录下来，作为构造左孩子和右孩子的范围。
     左孩子：instart到index-1；右孩子：index+1到inend。
