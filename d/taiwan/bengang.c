// Room: /d/taiwan/bengang.c
// Last Modifyed by Ahda on Jan. 4 2002

#include <ansi.h>
inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
�����������꣬����̨������˼��������կ���̨�壬���񱽸۵�
½��˼������ϵط�ˮ������Ƭ��Ұδ�٣������ڴ˿�����������һ��
��ҵ�����ʾ۷�ľ�����������կ����ʱ��������Ϊ����ַ������幥
����˼��ǲ�˼��԰������̶����磬�������š����۷��ϱ����и�һϪ��
Ի�Ͻ֣�Ի���֣��۳���꣣��ٻ����٣��׳�С̨�塣����˵��һ����
�������������ԡ�
LONG );
	set("exits", ([
		"east" : __DIR__"taiwanfu",
	]));
	set("objects", ([
		__DIR__"npc/shangren": 2,
	]));

	set("outdoors", "taiwan");
	set("coor/x", 2490);
	set("coor/y", -7010);
	set("coor/z", 0);
	setup();
	replace_program(ROOM);
}
