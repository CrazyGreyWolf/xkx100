// Room: /d/wuxi/datiepu.c
// Winder 2000/02/22 

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
����һ�Ҽ�ª�Ĵ����̣����İ���һ����¯��¯��������յ�һƬ
ͨ�죬��һ�߽�ȥ���͸е��������ȡ�ǽ�Ƕ��������깤��δ�깤�Ĳ�
����������������ذ�ס����׵��һλ������ͷ�󺹻�����������ר
����־���ڴ�����
LONG );
	set("exits", ([
		"north" : __DIR__"eastroad2",
	]));
	set("objects", ([
		"/d/city/npc/smith": 1,
	]));
	set("coor/x", 390);
	set("coor/y", -810);
	set("coor/z", 0);
	setup();
	replace_program(ROOM);
}
