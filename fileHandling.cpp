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


char *randstring(size_t length) {

    static char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    static char digitset[] = "0123456789";
    char *randomString = NULL;
    //cout<<"Displaying the character set: "<<sizeof(char)<<endl;

    static int myseed = 29203020;
    srand(time(0) * length + ++myseed);

    if (length) {
       // randomString = (char*)malloc(sizeof(char) * (length +1));
          randomString = new char(length+1);
        if (randomString) {
            for (int n = 0;n < length;n++) {

                    if(n<3){
                int key = rand() % (int)(sizeof(charset) -1);  // it's charset-1 because array start with zero
                randomString[n] = charset[key];
                    }
               // cout<<"key: "<<key<<endl;

              else if(n == 3)
                randomString[n] = ' ';


                else {
                     int key = rand() % (int)(sizeof(digitset));
                     randomString[n] = digitset[key];

                }
            }

            randomString[length] = '\0';
        }
    }

    return randomString;
}


int main()
{
    char filename[50] = "C:/Users/Animesh/Desktop/week.txt";
   // double si = get_file_size(filename);

   // cout<<si<<endl;  // yeah get the file size in byte

   FILE *fp;  //defining a pointer to point a file
   // need to open a file

   //structure of file open :  FILE *fopen(char *fname, char * mode);

   if((fp = fopen(filename , "w")) == NULL){    // a file is open named filename and the mode of file is "r" means read
      cout<<"Error opening file"<<endl;
      exit(1);
      }else{
        cout<<"File opened"<<endl;
      }

//fclose(fp);// close the file associated with fp means the pointer will not point it .

 static int length = 8;
 for(int i = 0; i<10 ; ++i){
 char *st = randstring(length);
 cout<<st<<endl;
 }
    // now insert the value of random string in file up to 2 gigabyte

    double file_size = 0;
    while(1){
          file_size = get_file_size(filename);
          if(file_size > 2000000000)
            break;
        char *st = randstring(length);
        fputs(st,fp);
    }
 fclose(fp);
 return 0;
}
