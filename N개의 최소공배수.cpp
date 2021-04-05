int gcd(int a, int b){
    while(b != 0){
        int tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
int lcm(int a, int b){
    return a * b / gcd(a, b);
}

int solution(vector<int> arr) {
    int answer = 0;
    for (int i = 0; i < arr.size()-1; i++){
        arr[i+1] = lcm(arr[i], arr[i+1]);
    }
    answer = arr[arr.size()-1];
    return answer;
}
