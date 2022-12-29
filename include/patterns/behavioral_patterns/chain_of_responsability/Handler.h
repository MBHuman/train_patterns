
class Handler {
public:
    Handler* Successor;
    Handler() {}
    virtual void HandleRequest(int request);
};