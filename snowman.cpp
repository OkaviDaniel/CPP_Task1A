#include <iostream>
#include <string>
#include <stdexcept>
#include "snowman.hpp"
using namespace std;

namespace ariel{
    string snowman(int num){
        try{
            if(num<=0){
                 throw std::out_of_range{"The number must be positive!\n"};
            }
        }catch(string& ex){
            cout << ex << endl;
        }
        const int eight = 8;
        const int ten = 10;
        string temp = to_string(num);
        try{
            if(temp.length() != eight){
                throw std::out_of_range{"The length of the number must be 8!\n"};
            }
        }catch(string& ex){
            cout << ex << endl;
        }

        for(int i=0;i<eight;++i){
            int t = num%ten;
            try{
                if((t < 1) ||(4 < t)){
                    throw std::out_of_range("All the digits must be between 1 and 4.\n");
                }
            }catch(string ex){
                cout << ex << endl;
            }
            num = num/ten;
        }
        return "something";
    }
}
