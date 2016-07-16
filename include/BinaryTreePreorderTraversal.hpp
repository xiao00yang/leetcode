#ifndef BINARY_TREE_PREORDER_TRAVERSAL_HPP_
#define BINARY_TREE_PREORDER_TRAVERSAL_HPP_

#include "TreeNode.hpp"

#include <vector>
using namespace std;

class BinaryTreePreorderTraversal
{
public:
  vector<int> preorderTraversal(TreeNode* root);
public:
  vector<int> preorderTraversal_Stack(TreeNode* root);
  vector<int> preorderTraversal_Morris(TreeNode* root);
};

#endif // BINARY_TREE_PREORDER_TRAVERSAL_HPP_