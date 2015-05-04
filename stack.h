#define FAIL -9111

struct Stack{
	void* sData;
	struct Stack* ptrLink;
};
 
struct StackHeader{
	int top;
	struct Stack* ptrStackHead;
};

int push(struct StackHeader* ptrHead, void* key);
int pop(struct StackHeader* ptrHead);
struct Stack* peek(struct StackHeader* ptrHead);
