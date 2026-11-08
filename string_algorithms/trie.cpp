const int N = 5e6, A = 26;
struct node {
    node* to[A];
    int cntEnd, cnt;
} nodes[N];
typedef node* trie;
int T = 0;
trie new_node() {
    memset(nodes[T].to, 0, A * (sizeof nodes[T].to[0]));
    nodes[T].cntEnd = 0;
    return &nodes[T++];
}
void add_string(trie r, const string& s) {
    for (char _c : s) {
        int c = _c - 'a';
        r->cnt++;
        if (!r->to[c]) r->to[c] = new_node();
        r = r->to[c];
    }
    r->cntEnd++;
    r->cnt++;
}
int find(trie r, const string& s) {
    for (char _c : s) {
        int c = _c - 'a';
        if (!r->to[c]) return 0;
        r = r->to[c];
    }
    return r->cnt;
}
