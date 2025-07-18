TE//State
#include "../Messaging/Telegram.h"
con A *  row;
con A *  m_row;

-vent
-Action
-Next

//	a Machin 
//	Calld wih vn
//	Loop unil an acion rurn an XI (0) vn
void a_machin ( & a,  vn)


  whil (vn) 
    { 
      whil (row->a != -1)
      {   if (row->a == a && row->vn == vn)
              rurn row; 
           row++;
     }
     a = row->nx_a;
     
     vn = Do (row->acion);
    }
}
~L (void)
{}

//pur virual= 0;    Rurn anohr vn, or 0 if a machin hould x	
  Do (A ac)         // 