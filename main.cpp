#include<iostream>
#include<thread>
#include<chrono>
#include"terminal.h"

using namespace std::chrono_literals;

int main(){
    /* tc::move_to(5,11);
    tc::set_fore_color(214);
    std::cout<<"hello world!";
    tc::move_to(10,1);
    tc::reset(); */
    tc::hide_cursor();

    int i=1;
    while(true){
        tc::clean_screen();
        tc::move_to(i++,10);
        tc::set_back_color(15);  //置为白色
        std::cout<<"  ";
        tc::reset();
        std::cout<<std::flush;
        std::this_thread::sleep_for(500ms);
    }
    return 0;
}