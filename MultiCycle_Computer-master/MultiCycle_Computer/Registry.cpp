#ifndef REGISTRY_CPP
#define REGISTRY_CPP
#include "Registry.h"
#include<map>
#include<string>

//
Registry::Registry() {
	
};

void Registry::write(uint32_t a1) {
    int pretarget;
    if (!source.empty()) {
        pretarget = (--source.end())->first;
        pretarget++;
        source[a1] = pretarget;
    }
}

uint32_t Registry::find(uint32_t a1) {
    source.find(a1)
}

void Registry::readAll() {
    map <uint32_t, uint32_t> ::iterator i;
    cout << "Source code" << "  &  " << "Value" << endl;
    for (i = source.begin(); i != source.end(); i++)
    {
        cout << (*i).first << "    " << (*i).second << "\n";
    }
}


//source.erase("peepee");
//cout << "The size of the source code is: " << source.size();
//source.clear();
#endif // !REGISTRY_CPP