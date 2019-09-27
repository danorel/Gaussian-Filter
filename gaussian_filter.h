//
// Created by Dan Orel on 2019-09-27.
//
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <opencv2/opencv.hpp>
#include <stdio.h>
#include <iomanip>
#include <cmath>

using namespace cv;
#ifndef GAUSSIAN_FILTER_HANDS_METHODS_H
#define GAUSSIAN_FILTER_HANDS_METHODS_H
class GaussianBlurManager{
public:
    GaussianBlurManager(const Mat&);
    Mat process();
    void setupKernel(int, double);
    ~GaussianBlurManager();
private:
    double** GaussianKernel(int, double);
    double KernelFunction(double, double, double);

private:
    Mat Image;
    int kernel_size;
    double sigma;
};

#endif //GAUSSIAN_FILTER_HANDS_METHODS_H
