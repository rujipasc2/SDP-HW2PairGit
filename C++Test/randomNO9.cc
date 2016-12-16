#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;


class Lotto{
        public :        
            int lotto;
            string s;
            
        public:    
            string run_NO9(){
                lotto = rand()%100000;
                string s = to_string(lotto)+"9";
                
                return s;
            }
    };
    
int main() {
    Lotto lot;
    srand(time(NULL));
    cout << lot.run_NO9()<<endl;

}