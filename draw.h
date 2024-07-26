#pragma once
#include"define.h"
#include"tetromino.h"
/*
*   ui:layout
*   dw:draw                   gm:game logic            ut:utils
*   tc:terminal control
*/
namespace dw{
    void window(int top, int left, int width, int height, std::string title);
    void tetromino(gm::Tetromino& t,int top,int left);
}