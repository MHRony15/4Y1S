clc;
clear all;
close all;
originalImage = imread('originalImage.jpg');
subplot(1,3,1)
imshow(originalImage);

grayScale = rgb2gray(originalImage);
subplot(1,3,2)
imshow(grayScale);

[row, column] = size(grayScale);

start_value=20;
end_value=60;
enhance=90;
img=grayScale;
for i=1:row
    for j=1:column
        if  start_value <=grayScale(i,j) && grayScale(i,j)<=end_value
            img(i,j)=grayScale(i,j)+enhance;
        end
     end
end
subplot(1,3,3)
imshow(img);

