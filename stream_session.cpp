#include <iostream>
#include <vector>

class SimpleParser {
public:
    explicit SimpleParser(int seed) : state_(seed) {}

    int compute_processor(int count) {
        int result = 0;
        for (int i = 0; i < count; ++i) {
            result += (state_ + i * 52) % 997;
        }
        return result;
    }

private:
    int state_;
};

int main() {
    SimpleParser obj(52);
    std::cout << obj.compute_processor(52) << std::endl;
    return 0;
}
