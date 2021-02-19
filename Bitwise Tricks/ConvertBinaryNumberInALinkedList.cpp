class Solution {
public:
    int getDecimalValue(ListNode* head) {
        string res="";
        ListNode* temp=head;
        while(temp)
        {
            res+=to_string(temp->val);
            temp=temp->next;
        }
        
        unsigned long decimal = bitset<32>(res).to_ulong();
        
        return decimal;
    }
};
