#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#define PATH "C:\\Users\\Azerty\\Desktop\\TEST.txt"

using namespace std;

class Guide
{
private:
	string firm_name;
	string owner;
	string phone;
	string address;
	string activity;
public:
	Guide() : Guide("\0", "\0", "\0", "\0", "\0") {}
	Guide(string firm_name_S, string owner_S, string phone_S, string address_S, string activity_S) : firm_name{ firm_name_S }, owner{ owner_S }, phone{ phone_S }, address{ address_S }, activity{ activity_S } {}

	void Add();
	void print();
	void Search_name(string buf);
	void Search_owner(string buf);
	void Search_phone(string buf);
	void Search_activity(string buf);
};