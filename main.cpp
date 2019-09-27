#include <iostream>
#include "hands_methods.h"


int main(){
    std::string pathToImage = "/Users/danorel/Workspace/World of C/C++/KMA/MMPI/Gaussian-Filter/";
    std::string image = "image.jpg";
    std::string ImageLabel = "Original Image";
    std::string GaussianFilteredLabel = "Gaussian Blurred Image";
    Mat Image = imread(pathToImage + image, IMREAD_GRAYSCALE);

    int kernel_size = 5;
    double sigma = 1.;
    Mat BlurredImage = GaussianBlur(Image, kernel_size, sigma);

    imshow(ImageLabel, Image);
    imshow(GaussianFilteredLabel, BlurredImage);
    waitKey();
    return 0;
}