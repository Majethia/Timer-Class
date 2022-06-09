#include <chrono>

class Timer{
    private:
        float time_in_between;
        std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();
    public:

        Timer(float timeInBetween){
            time_in_between = timeInBetween;
            time_in_between = time_in_between * 1000000.0f;
        }
        
        Timer(){
            time_in_between = 1.0f;
            time_in_between = time_in_between * 1000000.0f;
        }

        bool can_use(){
            if (std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::high_resolution_clock::now() - start).count() >= time_in_between){
                start = std::chrono::high_resolution_clock::now();
                return true;
            }
            else{
                return false;
            }
        }
};