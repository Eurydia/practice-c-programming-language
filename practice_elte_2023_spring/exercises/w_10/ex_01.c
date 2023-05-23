// 1.  Create enums for:
//       a) Grading score (Fail, Pass, Satisfactory, Good, Excellent);
//       b) Genders (Male, Female);
//       c) Response (Yes, No);
//       d) Boolean values (True, False);
//       e) Types of fishes (Mammals, Birds, Fish, Reptiles, Amphibians, Insects, Arachnids, Crustaceans, Mollusks, Echinoderms);
//       f) Months (January, February, ..., December);
//       g) Direction (LEFT, RIGHT, UP, DOWN):

enum grade
{
    Fail,
    Pass,
    Satisfactory,
    Good,
    Excellent
};

enum gender
{
    Male,
    Female,
};

enum response
{
    Yes,
    No
};

enum boolean
{
    True,
    False
};

enum animal
{
    Mammals,
    Birds,
    Fish,
    Reptiles,
    Amphibians,
    Insects,
    Arachnids,
    Crustaceans,
    Mollusks,
    Echinoderms
};

enum month
{
    January,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

enum direction
{
    LEFT,
    RIGHT,
    UP,
    DOWN
};

int main()
{
    return 0;
}