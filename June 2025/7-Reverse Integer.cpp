///// Time Complexity is O(log(x)).

//// Why compare to / 10

//// If rev > INT_MAX / 10 then even rev * 10 already exceeds INT_MAX—overflow is guaranteed no matter what d is.

//// If rev < INT_MIN / 10 then rev * 10 is already below INT_MIN—again guaranteed overflow.
 
class Solution {
    public:
        int reverse(int x) {
            int rev=0;
    
            
            while(x != 0){
                int d=x%10;
    
                if(rev>INT_MAX/10) return 0;
                if(rev < INT_MIN/10)return 0;
    
                rev=(rev*10)+d;
    
                x/=10;
            }
          return rev;
        }
    };


// ********  ANOTHER WAY *******
//     class Solution {
// public:
//     int reverse(int x) {
//         long long rev = 0;   // use long long instead of int
//         while (x != 0) {
//             int d = x % 10;      // extract digit
//             rev = rev * 10 + d;  // build reversed number
//             x /= 10;
//         }
//         // Check if result fits in 32-bit signed int
//         if (rev < INT_MIN || rev > INT_MAX) return 0;
//         return (int)rev;
//     }
// };
// Pros of using long long
// Cleaner code: no need to check overflow at every step.

// Easier to understand: just reverse normally, then check once.