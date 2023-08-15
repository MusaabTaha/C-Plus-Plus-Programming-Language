/*In this challenge, you will use a for loop to increment a variable through a range.

Input Format

You will be given two positive integers,  and  (), separated by a newline.

Output Format

For each integer  in the inclusive interval :

If , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if  and it is an even number, then print "even".
Else if  and it is an odd number, then print "odd".*/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    
    auto a = std::uint32_t{0};
    auto b = std::uint32_t{0};
    auto i = std::uint32_t{0};
    
    std::cin >> a;
    std::cin >> b;
    
        for(i = a;i<=b;i++){
            
            if((i>=1)&&(i<=9)){
                
            switch(i){
                
                case 1 :
                std::cout << "one" << "\n";

                break;
                
                case 2 :
                std::cout << "two" << "\n";

                break;
                
                case 3 :
                std::cout << "three" << "\n";

                break;
                
                case 4 :
                std::cout << "four" << "\n";

                break;
                
                case 5 :
                std::cout << "five" << "\n";

                break;
                
                case 6 :
                std::cout << "six" << "\n";
         
                break;
                
                case 7 :
                std::cout << "seven" << "\n";

                break;
                
                case 8 :
                std::cout << "eight" << "\n";
             
                break;
                
                case 9 :
                std::cout << "nine" << "\n";
                break;       
                
            }//End of switch statement
            } else if(i > 9){
                
                if((i%2)){
                    
                    std::cout << "odd" << "\n";
                    
                } else {
                    
                    std::cout << "even" << "\n";
                    
                }
                
            }//end of else if
            
        }//End of for loop
        
    
    return 0;
    
}
