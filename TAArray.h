#ifndef TAARRAY_H
#define TAARRAY_H

#include "TextArea.h"
#include "defs.h"  // Use if you need MAX_COMPONENTS or other definitions
#include <stdexcept>

class TAArray {
private:
    TextArea* data;
    int size;
    int capacity;
    void resize();
public:
    TAArray();
    ~TAArray();
    TAArray(const TAArray &other);
    TAArray& operator=(const TAArray &other);

    // Adds a new TextArea to the array
    void add(const TextArea &ta);

    // Retrieves the TextArea at the given index
    TextArea get(int index) const;

    // Returns the current number of TextArea objects stored
    int getSize() const;
};

#endif
