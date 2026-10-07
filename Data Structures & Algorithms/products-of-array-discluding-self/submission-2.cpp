class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

//         vector<int> output;

        
//         int n= nums.size();

//         for(int i=0 ; i< n ; i++){

//             int restmul =1;

//             for(int j=0 ; j< n ; j++){
//                 if(i != j){
//                     restmul *= nums[j];
//                 }

//             }

//             output.push_back(restmul);


            

//         }


// return output;

int n= nums.size();
vector<int> prefix(n);
vector<int> suffix(n);

vector<int> result;


prefix[0]= 1;
for(int i=1 ; i< n; i++){
   prefix[i]= prefix[i-1] * nums[i-1];

}
suffix[n-1]= 1;

for(int i=n-2 ; i >= 0 ; i--){
    suffix[i] = suffix[i+1] * nums[i+1];
}

for(int i=0 ; i<n ; i++){
    int prod= prefix[i] * suffix[i];

    result.push_back(prod);
}

return result;

    }
};
