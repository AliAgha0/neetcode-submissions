/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */

class Solution {
    public ListNode mergeTwoLists(ListNode list1, ListNode list2)
    {
        ArrayList<Integer> values = new ArrayList<>();

        ListNode curr = list1;
        while (curr != null)
        {
            values.add(curr.val);
            curr = curr.next;
        }

        curr = list2;
        while (curr != null)
        {
            values.add(curr.val);
            curr = curr.next;
        }

        Collections.sort(values);

        ListNode head = new ListNode(0);
        ListNode tail = head;

        for (int val : values)
        {
            tail.next = new ListNode(val);
            tail = tail.next;
        }

        return head.next;

    }
}