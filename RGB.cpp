#include "RGB.h"

RGB::RGB() : r(0), g(0), b(0) {}

RGB::RGB(int r, int g, int b) : r(r), g(g), b(b) {}

int RGB::getR() const { return r; }
int RGB::getG() const { return g; }
int RGB::getB() const { return b; }

void RGB::setR(int r) { this->r = r; }
void RGB::setG(int g) { this->g = g; }
void RGB::setB(int b) { this->b = b; }

RGB RGB::blend(const RGB &c1, const RGB &c2) {
    // Simple blend: average each component
    return RGB((c1.r + c2.r) / 2, (c1.g + c2.g) / 2, (c1.b + c2.b) / 2);
}
