#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
typedef struct{
    int 😅;
    int 😉😉;}🙂;
typedef struct{
    🙂 **😉;
    int 😇😇😇;
    int 😇;
    int 😚;
    int 😛;
    int 😑😑😑😑;}🤑;
typedef struct{
    🤑 **🤯🤯🤯;
    int 😴;
    int 🤥;}🤯;
typedef struct{
    int *🖖🖖🖖;
    int *🖖;
    int *😎😎😎;
    int len;
    int size;}🤠;
void 🖖(🤯 *🤞,int 👎){
    if(🤞->🤥<👎+1){
        int size=🤞->🤥*2>👎?🤞->🤥*2:👎+4;🤞->🤯🤯🤯=realloc(🤞->🤯🤯🤯,size*sizeof(🤑 *));
        for(int j=🤞->🤥;j<size;j++)🤞->🤯🤯🤯[j]=NULL;🤞->🤥=size;}
    if(!🤞->🤯🤯🤯[👎]){
        🤞->🤯🤯🤯[👎]=calloc(1,sizeof(🤑));🤞->😴++;}} 
void 🧠🧠🧠(🤯 *🤞,int a,int b,int w){
    a=a-'a';
    b=b-'a';
    🖖(🤞,a);
    🖖(🤞,b);
    🤑 *v=🤞->🤯🤯🤯[a];
    if (v->😇😇😇>=v->😇){
        v->😇=v->😇?v->😇*2:4;v->😉=realloc(v->😉,v->😇*sizeof(🙂 *));}
    🙂 *e=calloc(1,sizeof(🙂));
    e->😅=b;
    e->😉😉=w;
    v->😉[v->😇😇😇++]=e;}
🤠 *🦴🦴(int n){
    🤠 *h=calloc(1,sizeof(🤠));h->🖖🖖🖖=calloc(n+1,sizeof(int));h->🖖=calloc(n+1,sizeof(int));
    h->😎😎😎=calloc(n,sizeof(int));return(h);}
void 🦴(🤠 *h,int v,int p){
    int 👎=h->😎😎😎[v]==0?++h->len:h->😎😎😎[v];
    int j=👎/2;
    while(👎>1){
        if(h->🖖[j]<p)break;
        h->🖖🖖🖖[👎]=h->🖖🖖🖖[j];
        h->🖖[👎]=h->🖖[j];
        h->😎😎😎[h->🖖🖖🖖[👎]]=👎;
        👎=j;
        j=j/2;}
    h->🖖🖖🖖[👎]=v;h->🖖[👎]=p;h->😎😎😎[v]=👎;}
int min(🤠 *h,int 👎,int j,int k){
    int m=👎;
    if(j<=h->len&&h->🖖[j]<h->🖖[m])m=j;if(k<=h->len&&h->🖖[k]<h->🖖[m])m=k;
    return(m);}
int 👨(🤠 *h){
    int v=h->🖖🖖🖖[1];
    int 👎=1;
    while(1){
        int j=min(h,h->len,2*👎,2*👎+1);
        if(j==h->len)break;
        h->🖖🖖🖖[👎]=h->🖖🖖🖖[j];
        h->🖖[👎]=h->🖖[j];
        h->😎😎😎[h->🖖🖖🖖[👎]]=👎;
        👎=j;}
    h->🖖🖖🖖[👎]=h->🖖🖖🖖[h->len];
    h->🖖[👎]=h->🖖[h->len];
    h->😎😎😎[h->🖖🖖🖖[👎]]=👎;
    h->len--;
    return(v);}
void 🧔(🤯 *🤞,int a,int b){
    int 👎,j;
    a=a-'a';
    b=b-'a';
    for(👎=0;👎<🤞->😴;👎++){
        🤑 *v=🤞->🤯🤯🤯[👎];
        v->😚=INT_MAX;
        v->😛=0;
        v->😑😑😑😑=0;}
    🤑 *v=🤞->🤯🤯🤯[a];
    v->😚=(0);
    🤠 *h=🦴🦴(🤞->😴);
    🦴(h,a,v->😚);while(h->len){
        👎=👨(h);if(👎==b)break;
        v=🤞->🤯🤯🤯[👎];
        v->😑😑😑😑=1;
        for(j=0;j<v->😇😇😇;j++){
            🙂 *e=v->😉[j];
            🤑 *u=🤞->🤯🤯🤯[e->😅];if(!u->😑😑😑😑&&v->😚+e->😉😉<=u->😚){
                u->😛=👎;
                u->😚=v->😚+e->😉😉;
                🦴(h,e->😅,u->😚);}}}}
void 🧔🧔(🤯 *🤞,int 👎){
    int n,j;
    🤑 *v,*u;
    👎=👎-'a';
    v=🤞->🤯🤯🤯[👎];
    if(v->😚==INT_MAX){
        printf("lmao you got mathematically cucked, broseph\n");return;}for(n=1,u=v;u->😚;u=🤞->🤯🤯🤯[u->😛],n++);
    char *path=malloc(n);
    path[n-1]='a'+👎;
    for(j=0,u=v;u->😚;u=🤞->🤯🤯🤯[u->😛],j++)path[n-j-2]='a'+u->😛;
    printf("%d %.*s\n",v->😚,n,path);}
    int main(){
    🤯 *🤞=calloc(1,sizeof(🤯));
    🧠🧠🧠(🤞,'a','b',7);
    🧠🧠🧠(🤞,'a','c',9);
    🧠🧠🧠(🤞,'a','f',14);
    🧠🧠🧠(🤞,'b','c',10);
    🧠🧠🧠(🤞,'b','d',15);
    🧠🧠🧠(🤞,'c','d',11);
    🧠🧠🧠(🤞,'c','f',2);
    🧠🧠🧠(🤞,'d','e',6);
    🧠🧠🧠(🤞,'e','f',9);
    🧔(🤞,'a','e');
    🧔🧔(🤞,'e');
    return(0);}
