//main.cpp
#include  "Subject.h"
#include  "Observer.h"

#include  <iostream>
using namespace std;

int main( int argc,char* argv[] )
{
    ConcreteSubject* psubject = new ConcreteSubject();
    Observer* pobserver1 = new ConcreteObserverA(psubject);
    Observer* pobserver2 = new ConcreteObserverB(psubject);
    psubject->SetState("old");
    psubject->Notify();
    psubject->SetState("new");  // Ҳ������Observer����
    psubject->Notify();
    return 0;
}
