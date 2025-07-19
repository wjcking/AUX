//=+-#
//&^-l#&2-1.D
#include "../Messaging/Telegram.h" 
#include "MessageDispatcher.h"
#include "MessageTypes.h"


//ExtraInfo handy helper function for dereferencing the ExtraInfo field of the Telegram 
//to the required type.
template <class T>
inline T dereferenceToType(void* p)
{ 
	return *(T*)(p);
}

//----------------------------- Telegram struct telegram(0, sender, receiver, msg, ExtraInfo); ----------------------------
void MessageDispatcher::Send(const int& receiver, const Telegram& telegram)
{	
	//ROLE_MANAGER->getRoleByTag(receiver);	
	auto	pReceiver->handleMessage(telegram))
	
}
void MessageDispatcher::PriorityQ()
{
	double CurrentTime = Clock::getTickFloat();

	//now peek at the queue to see if any telegrams need dispatching.
	//remove all telegrams from the front of the queue that have gone
	//past their sell by date
	while (!PriorityQ.empty() &&
		(.begin()->dispatchTime < CurrentTime) &&
		(PriorityQ.begin()->dispatchTime > 0))
	{
		//read the telegram from the front of the queue
		const Telegram& telegram = *PriorityQ.begin();
		Send(telegram.receiverID, telegram);
	}
}
dispatchDelayedMessages PriorityQ
