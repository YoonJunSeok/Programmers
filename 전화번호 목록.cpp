// unordered_map 이용
bool solution(vector<string> phone_book) {
    // 데이터가 많고 중복되지 않으므로 map보다 검색이 빠른 unordered_map 사용한다.
    unordered_map<string, int> om;
    // value는 단순히 key가 존재하는지 알려주는데 사용한다.
    for (int i = 0; i < phone_book.size(); i++)
        om[phone_book[i]] = 1;
    
    for (int i = 0; i < phone_book.size(); i++) {
        string number = "";
        for (int j = 0; j < phone_book[i].size(); j++) {
            number += phone_book[i][j];
            if (om[number] && number != phone_book[i])
                return false;
        }
    }
    return true;
}

// vector 이용
bool solution(vector<string> phone_book) {
	// 수의 비교가 쉽도록 사전순으로 정렬한다. 
    sort(phone_book.begin(), phone_book.end());
    for (int i = 0; i < phone_book.size()-1; i++) {
        if (phone_book[i] == phone_book[i + 1].substr(0,phone_book[i].size()))
            return false;
    }
    return true;
}
