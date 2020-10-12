#include"Repository.h"
//
//
//Repository::Repository(bool sync)
//{
//	this->sync = sync;
//	//maxSize = 100;
//	data =
//	//data = new Entity * [maxSize];
//	current = -1;
//	ReadFromStorage();
//}
//
//Repository::~Repository()
//{
//	WriteToStorage();
//	delete[] data;
//}
//
//bool Repository::Add(Entity* entity)
//{
//	data[++current] = entity;
//	if (sync)
//		WriteToStorage();
//
//	return true;
//}