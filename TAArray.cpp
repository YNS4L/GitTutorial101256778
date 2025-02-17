#include "TAArray.h"

TAArray::TAArray() : size(0), capacity(10) {
    data = new TextArea[capacity];
}

TAArray::~TAArray() {
    delete[] data;
}

TAArray::TAArray(const TAArray &other) : size(other.size), capacity(other.capacity) {
    data = new TextArea[capacity];
    for (int i = 0; i < size; i++) {
        data[i] = other.data[i];
    }
}

TAArray& TAArray::operator=(const TAArray &other) {
    if (this != &other) {
        delete[] data;
        size = other.size;
        capacity = other.capacity;
        data = new TextArea[capacity];
        for (int i = 0; i < size; i++) {
            data[i] = other.data[i];
        }
    }
    return *this;
}

void TAArray::resize() {
    capacity *= 2;
    TextArea* newData = new TextArea[capacity];
    for (int i = 0; i < size; i++) {
        newData[i] = data[i];
    }
    delete[] data;
    data = newData;
}

void TAArray::add(const TextArea &ta) {
    if (size >= capacity) {
        resize();
    }
    data[size++] = ta;
}

TextArea TAArray::get(int index) const {
    if (index < 0 || index >= size) {
        throw std::out_of_range("Index out of range");
    }
    return data[index];
}

int TAArray::getSize() const {
    return size;
}
