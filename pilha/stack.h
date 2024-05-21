typedef struct SatckNode{
    char data;
    struct StackNode* next;
}StackNode;

void push(SatckNode** root, char data);
char pop(SatckNode** root);
char peek(SatckNode* root);
int isEmptychar(SatckNode** root);
void displaychar(SatckNode** root);