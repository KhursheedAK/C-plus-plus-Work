#ifndef MYSTRING_H_
#define MYSTRING_H_
class Mystring
{
    private:
        char *str;
    public:
        Mystring();
        Mystring(const char *str);
        Mystring(const Mystring &source); // copy constructor
        Mystring(Mystring &&source); // move constructor

        // Operator Overload
        Mystring &operator = (const Mystring &rhs); // copy assignment
        Mystring &operator = (Mystring &&rhs);      // move assignment

        int get_length();
        const char *get_str();

        ~Mystring();

};
#endif