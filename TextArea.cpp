// TextArea.cpp
#include "TextArea.h"
#include <iostream>

TextArea::TextArea() : width(0), height(0) {}

TextArea::TextArea(int w, int h) : width(w), height(h) {
    // Initialize the contents with spaces
    contents.resize(height, string(width, ' '));
}

void TextArea::setText(const string &text) {
    if (width == 0 || height == 0) return;
    int index = 0;
    // Fill the TextArea with characters from the text
    for (int i = 0; i < height && index < text.size(); i++) {
        for (int j = 0; j < width && index < text.size(); j++) {
            contents[i][j] = text[index++];
        }
    }
}

string TextArea::getText() const {
    string result;
    for (const auto &line : contents) {
        result += line + "\n";
    }
    return result;
}

void TextArea::draw() const {
    // For demonstration, simply print each line
    for (const auto &line : contents) {
        cout << line << endl;
    }
}