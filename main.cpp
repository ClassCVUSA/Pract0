#include <iostream>
#include <stdio.h>

#include "opencv2/core/core.hpp"
#include "opencv2/core/utility.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/highgui/highgui_c.h"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/imgproc.hpp"


using namespace std;
using namespace cv;

int main( )
{

    Mat image;
    String path="../Data/lena.jpg";
    image = imread(path ,IMREAD_ANYCOLOR );

    if ( !image.data )
    {
        printf("No image data \n");
        return -1;
    }
    namedWindow("Display Image", CV_WINDOW_AUTOSIZE );
    imshow("Display Image", image);

    waitKey(0);

    return 0;
}
