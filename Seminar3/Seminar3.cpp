#include "Rental.h"
#include <iostream>
#include <cassert>

using namespace std;

int main()
{
    Rental r;
    Auto a1(1, "abc", "def"), a2(2, "abc", "def"), a3(3, "abc", "def");
    Kunde k1(1, "Nume"), k2(2, "sugestiv"), k3(3, "123");
    r.add_auto(a1);
    r.add_auto(a2);
    r.add_auto(a3);
    assert(r.size_auto() == 3);
    r.add_client(k1);
    r.add_client(k2);
    r.add_client(k3);
    assert(r.size_clients() == 3);
    r.update_client(k1, "brutus");
    assert(k1.get_name() == "brutus");
    r.remove_auto(a1);
    r.remove_auto(a2);
    r.remove_auto(a3);
    assert(r.size_auto() == 0);
    r.delete_client(k1);
    r.delete_client(k2);
    r.delete_client(k3);
    assert(r.size_clients() == 0);


    cout << "Merge!";
}