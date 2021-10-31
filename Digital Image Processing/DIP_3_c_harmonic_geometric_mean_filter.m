
clear all;
close all;
im = imread('H:\4Y1S\Digital Image Processing\flower.jpg');
subplot(2,3,1)
imshow(im);

img = rgb2gray(im);
subplot(2,3,2)
imshow(img);

nimg = imnoise(img,'salt & pepper');
subplot(2,3,3)
imshow(nimg);
m=3;
n=3;
hmf =(m*n)./imfilter(1./nimg,ones(m,n),'replicate');

subplot(2,3,4)
imshow(hmf);
title('Harmonic mean filter');


