ColorImage = imread('G:\4Y1S\Lab\4Y1S\4182-Image Processing\flower.jpg');
subplot(1,3,1)
imshow(ColorImage,'InitialMagnification','fit');
Grayscale = rgb2gray(ColorImage);
subplot(1,3,2)
imshow(Grayscale,'InitialMagnification','fit');
SlicedImage = bitand(Grayscale,224);
subplot(1,3,3)
imshow(SlicedImage,'InitialMagnification','fit');