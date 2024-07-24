#include"define.h"
#include "utils.h"

using namespace std::chrono_literals;

namespace ut{
    int b2c(int b){
        return 2*b-1;
    }
    int fps()
    {
        static auto start=std::chrono::steady_clock::now(); 
        auto end=start;
        static int frame_count=0;
        static int fps=0;  //每秒的帧数

        end=std::chrono::steady_clock::now();
        frame_count++;
        if(end-start>1s){
            fps=frame_count;

            frame_count=0;
            start=end;
        }
        return fps;
    }
}
