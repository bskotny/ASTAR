#include "CImg.h"
#include <iostream>
using namespace cimg_library;

#define cimg_display 0

int main(){
    const unsigned char color[] = {255, 0, 0};
    cimg_library::CImg<unsigned char> image("divideandconquer.jpg"), visu(500,400,3,0);
    //image.draw_line(0, 0, 125, 125, color);
    cimg_library::CImgDisplay mainDisplay(image, "Test");


    while(!mainDisplay.is_closed()){
        //std::cout<<image.atXY(61,84)<<std::endl;
        for(int i = 0, j = 0; i < image.width(); i++, j++){
            //for(int j = 0; j < image.height(); j++){
                image.draw_line(0, 0, i, j, color);
                image.display(mainDisplay);
                mainDisplay.wait();
            //}
        }
    }
}

