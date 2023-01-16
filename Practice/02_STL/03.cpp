#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <forward_list>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <deque>
#include <queue>
#include <stack>
#include <algorithm>

int main()
{
    typedef std::pair<std::string, std::string> userListPair;
    typedef std::forward_list<userListPair> userList;
    typedef std::map<std::int64_t, userList> userMap;
    std::vector<userMap> users;
    // Structure of users:
    /*
        vector [
            map(<key>,
                forward_list([
                    pair(<key>, <value>),
                    pair(<key>, <value>),
                ])
            ),
            map(<key>,
                forward_list([
                    pair(<key>, <value>),
                    pair(<key>, <value>),
                ])
            )
        ]
    */
    userList list1 = {std::make_pair("name", "Roman"), std::make_pair("roll", "25")};
    userMap user;
    user.insert(std::make_pair(1, list1));
    users.push_back(user);

    for (auto user : users)
    {
        for (auto userMap : user)
        {
            std::cout << "User " << userMap.first << std::endl;
            for (auto userInfo : userMap.second)
            {
                std::cout << userInfo.first << ": " << userInfo.second << std::endl;
            }
        }
    }
    return 0;
}