clc;
clear all;
close all;
originalImage = imread('originalImage.jpg');
subplot(2,2,1)
imshow(originalImage);

grayScale = rgb2gray(originalImage);
subplot(2,2,2)
imshow(grayScale);
[rows, columns] = size(grayScale);
subplot(2,2,3)
imhist(grayScale);

threshold = 150;
img=grayScale;
for i = 1 : rows
    for j = 1 : columns
        if grayScale(i,j) >= threshold
            img(i,j) = 255;
        else
            img(i,j) = 0;
        end
    end
end

subplot(2,2,4)
imshow(img);
