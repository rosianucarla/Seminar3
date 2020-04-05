#include "Rental.h"

Rental::Rental() {}

void Rental::add_client(Kunde k) {
	for (int i = 0; i < clients.size(); i++) {
		if (clients.at(i).get_id() == k.get_id())
			return;
	}
	clients.push_back(k);
}

void Rental::delete_client(Kunde k) {
	for (int i = 0; i < clients.size(); i++) {
		if (clients.at(i).get_id() == k.get_id()) {
			clients.erase(clients.begin() + i);
			return;
		}
	}
}

void Rental::update_client(Kunde& k, string name) {
	for (int i = 0; i < clients.size(); i++) {
		if (clients.at(i).get_id() == k.get_id()) {
			clients[i].set_name(name);
			k.set_name(name);
		}
	}
}

void Rental::add_auto(Auto a) {
	for (auto i = autos.begin(); i != autos.end(); ++i)
	{
		if (i->get_id() == a.get_id())
			return;
	}
	autos.push_back(a);
}

void Rental::remove_auto(Auto a) {
	for (int i = 0; i < autos.size(); i++) {
		if (autos.at(i).get_id() == a.get_id()) {
			autos.erase(autos.begin() + i);
			return;
		}
	}
}

Rental::~Rental() {}