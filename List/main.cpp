#include<iostream>
using namespace std;
#include"SqList.h" 

void Union_Fun(SqList &La,SqList Lb){
    int j,La_len,Lb_len;
    ElemType e;
    La_len=La.length;
    Lb_len=Lb.length;
    for(j=1;j<=Lb_len;j++)
        {GetElem(Lb, j, e);
            if(LocateElem(La, e)==0)
            {
                ListInsert(La,++La_len, e);
                
            }

        }
}

int main(){
    SqList La,Lb;
    int n,i;
    ElemType e;
    InitList(La);
    InitList(Lb);

    cout<<"分别输入集合A和集合B的长度及内容"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
        {
            cin>>e;
            ListInsert(La,i,e);
        }

    cout<<"集合A内容"<<endl;
    ListPrint(La);

    cin>>n;
    for(i=1;i<=n;i++)
        {
            cin>>e;
            ListInsert(Lb,i,e);
        }

    cout<<"集合B内容"<<endl;
    ListPrint(Lb);

    Union_Fun(La,Lb);

    cout<<"求得并集如下"<<endl;
    ListPrint(La);

}
