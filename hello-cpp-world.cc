#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


class Lotto{
        public :        
            int lotto;
            
        public:    
            int run_1st(){
                srand(time(NULL));
                lotto = rand()%1000000;
                return lotto;
            }
    };
    
int main() {
    Lotto lot;
    cout << lot.run_1st();
}