// TextArea.h
#ifndef TEXTAREA_H
#define TEXTAREA_H

#include <string>
#include <vector>
using namespace std;

class TextArea {
private:
    int width;
    int height;
    vector<string> contents;
public:
    // Constructors
    TextArea();
    TextArea(int width, int height);

    // Sets the text into the TextArea
    void setText(const string &text);

    // Returns the text as a single string with newline characters
    string getText() const;

    // Draw function (does not need full implementation for testing)
    void draw() const;
};

#endif