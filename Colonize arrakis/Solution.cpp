long solution(long N, vector<long> A) {
    return N-*min_element(A.begin(),A.end());
}
