typedef struct {
    int* arr;
    int min_top;
    int top;
} MinStack;

/** initialize your data structure here. */
MinStack* minStackCreate(int maxSize) {
    MinStack* ms;
    if(ms!= NULL && ms->arr != NULL){
        ms->arr = (int*)malloc(maxSize*(sizeof(int)));
        ms->top = -1;
        ms->min_top = 0;//init
    }
    return ms;
    
}

void minStackPush(MinStack* obj, int x) {
    if(obj != NULL){
    if(obj->top == -1)
    	obj->top = 0;

    obj->arr[obj->top] = x;
    obj->top++;
    }
}

void minStackPop(MinStack* obj) {
    if(obj != NULL){
	if(obj->top >= 0)
    obj->top--;
    }
}

int minStackTop(MinStack* obj) {
    if(obj != NULL && obj->arr!=NULL){
    return obj->arr[obj->top];
    }
    return 0;
}

int minStackGetMin(MinStack* obj) {
    if(obj != NULL && obj->arr != NULL){
	int temp = obj->arr[obj->top];
    for(int i = 0; i < obj->top; i++){
        if(temp < obj->arr[i])
        	temp = obj->arr[i];
    }
    return temp;
    }
    return 0;//
}

void minStackFree(MinStack* obj) {
    
}

/**
 * Your MinStack struct will be instantiated and called as such:
 * struct MinStack* obj = minStackCreate(maxSize);
 * minStackPush(obj, x);
 * minStackPop(obj);
 * int param_3 = minStackTop(obj);
 * int param_4 = minStackGetMin(obj);
 * minStackFree(obj);
 */