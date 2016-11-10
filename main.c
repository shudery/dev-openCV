//
//  main.c
//  myopenCV
//
//  Created by shudery on 16/11/9.
//  Copyright © 2016年 shudery. All rights reserved.
//

#include <highgui.h>

int main(int argc, char **argv)
{
    IplImage *img1 = cvLoadImage( "/Users/shudery/Pictures/user/pic300.jpg",0);
    cvNamedWindow( "Example1", CV_WINDOW_AUTOSIZE);
    cvShowImage( "Example1", img1);
    cvWaitKey(0);
    cvReleaseImage( &img1);
    cvDestroyWindow( "Example1");
    return 0;
}
