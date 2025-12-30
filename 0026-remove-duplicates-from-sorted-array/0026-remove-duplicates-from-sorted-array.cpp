class Solution {
public:
    int removeDuplicates(vector<int>& a) {

        int i = 0 ;
        int j = 0 ;
        int len = a.size();


        while(j < len){
            if(a[i] == a[j]){
                j++;
            }
            else{
                a[++i] = a[j]; 
            
            }

        }
    
            return i + 1 ;
        
    }
};