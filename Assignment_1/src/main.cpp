// C++ include
#include <iostream>
#include <string>
#include <vector>

// Image writing library
#define STB_IMAGE_WRITE_IMPLEMENTATION // Do not include this line twice in your project!
#include "stb_image_write.h"

int main()
{
    std::cout << "Writing a grid png image" << std::endl;


    const std::string filename("assignment1.png");
    const int w = 640;                              // Image width
    const int h = 480;                              // Image height
    const int comp = 3;                             // 3 Channels Red, Green, Blue
    const int stride_in_bytes = w*comp;             // Lenght of one row in bytes
    std::vector<unsigned char> data(w*h*comp,0);    // The image itself;

    // Draw a grid, each square has a side of e pixels
    // Note that each pixel has 3 values, one per channel
    const int e = 50;
    const unsigned char black = 0;
    const unsigned char white = 255;

    for (unsigned wi = 0; wi<w;++wi)
    {
        for (unsigned hi = 0; hi < h; ++hi)
        {
            for (unsigned i=0;i<comp;++i)
                data[(hi * w * 3) + (wi * 3) + i] = lround(wi / e) % 2 == lround(hi / e) % 2 ? black : white;
        }
    }

    stbi_write_png(filename.c_str(), w, h, comp, data.data(), stride_in_bytes);

    return 0;
}
