"""Contains example of depth first search with in-order technique."""


class TreeNode:
    """Binary tree node."""

    def __init__(self, value: int):
        """Constructor for the binary tree node."""
        self.value: int = value
        self.left: TreeNode | None = None
        self.right: TreeNode | None = None


def in_order_traversal(node: TreeNode | None):
    """Method for in-order traversal."""
    if node is not None:
        in_order_traversal(node.left)
        print(node.value, end=' ')
        in_order_traversal(node.right)


# Example Tree:
# Example Tree:
#
#     1
#    / \
#   2   3
#  / \   \
# 4   5   6

# Example usage:
if __name__ == "__main__":
    root = TreeNode(1)
    root.left = TreeNode(2)
    root.right = TreeNode(3)
    root.left.left = TreeNode(4)
    root.left.right = TreeNode(5)
    root.right.right = TreeNode(6)
    in_order_traversal(root)
