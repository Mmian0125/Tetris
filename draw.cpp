#include "draw.h"
#include "terminal.h"
#include "utils.h"
/*     unicode box
 	0	1	2	3	4	5	6	7	8	9	A	B	C	D	E	F
U+250x	─	━	│	┃	┄	┅	┆	┇	┈	┉	┊	┋	┌	┍	┎	┏
U+251x	┐	┑	┒	┓	└	┕	┖	┗	┘	┙	┚	┛	├	┝	┞	┟
U+252x	┠	┡	┢	┣	┤	┥	┦	┧	┨	┩	┪	┫	┬	┭	┮	┯
U+253x	┰	┱	┲	┳	┴	┵	┶	┷	┸	┹	┺	┻	┼	┽	┾	┿
U+254x	╀	╁	╂	╃	╄	╅	╆	╇	╈	╉	╊	╋	╌	╍	╎	╏
U+255x	═	║	╒	╓	╔	╕	╖	╗	╘	╙	╚	╛	╜	╝	╞	╟
U+256x	╠	╡	╢	╣	╤	╥	╦	╧	╨	╩	╪	╫	╬	╭	╮	╯
U+257x	╰	╱	╲	╳	╴	╵	╶	╷	╸	╹	╺	╻	╼	╽	╾	╿
*/
namespace dw{
    
    void window(int top, int left, int width, int height, std::string title){
        //tc::moveto(top,block2col(left));
        for(int r=0;r<height;++r){
            tc::move_to(top+r,ut::b2c(left));
            for(int c=0;c<width;++c){
                if(r==0){ //第一行
                    if(c==0){  //第一列
                        std::cout<<" ┌";
                    }else if(c==width-1){  //最后一列
                        std::cout<<"┐ ";
                    }else{
                        std::cout<<"──"; //2个─
                    }   
                }else if(r==height-1){  //最后一行
                    if(c==0){
                        std::cout<<" └";
                    }else if(c==width-1){
                        std::cout<<"┘";
                    }else{
                        std::cout<<"──";
                    }
                }else{
                    if(c==0){
                        std::cout<<" |";
                    }else if(c==width-1){
                        std::cout<<"| ";
                    }else{
                        std::cout<<"  ";
                    }
                        

                }
            }
        }
        tc::move_to(top,ut::b2c(left)+(width*2-title.length())/2);  //title
        std::cout<<title;
    }
}
