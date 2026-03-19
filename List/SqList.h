#define OK 1
#define ERROR 0
#define OVERFLOW -2
#define MAXSIZE 100

typedef int Status;
typedef string ElemType;
typedef struct{
    ElemType *elem;
    int length;
}SqList;

Status InitList(SqList &L){
    L.elem=new ElemType[MAXSIZE];
    if(!L.elem) return OVERFLOW;
    L.length=0;
    return OK;
}

Status GetElem(SqList L,int i,ElemType &e){
    if(i<1||i>L.length) return ERROR;
    e=L.elem[i-1];
    return OK;
}

int LocateElem(SqList L,ElemType e){
    int j;
    for(j=0;j<L.length;j++)
        if(L.elem[j]==e) return j+1;
    return 0;
}

Status ListInsert(SqList &L,int i,ElemType e){
    if(i<1||i>L.length+1) return ERROR;
    if(L.length==MAXSIZE) return ERROR;
    int j;
    for(j=L.length-1;j>=i-1;j--)
        L.elem[j+1]=L.elem[j];
    L.elem[i-1]=e;
    L.length++;
    return OK;
}

int ListLength(SqList L){
    return L.length;
}

void ListPrint(SqList L){
    int i;
    if(L.length==0) cout<<"¿Õ±í";
    for(i=0;i<L.length;i++)
        {
            cout<<L.elem[i]<<' ';
        }
    cout<<endl;
    return ;
}
