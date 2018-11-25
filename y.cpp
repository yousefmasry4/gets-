
void getys(char arr[]){
char x;
int i=0;
while(x!=10){
    scanf("%c",&x);
    arr[i]=x;
    i++;
    }
arr[i-1]='\0';
}
