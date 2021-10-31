clc;
clear all;
close all;
originalImage = imread('originalImage.jpg');
figure(1);
imshow(originalImage);

grayScale = rgb2gray(originalImage);
figure(2);
imshow(grayScale);


k = 0;
figure;
while (k<8)
 reduced_image = grayScale/2^k;
 currentL=256/2^k-1;
 subplot(3, 3, k+1);
 imshow(reduced_image, [0,currentL]);
 k = k + 1;
end
  