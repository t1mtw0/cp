#include <iostream>
#include <string>

class Node {
  public:
    Node* next;
    std::string value;

    Node(Node* next, std::string value) : next{next}, value{value} {}
};

class LL {
  public:
    Node* head_;
    int size_;

    std::string middle() {
        Node* curr = head_;
        if (!curr)
            return "";
        for (int i = 0; i < size_ / 2; ++i)
            curr = curr->next;
        return curr->value;
    }
};

int main() {
    Node* head = new Node(
        new Node(
            new Node(new Node(new Node(new Node(nullptr, "sixth"), "fifth"),
                              "fourth"),
                     "third"),
            "second"),
        "first");
    LL* ll = new LL();
    ll->head_ = head;
    ll->size_ = 6;
    Node* curr = ll->head_;
    std::cout << ll->middle() << std::endl;
}
