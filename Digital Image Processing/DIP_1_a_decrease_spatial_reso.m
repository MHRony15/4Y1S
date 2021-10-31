clc;
clear all;
close all;
im = imread('H:\4Y1S\Digital Image Processing\flower.jpg');
figure(1);
imshow(im);

img = rgb2gray(im);
figure(2);
imshow(img);

[row, column] = size(img);
number_of_image = 8;

for i = 1 : number_of_image
    temp = imresize(img,[row, column]);
    subplot(3,3,i)
    imshow(temp);
    row=row/2;
    column=column/2;
end
