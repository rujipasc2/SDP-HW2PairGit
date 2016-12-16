#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


class Lotto{
        public :        
            int lotto,lotto2,lotto3;
            
        public:    
            int run_1st(){
                lotto = rand()%1000000;
                for(;lotto<100000;)
                    lotto = rand()%1000000;
                
                return lotto;
            }
            int run_2nd(){
                lotto2 = rand()%100000;
                for(;lotto2<10000||lotto2>=100000;)
                    lotto2 = rand()%100000;
                
                return lotto2;
            }
            int run_3rd(){
                lotto3 = rand()%10000;
                for(;lotto3<1000||lotto3>=10000;)
                    lotto3 = rand()%10000;
                
                return lotto3;
            }
    };
    
int main() {
    Lotto lot;
    srand(time(NULL));
    cout << lot.run_1st()<<endl;
    cout << lot.run_2nd()<<endl;
    cout << lot.run_3rd()<<endl;
}