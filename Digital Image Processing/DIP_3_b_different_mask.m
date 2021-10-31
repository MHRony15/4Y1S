clc;
close all;
clear all;

im = imread('G:\4Y1S\Lab\4Y1S\4182-Image Processing\flower.jpg');
subplot(2,3,1);
imshow(im)
title('Original image');

img = rgb2gray(im);
subplot(2,3,2);
imshow(img)
title('GrayScale Image');

noisyImg = imnoise(img,'salt & pepper');
subplot(2,3,3);
imshow(noisyImg)
title('Image with Salt pepper');

filter1 = ones(3,3)/9;
filter2 = ones(5,5)/25;
filter3 = ones(7,7)/49;

avg_filter1 = average_filter(noisyImg,filter1);
avg_filter2 = average_filter(noisyImg,filter2);
avg_filter3 = average_filter(noisyImg,filter3);

subplot(2,3,4);
imshow(avg_filter1);
title('Average Image 3 X 3');

subplot(2,3,5);
imshow(avg_filter1);
title('Average Image 5 X 5');

subplot(2,3,6);
imshow(avg_filter1);
title('Average Image 7 X 7')


