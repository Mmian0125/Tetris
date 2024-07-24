#include"define.h"
#include"terminal.h"
#include"utils.h"
#include"draw.h"
#include"game.h"
#include"control.h"

 char command;

 
void init(){
    tc::hide_cursor();
    gm::start_listener();
    gm::init();
}

void loop(){
     int i=1;
    while(gm::running){
        tc::clean_screen();
        dw::window(1,1,9,6,"Hold");
        dw::window(1,10,12,22,"Tetris");
        dw::window(7,1,9,16,"Status");
        dw::window(19,22,8,4,"Info");
        dw::window(1,22,8,18,"Next");

        tc::move_to(10,4);
        std::cout<<"fps:"<<ut::fps();

        tc::move_to(gm::row,ut::b2c(gm::col));
        tc::set_back_color(15);  //置为白色
        std::cout<<"  ";
        tc::reset();

        std::cout<<std::flush;
        std::this_thread::sleep_for(100ms);
    }
}

void exit(){
    tc::show_cursor();
    tc::reset();
    tc::clean_screen();
    tc::move_to(1,1);
    tc::set_fore_color(9);
    std::cout<<"Bye!"<<std::endl;
    tc::reset();

}
int main(){
   
    init();
    loop();
    exit();

    return 0;
}