
// a = liczba   p = system

string dzies_na_p(int a, int p){
    string wyn = "", tmp="";
    while(a){
        wyn+= char(a%p+48);
        a/=p;
    }
    for(int i = wyn.length(); i > 0; i--){
        tmp+=wyn[i-1];
    }
    return tmp;
}
