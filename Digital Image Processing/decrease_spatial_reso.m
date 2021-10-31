clc;
clear all;
close all;
originalImage = imread('originalImage.jpg');
figure(1);
imshow(originalImage);

grayScale = rgb2gray(originalImage);
figure(2);
imshow(grayScale);

[row, column] = size(grayScale);
number_of_image = 8;


for i = 1 : number_of_image
    temp = imresize(grayScale,[row, column]);
    subplot(3,3,i)
    imshow(temp);
    row=row/2;
    column=column/2;
end
