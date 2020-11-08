#include <stdexcept>
#include <cstdio>
#include <cstring>

struct SimpleString{
    SimpleString(size_t max_size)
    : max_size{max_size}, 
    length{} {
        if (max_size == 0) {
            throw std::runtime_error{ "Max size be at least 1."};
        }
        buffer = new char[max_size];
        buffer[0] = 0;   
    }
    
    // copy constructor 
    SimpleString(const SimpleString& other) 
        :max_size { other.max_size},
        buffer{ new char[other.max_size]},
        length{ other.length} {
            std::strncpy(buffer, other.buffer, max_size);
        }
    // move constructor
    SimpleString(SimpleString&& other) noexcept
        : max_size{ other.max_size },
        buffer(other.buffer), 
        length(other.length) { 
            other.length = 0;
            other.buffer = nullptr;
            other.max_size = 0;
        }

    // copy assignment
    SimpleString& operator=(const SimpleString& other) { 
        if (this == &other) return *this;
        const auto new_buffer = new char[other.max_size];
        delete[] buffer;
        buffer = new_buffer;
        length = other.length; 
        max_size = other.max_size;
        strcpy_s(buffer, max_size, other.buffer);
        return *this;
    }
    
    // move assignment 
    SimpleString& operator=(SimpleString&& other) noexcept {
        if(this == &other) return *this;
        delete[] buffer;
        buffer = other.buffer;
        length = other.length;
        max_size = other.max_size;
        other.buffer = nullptr;
        other.length = 0;
        other.max_size = 0;
        return *this;
    }

    void print(const char* tag) const { 
        printf("%s: %s", tag, buffer);
    }

    bool append_line(const char* x) {
        const auto x_len = strlen(x);
        if(x_len + length + 2 > max_size) return false; 
        std::strncpy(buffer + length, x , max_size - length);
        length += x_len;
        buffer[length++] = '\n';
        buffer[length] = 0;
        return true;
    }
    ~SimpleString() {
        delete[] buffer;
    }

    private:
        size_t max_size; 
        char* buffer; 
        size_t length;
};

int main() {
    SimpleString a {50};
    a.append_line("we apologize for the");
    //SimpleString a_copy{a };
    SimpleString b {50};
    // SimpleString a_copy{50};
    // a.append_line("inconvenience");
    // a.print("a");
    // a_copy.print("a_copy");
    b.append_line("Last message");
    a.print("a");
    b.print("b");
    b = a; 
    a.print("a");
    b.print("b"); 
}