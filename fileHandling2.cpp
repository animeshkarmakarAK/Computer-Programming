#include<bits/stdc++.h>

using namespace std;


double  get_file_size(string filename) // path to file
{
    FILE *p_file = NULL;
    p_file = fopen(filename.c_str(),"rb");
    fseek(p_file,0,SEEK_END);
    double size = ftell(p_file);
    fclose(p_file);
    return size;
}

double sf(string filename)
{

    FILE *fp;
    fp = fopen(filename.c_str(),"rb");
    fseek(fp, 0 , SEEK_END);
    double size = ftell(fp);
    fclose(fp);
    return size;
}

int file_printf(size_t temp)
{

}

int file_scanf(size_t temp)
{

}

int main(){

FILE *f;
char filename[100]= "D:/test.txt";
/*f = fopen(filename , "w");
char a[111] = "i am animesh ";
fputs(a,f);
double f_size = get_file_size(filename);
cout<<f_size<<endl;
fclose(f);
 f = fopen(filename,"rb");
 char ch ;
 while(( ch = fgetc(f)) != EOF){
    cout<< ch << endl;
 }

 cout<<sf(filename)<<endl;

 fclose(f); */

// filename = "D:/test.txt";
 //f = fopen(filename ,"w" );
 if((f = fopen(filename , "w")) == NULL){
 cout<<"cannot open file "<<endl;
}else
    cout<<"file opened "<<endl;

 fprintf(f, "%s %d ", "animesh karmakar", 140146);
 char  name[100] ;

   if((f = fopen(filename , "r")) == NULL){
 cout<<"cannot open file "<<endl;
}else
    cout<<"file opened "<<endl;
  fscanf(f, "%s", &name);
  cout<<name<<endl;
  fclose(f);
return 0;
}
