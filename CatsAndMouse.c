char* catAndMouse(int x, int y, int z) {

int catA=abs(x-z);
int catB=abs(y-z);
if(catA>catB){
    return "Cat B";
}
if(catA<catB){
    return "Cat A";
}
if(catA==catB){
    return "Mouse C";
}
return 0;
}
