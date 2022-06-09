#include <iostream>
#include <timer.h>

int main(){
    Timer t(1.0f);      // sets interval to 1 second.
    int i = 1;
    while (i <= 60){
        if(t.can_use()){std::cout<<i<<"\n"; i++;}
    }
    return 0;
}
