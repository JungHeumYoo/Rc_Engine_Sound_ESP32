const unsigned int knockSampleRate = 22050;
const unsigned int knockSampleCount = 654;
const signed char knockSamples[] = {
0, 3, 7, 13, 21, 28, 35, 37, 40, 42, 41, 37, 33, 31, 29, 25, 
19, 9, 3, -3, -8, -13, -21, -32, -38, -43, -46, -48, -50, -52, -52, -53, 
-53, -53, -53, -52, -49, -46, -44, -41, -37, -34, -31, -27, -26, -24, -21, -18, 
-16, -15, -13, -14, -14, -15, -14, -13, -13, -13, -15, -15, -15, -15, -15, -17, 
-18, -19, -18, -17, -17, -17, -18, -18, -18, -19, -19, -20, -20, -20, -20, -19, 
-18, -16, -14, -12, -9, -6, -4, -2, 0, 1, 4, 8, 10, 12, 14, 17, 
20, 24, 25, 25, 25, 27, 28, 28, 27, 25, 25, 25, 25, 24, 23, 22, 
22, 24, 26, 27, 29, 31, 33, 38, 40, 42, 43, 42, 41, 40, 38, 36, 
34, 30, 27, 20, 16, 11, 7, 2, -3, -6, -8, -9, -11, -11, -11, -9, 
-8, -7, -5, -1, 2, 4, 6, 9, 12, 14, 14, 13, 11, 10, 8, 5, 
2, 1, 0, -3, -7, -11, -13, -14, -16, -17, -19, -19, -19, -18, -17, -17, 
-16, -14, -12, -11, -11, -12, -13, -14, -14, -15, -17, -21, -24, -27, -31, -34, 
-38, -43, -46, -49, -50, -51, -50, -50, -50, -49, -50, -51, -51, -50, -48, -46, 
-44, -42, -41, -39, -37, -35, -32, -30, -27, -24, -21, -17, -13, -10, -8, -6, 
-3, 1, 5, 11, 14, 18, 21, 26, 32, 34, 37, 39, 40, 41, 43, 43, 
42, 40, 37, 34, 30, 28, 26, 23, 20, 14, 10, 8, 3, -1, -6, -13, 
-16, -17, -19, -19, -20, -22, -22, -22, -22, -25, -28, -29, -31, -33, -34, -36, 
-39, -39, -39, -39, -40, -40, -40, -40, -39, -38, -37, -34, -31, -29, -27, -25, 
-24, -22, -21, -20, -19, -19, -20, -20, -21, -21, -21, -22, -21, -19, -16, -14, 
-13, -11, -9, -7, -5, -3, -2, 0, 1, 1, 0, -1, -3, -5, -5, -4, 
-3, -1, 2, 7, 11, 15, 19, 22, 28, 31, 35, 38, 41, 44, 45, 44, 
43, 41, 39, 37, 31, 25, 19, 13, 7, -2, -8, -15, -22, -29, -36, -44, 
-49, -54, -59, -64, -70, -77, -82, -86, -91, -96, -101, -104, -107, -110, -115, -118, 
-122, -124, -126, -127, -126, -125, -124, -123, -123, -122, -122, -120, -118, -114, -109, -105, 
-100, -91, -85, -79, -72, -67, -63, -57, -52, -48, -43, -40, -37, -37, -38, -38, 
-38, -39, -41, -41, -39, -37, -35, -32, -30, -28, -26, -24, -20, -16, -12, -9, 
-4, 0, 4, 10, 13, 16, 19, 22, 25, 32, 34, 36, 37, 36, 37, 38, 
38, 40, 39, 39, 39, 39, 41, 40, 38, 37, 37, 37, 36, 34, 31, 29, 
29, 30, 32, 34, 35, 36, 36, 36, 37, 36, 34, 32, 30, 30, 30, 29, 
29, 30, 30, 33, 36, 38, 40, 40, 42, 44, 46, 48, 48, 48, 49, 51, 
54, 58, 60, 64, 67, 71, 76, 82, 85, 87, 88, 89, 92, 95, 97, 98, 
98, 98, 99, 98, 98, 98, 98, 99, 103, 106, 109, 111, 112, 112, 112, 111, 
108, 108, 106, 101, 98, 93, 89, 84, 80, 73, 67, 62, 56, 51, 44, 39, 
35, 33, 30, 27, 23, 21, 19, 18, 18, 18, 22, 24, 28, 34, 39, 45, 
48, 51, 54, 57, 61, 65, 67, 68, 68, 67, 66, 64, 62, 59, 55, 51, 
47, 45, 44, 42, 40, 39, 37, 36, 34, 32, 30, 28, 25, 23, 21, 18, 
14, 9, 6, 4, 1, -2, -5, -10, -11, -12, -14, -15, -17, -17, -17, -17, 
-17, -16, -15, -13, -13, -13, -13, -13, -16, -18, -20, -23, -26, -31, -34, -39, 
-43, -48, -52, -56, -58, -59, -60, -60, -59, -58, -57, -55, -53, -51, -46, -42, 
-38, -35, -33, -30, -28, -26, -24, -22, -19, -17, -16, -18, -19, -22, -25, -29, 
-32, -33, -33, -31, -28, -28, -27, -26, -25, -22, -19, -8, -1, 0, };
