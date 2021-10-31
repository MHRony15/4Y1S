ColorImage = imread('OriginalImage.jpg');
figure;
imshow(ColorImage,'InitialMagnification','fit');

Grayscale = rgb2gray(ColorImage);
figure;
imshow(Grayscale,'InitialMagnification','fit');

NoisyImage = imnoise(Grayscale,'salt & pepper');
figure;
imshow(NoisyImage,'InitialMagnification','fit');

filter = ones(5,5)/20;

AverageFiltered = imfilter(Grayscale, filter, 'symmetric');
figure;
imshow(AverageFiltered,'InitialMagnification','fit');

MedianFiltered = imfilter(Grayscale, [5,5]);
figure;
imshow(MedianFiltered,'InitialMagnification','fit');