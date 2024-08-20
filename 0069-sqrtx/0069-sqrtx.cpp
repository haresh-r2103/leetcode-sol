class Solution {

public:

    int mySqrt(int x) {

        int n = x/2;

        int start = 2; 

        int end = n;

        if(x == 1) return 1;

        while(start <= end){

            long mid = start + (end-start)/2;

            if( (mid*mid) == x ) {

                cout << mid << " ";

                return mid;

            }

                

            else if((mid*mid) > x) end = mid - 1;

            else{

                start = mid+1;

            }

        }

        return end;

    }

};

        

