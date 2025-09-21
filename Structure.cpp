struct Rectangle
{
    int length, breadth; // 2 bytes + 2 bytes = 4 Bytes
};

int main()
{
    struct Rectangle r; // Declaration
    // struct Rectangle r = {10,5} ----->>> Declaration + Initialization
    r.length = 10; //can access using dot(.)
    r.breadth = 5; 
}
