// typedef struct PolyNode *Polynomial;


typedef struct PolyNode
{
    int coef;
    int expon;
    struct PolyNode *link;
};
