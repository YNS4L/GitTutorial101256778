#ifndef RGB_H
#define RGB_H

class RGB {
private:
    int r;
    int g;
    int b;
public:
    // Constructors
    RGB();
    RGB(int r, int g, int b);

    // Getters (marked const)
    int getR() const;
    int getG() const;
    int getB() const;

    // Setters
    void setR(int r);
    void setG(int g);
    void setB(int b);

    // Static function to blend two colors
    static RGB blend(const RGB &c1, const RGB &c2);
};

#endif
