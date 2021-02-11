//#include "Repository.h"
//
//Repository::Repository(bool sync)
//{
//	this->sync = sync;
//
//	ReadFromStorage();
//}
//
//Repository::~Repository()
//{
//	WriteToStorage();
//
//}
//
//bool Repository::Add(Entity* en) {
//	entity.push_back(en);
//	if (sync) {
//		WriteToStorage();
//	}
//	return true;
//}