// Room: /d/nanshaolin/huilang8.c
// Last Modified by winder on May. 29 2001

inherit ROOM;

void create()
{
	set("short", "回廊");
	set("long", @LONG
这里是法堂西侧的回廊。彩梁画栋，连顶棚也用彩漆绘满了各种飞
天的图形，每幅画似乎都在诉说一个娓娓动人的佛经故事。廊外两侧是
翠绿的青竹，在微风中沙沙做响。四周静悄悄的，只有你自己的脚步声
在耳边回荡。
LONG );
	set("exits", ([
		"west"  : __FILE__,
		"east"  : __DIR__"xcping",
                "south" : __DIR__"huilang7",
                "north" : __FILE__,
	]));
	set("no_clean_up", 0);
	set("outdoors","nanshaolin");
	set("coor/x", 1810);
	set("coor/y", -6100);
	set("coor/z", 20);
	setup();
	replace_program(ROOM);
}

