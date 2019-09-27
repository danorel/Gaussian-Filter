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
Mat GaussianBlur(const Mat&, int, double);
double** GaussianKernel(int, double);
double KernelFunction(double, double, double);
#endif //GAUSSIAN_FILTER_HANDS_METHODS_H
