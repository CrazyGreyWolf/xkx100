// Room: /d/lingxiao/cook.c
// Last Modified by Winder on Jul. 15 2001

inherit ROOM;
void create()
{
	set("short","����");
	set("long",@LONG
�����������ǵĳ�����һ�󷹲˵���ζ��ӯ��䡣һ������������
ͷ�󺹣�����������������������Ҳ�ر��˰���һ�������������ϣ�
��һ�����Ĳ���������һ�ڼ���Ĺ�����˵�ǰ�����ȥ�����¿����
����Ҫ��ÿһ����ֵ�����ĵ��Ӷ�Ҫ�����ɣ������������ơ������
����(serve)������÷��ˡ�
LONG);
	set("exits",([
		"west" : __DIR__"zoulang2",
	]));
	set("objects",([
		__DIR__"npc/dizi" : 1,
	]));
	set("ricewater", 5);
	set("no_fight","1");
	set("coor/x", -30980);
	set("coor/y", -8870);
	set("coor/z", 140);
	setup();
}
int valid_leave(object me, string dir)
{
	if ( present("soup", me) || present("rice", me))
	return notify_fail("�������ӿ�����һ�ۣ��Է��һ���Ҫ�õ���ȥ��\n");
	return ::valid_leave(me, dir);
}
void init()
{
	add_action("do_serve","serve");
}
int do_serve()
{
	object me = this_player();
	object food;
	object water;

	if (me->query("family/family_name") != "������")
		return notify_fail("�������ӵ������ֲ��������ǵģ��߿���\n");
	if(present("rice",this_player()) ) 
		return notify_fail("�������ӵ������������ã����˷�ʳ�\n");
	if(present("rice",this_object()) ) 
		return notify_fail("�������ӵ������������ã����˷�ʳ�\n");
	if (query("ricewater")>0)
	{
		message_vision("��������Ц��:�����á�\n",me);
		food=new(__DIR__"obj/rice");
		water=new(__DIR__"obj/soup");
		food->move(me);
		water->move(me);
		add("ricewater",-1);
	}
	else 
		message_vision("���Ӷ�$NǸ����: �ˣ��ԵĺȵĶ�û�ˡ�\n",me);
	return 1; 
}
