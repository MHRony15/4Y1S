clc;
clear all;
close all;
originalImage = imread('H:\4Y1S\Digital Image Processing\originalImage.jpg');
subplot(2,2,1)
imshow(originalImage);

grayScale = rgb2gray(originalImage);
subplot(2,2,2)
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
subplot(2,2,3)
imshow(s);
s2=grayScale;
r2=grayScale;
c2=1;

for i=1:row
    for j=1:column
       s2(i,j) = 10^(r2(i,j)/c2)-1; 
     end
end
subplot(2,2,4)
imshow(s2);