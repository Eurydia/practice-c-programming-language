// 0. Provide the definition for each of the following structures:
//     a) Structure inventory containing character array partName[ 30 ], integer partNumber,
//     floating point price, integer stock and integer reorder.
//     b) A structure called address that contains character arrays
//     streetAddress[ 25 ], city[ 20 ], state[ 3 ] and zipCode[ 6 ].
//     c) Structure student that contains arrays firstName[ 15 ] and
//     lastName[ 15 ] and variable homeAddress of type struct address from part (b).
struct inventory
{
    char partName[30];
    int partNum;
    float price;
    int stockl;
    int reorder;
};
struct address
{
    char streetAddress[25];
    char city[20];
    char state[3];
    char zipCode[6];
};
typedef struct address address_t;
struct student
{
    char firstName[15];
    char lastName[15];
    address_t address;
};

int main()
{
    return 0;
}