#include<iostream>
#include "terminal.h"

#define CSI "\033["  //control sequence introducer

void tc::move_to(int row,int col){
    std::cout<<CSI<<row<<";"<<col<<"H";
}
void tc::set_fore_color(int id){
    std::cout<<CSI<<"38;5;"<<id<<"m";
}
void tc::set_back_color(int id){
    std::cout<<CSI<<"48;5;"<<id<<"m";
}
void tc::clean_screen(){
    std::cout<<CSI<<"2J";
}
void tc::reset(){
    std::cout<<CSI<<"0m";
}
void tc::hide_cursor(){
    std::cout<<CSI<<"?25l";
}
void tc::show_cursor(){
    std::cout<<CSI<<"?25h";
}
