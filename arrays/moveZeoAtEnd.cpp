class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int j=0;   //j variable use kar rh he non zero ko store karne ke liye jo ki zero se start hoga 
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[j]=nums[i];
                j++;          //j++because non zero ka correct order maintain ho sake 
            }
        }
            for(int i=j;i<n;i++){//
                nums[i]=0;      //ab sare non zero to aa gae ab non zero ke baad se jitni bhi jahag bachi he unme 0 daal do 
            }
        
        
    }
};