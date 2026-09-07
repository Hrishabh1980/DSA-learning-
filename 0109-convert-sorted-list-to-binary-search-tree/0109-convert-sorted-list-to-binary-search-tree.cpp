class Solution {
public:
  TreeNode *sortedListToBST(ListNode *head) {
    if (!head)
      return nullptr;
    if (!head->next)
      return new TreeNode(head->val);

    ListNode *fast = head, *slow = head, *slow_prev = nullptr;
    while (fast && fast->next) {
      slow_prev = slow;
      slow = slow->next;
      fast = fast->next->next;
    }

    auto *root = new TreeNode(slow->val);
    slow_prev->next = nullptr;

    root->left = sortedListToBST(head);
    root->right = sortedListToBST(slow->next);

    return root;
  }
};