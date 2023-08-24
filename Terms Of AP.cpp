vector < int > termsOfAP(int x) {
    // Write your code here.
    vector<int>s;
    int i=1;
    while(s.size()!=x)
    {
        int z=(3*i)+2;
        if (z % 4 != 0) {
          s.push_back(z);
        }
        i++;
    }
    return s;
}
