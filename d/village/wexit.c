// Room: /d/village/eexit.c

inherit ROOM;

void create()
{
	set("short", "�����");
	set("long", @LONG
�����ǻ�ɽ���£���ȻԶ���سǣ�ȴû��ʲ��ɽ���ݿ��ڸ�����û��
������һ��С��ׯ�������������˼Ҳ��࣬�����ǹ����ճ������������
Ϣ����������������С���ӣ������ϻ�ɽ��ɽ·�ˡ������м��Ʒ��ӡ�
LONG );

// [description to be added, the other exit lead to...]
	set("exits", ([ /* sizeof() == 2 */
		"east"      :__DIR__"nwroad1",
		"north"     : __DIR__"shack",
		"northwest" : "/d/huanghe/road6",
	]));
	
        set("objects", ([
            __DIR__"npc/kid": 2
        ]) );
//        set("no_clean_up", 0);
        set("outdoors", "village" );

	set("coor/x", -1000);
	set("coor/y", 290);
	set("coor/z", 0);
	setup();
        replace_program(ROOM);
}