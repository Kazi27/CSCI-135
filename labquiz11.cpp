/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab quiz 11

comments
comments
comments

int main()
{
    int img[MAX_H][MAX_W];
    int h, w;
    readImage(img, h, w);
    int out[MAX_H][MAX_W];
    for (int row= 0; row < h; row++)
    {
        for (int col = 0; col < w; col++)
        {*/
            if (((row + col) % 2) == 0)
            {
                out[row][col] = 0;
            }

            else 
            {
                out[row][col] = 255;
            }
        /*}
    }
    writeImage(out, h, w);
    return 0;
}*/