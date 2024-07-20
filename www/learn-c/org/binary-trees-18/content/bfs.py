"""Contains example of breadth first search."""

from collections import deque


class TreeNode:
    """Binary tree node."""

    def __init__(self, value: int):
        """Constructor for the binary tree node."""
        self.value: int = value
        self.left: TreeNode | None = None
        self.right: TreeNode | None = None


def bfs_traversal(root: TreeNode | None):
    """Contains method for bfs traversal."""
    if root is None:
        return

    queue = deque([root])

    while queue:
        current = queue.popleft()
        print(current.value, end=' ')

        if current.left is not None:
            queue.append(current.left)
        if current.right is not None:
            queue.append(current.right)


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
    bfs_traversal(root)
