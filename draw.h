#pragma once
#include <string>
#include<iostream>
/*
*   ui:layout
*   dw:draw                   gm:game logic            ut:utils
*   tc:terminal control
*/
namespace dw{
    void window(int top, int left, int width, int height, std::string title);
}