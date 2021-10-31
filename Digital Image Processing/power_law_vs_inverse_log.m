clc;
clear all;
close all;
originalImage = imread('originalImage.jpg');
subplot(1,3,1)
imshow(originalImage);

grayScale = rgb2gray(originalImage);
subplot(1,3,2)
imshow(grayScale);
s=grayScale;
r=grayScale;
c=1;
gama=3;

[row, column] = size(grayScale);

for i=1:row
    for j=1:column
        s(i,j)=c*r(i,j)^gama;
     end
end
subplot(1,3,3)
imshow(s);
