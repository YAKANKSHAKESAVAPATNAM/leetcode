class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int n = nums1.size();
        int m = nums2.size();
        int total = n + m;

        int idx1 = total / 2 - 1;
        int idx2 = total / 2;

        int i = 0, j = 0, k = 0;
        int firstEle = 0, secondEle = 0;

        while (i < n && j < m) {
            int val;
            if (nums1[i] < nums2[j])
                val = nums1[i++];
            else
                val = nums2[j++];

            if (k == idx1) firstEle = val;
            if (k == idx2) secondEle = val;
            k++;

            if (k > idx2) break;
        }

        while (i < n && k <= idx2) {

            int val = nums1[i++];

            if (k == idx1) firstEle = val;
            if (k == idx2) secondEle = val;

            k++;

        }


        while (j < m && k <= idx2) {

            int val = nums2[j++];

            if (k == idx1) firstEle = val;
            if (k == idx2) secondEle = val;

            k++;

        }


        if (total % 2 == 0)
            return (firstEle + secondEle) / 2.0;
        else
            return secondEle;

    }
};