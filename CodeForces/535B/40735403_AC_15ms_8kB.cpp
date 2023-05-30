//
// Created by ahmed on 1/26/2023.
//
#include <bits/stdc++.h>
#define ll long long

std::vector<ll>Tree_4_and_7_;
ll baseNumber = 1e9 + 7;
void generate4Tree(ll n = 0) {
    if (n >= baseNumber)
        return;
    Tree_4_and_7_.push_back(n);

    generate4Tree(n * 10 + 4);
    generate4Tree(n * 10 + 7);
}

//void generate7Tree(ll n = 7) {
//    if (n >= baseNumber)
//        return;
//    Tree_4_and_7_.push_back(n);
//
//    generate7Tree(n * 10 + 4);
//    generate7Tree(n * 10 + 7);
//}

int main() {
    generate4Tree();
//    generate7Tree();
    std::sort(Tree_4_and_7_.begin(), Tree_4_and_7_.end());

    int n;
    std::cin >> n;
    for (int i = 0; i < Tree_4_and_7_.size(); ++i) {
        if (n <= Tree_4_and_7_[i]) {
            std::cout << i;
            break;
        }
    }
}
