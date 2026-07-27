# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def isValidBST(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: bool
        """
        return self.isValid(float('-inf'), root, float('inf'))

    def isValid(self, minval, root, maxval) :
        if(root is None) : 
            return True

        if(root.val >= maxval or root.val <= minval) : 
            return False

        return  (self.isValid(minval, root.left , root.val) and
                self.isValid(root.val , root.right, maxval))
        