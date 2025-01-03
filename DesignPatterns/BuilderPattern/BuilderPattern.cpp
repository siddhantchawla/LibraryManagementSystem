#include </workspaces/LowLevelDesign/DesignPatterns/BuilderPattern/UserBuilder.hpp>

int main()
{
    User* user = (new UserBuilder(1, "Sid"))->setAge(26)->build();
    user->printUser();
}