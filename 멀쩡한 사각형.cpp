using namespace std;
long long gcd(int a, int b){
    long tmp = 0;
    while(b != 0){
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
long long solution(int w, int h) {
    long long W = w;
    long long H = h;
    return W*H - ((W+H)-gcd(w,h));
}
