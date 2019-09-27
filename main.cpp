#include <iostream>
#include "gaussian_filter.h"


int main(){
    std::string pathToImage = "/Users/danorel/Workspace/World of C/C++/KMA/MMPI/Gaussian-Filter/";
    std::string image = "image1.jpg";
    std::string ImageLabel = "Original Image";
    std::string GaussianFilteredLabel = "Gaussian Blurred Image";
    Mat Image = imread(pathToImage + image, IMREAD_GRAYSCALE);

    int kernel_size = 5;
    double sigma = 1.;
    GaussianBlurManager gaussian = GaussianBlurManager(Image);
    gaussian.setupKernel(kernel_size, sigma);
    Mat BlurredImage = gaussian.process();

    imshow(ImageLabel, Image);
    imshow(GaussianFilteredLabel, BlurredImage);
    waitKey();
    return 0;
}