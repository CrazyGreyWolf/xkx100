// tiefu.c
// Last Modified by winder on May. 25 2001

#include <weapon.h>
inherit AXE;

void create()
{
	 set_name("����", ({ "lumber axe", "axe" }) );
	 set_weight(22000);
	 if( clonep() )
		 set_default_object(__FILE__);
	 else {
		 set("unit", "��");
		 set("long", "����һ�ѳ��ص���������������\n");
		 set("value", 300);
		 set("wield_msg", "$N�ó�һ�ѿ����õ�$n���������е���������\n");
		 set("unwield_msg", "$N�������е�$n��\n");
	 }
	 init_axe(10);
	 setup();
}