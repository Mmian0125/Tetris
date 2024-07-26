#include "tetromino.h"
#include "color.h"
namespace gm{
    //IJLOSTZ
    //1234567
    std::map<int,Color> tetro_color={
        {1,Color::Cyan},
        {2,Color::Blue},
        {3,Color::Orange},
        {4,Color::Yellow},
        {5,Color::Green},
        {6,Color::Purple},
        {7,Color::Red}
    };
    Tetromino I={
        {0,0,0,0,0},
        {0,0,0,0,0},
        {0,1,1,1,1},
        {0,0,0,0,0},
        {0,0,0,0,0},
    };
    Tetromino J={
        {2,0,0},{2,2,2},{0,0,0}
    };
    Tetromino L={
        {0,0,3},{3,3,3},{0,0,0}
    };
    Tetromino O={
        {0,4,4},{0,4,4},{0,0,0}
    };
    Tetromino S={
        {0,5,5},{5,5,0},{0,0,0}
    };
    Tetromino T={
        {0,6,0},{6,6,6},{0,0,0}
    };
    Tetromino Z={
        {7,7,0},{0,7,7},{0,0,0}
    };

    

    Tetromino rotate(Tetromino& t){
        Tetromino result(t.size(),std::vector<int>(t.size(),0));
        //result初始化为t.size()行，第一维初始化值为std::vector<int>(t.size(),0)
        //std::vector<int>(t.size(),0)初始化为t.size()行，第二维初始化值为0
        //最终初始化一个t.size()*t.size()的二维数组，每个值都为0

        //t[i][j]=t'[j][3-1-i]
        for(int i=0;i<t.size();++i){
            for(int j=0;j<t.size();++j){
                if(t[i][j]>0)
                    result[j][t.size()-1-i]=t[i][j];
            }
        }


        return  std::move(result);
    }

}