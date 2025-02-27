#ifndef MYSTRING_H_
#define MYSTRING_H_
class Mystring
{
    private:
        char *str;
    public:
        Mystring();
        Mystring(const char *str);
        Mystring(const Mystring &source);

        // Operator Overload
        Mystring &operator = (const Mystring &rhs);
        
        int get_length();
        const char *get_str();

        ~Mystring();

};
#endif