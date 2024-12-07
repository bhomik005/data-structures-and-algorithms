// There are multiple ways to initialize variables in C++
void copyInitialization() {
    // copy initialization technique
    int iVar = 100;
    char32_t cVar = 'a';
    long long llVar = 96343536373883;
    bool boVar = true;
}

void directInitialization() {
    // direct initialization technique
    int iVar(100);
    char32_t cVar('a');
    long long llVar(96343536373883);
    bool boVar(true);
}

void braceInitialization() {
    // brace or uniform initialization technique
    int iVar{100};
    char32_t cVar{'a'};
    long long llVar{96343536373883};
    bool boVar{true};
}