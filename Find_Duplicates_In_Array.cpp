// # Intuition
// <!-- Describe your first thoughts on how to solve this problem. -->



// This approach involves using the linked list cycle detection method (Floyd's Tortoise and Hare algorithm). For an array of length 
// 𝑁+1 with integers in the range [1,N], we can use the two-pointer technique to detect a cycle.

// Approach
// We use the fast pointer and slow pointer method. The difference is that we traverse to the location pointed by the array's value as the next one:

// slow = nums[slow]
// fast = nums[nums[fast]]
// Once they meet, we are sure there is a cycle in the array. For example, for the array [1,2,3,4,2], the slow pointer goes from the 0th place to the 1st (value 2), and the fast pointer goes from the 0th place to the 2nd place (value 3). Eventually, slow = 2 and fast = 2. Then, we just need to find the start of the cycle, which is the duplicate element.



// # Approach
// <!-- Describe your approach to solving the problem. -->
// We use the fast pointer and slow pointer method. The difference is that we traverse to the location pointed by the array's value as the next one:

// slow = nums[slow]
// fast = nums[nums[fast]]
// Once they meet, we are sure there is a cycle in the array. For example, for the array [1,2,3,4,2], the slow pointer goes from the 0th place to the 1st (value 2), and the fast pointer goes from the 0th place to the 2nd place (value 3). Eventually, slow = 2 and fast = 2. Then, we just need to find the start of the cycle, which is the duplicate element
// # Complexity
// - Time complexity:
// <!-- Add your time complexity here, e.g. $$O(n)$$ -->
// O(N)
// - Space complexity:
// <!-- Add your space complexity here, e.g. $$O(n)$$ -->
// O(1)
// # Code
// ```


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow=nums[0];
        int fast=nums[nums[0]];
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[nums[fast]];
        }
        int p1=0;
        int p2=slow;
        while(p1!=p2){
            p1=nums[p1];
            p2=nums[p2];
        }
        return p1;

    }
};