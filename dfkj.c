#include<stdio.h>
#include<math.h>
int length(float,float,float,float);
int side(float,float,float);
int main()
{
    float ax,bx,cx,ay,by,cy,lab,lbc,lca,s,area;
    printf("Enter coordinates\n");
    scanf("%f %f",&ax,&ay);
    printf("Enter coordinates\n");
    scanf("%f %f",&bx,&by);
    printf("Enter coordinates\n");
    scanf("%f %f",&cx,&cy);
    lab = length(ax,ay,bx,by);
    lbc = length(bx,by,cx,cy);
    lca = length(cx,cy,ax,ay);
    s =side(lab,lbc,lca);
    area = sqrt(s*(s-lab)*(s-lbc)*(s-lca));
    printf("%f %f %f\n",lab,lbc,lca);
    printf("area of triangle = %f",area);
    return 0;
}
int length(float p,float q,float r,float s)
{
    float u,v,length;
    u = r-p;
    v = s-q;
    length = sqrt((u*u)+ (v*v));
    return (length);
}
int side(float lab,float lbc,float lca)
{
    float su;
    su = (lab+lbc+lca)/2;
    return (su);
}
