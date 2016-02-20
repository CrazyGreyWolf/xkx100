// bao.c

#include <ansi.h>

inherit NPC;
inherit F_MASTER;

void create()
{
	set_name("����ͬ", ({ "bao butong", "bao","butong" }));
	set("title", "����Ľ�� "HIY"���ׯ��"NOR );
	set("nickname", "��������");
	set("long", "����һ����ʿ���������������������硣\n");
	set("gender", "����");
	set("class", "scholar");
	set("age", 35);
	set("attitude", "friendly");
	set("shen_type", 1);
	set("str", 30);
	set("int", 30);
	set("con", 30);
	set("dex", 30);
	
	set("max_qi", 2000);
	set("max_jing", 1000);
	set("neili", 1500);
	set("max_neili", 1500);
	set("jiali", 100);
	set("combat_exp", 300000);
	set("score", 50000);

	set_skill("force", 100);
	set_skill("dodge", 100);
	set_skill("parry", 100);
	set_skill("sword", 100);
	set_skill("blade", 100);
	set_skill("finger", 100);
	set_skill("strike", 100);
	set_skill("literate", 100);
	set_skill("murong-sword", 150);
	set_skill("murong-blade", 150);
	set_skill("canhe-finger", 150);
	set_skill("xingyi-strike", 150);
	set_skill("shenyuan-gong", 100);
	set_skill("yanling-shenfa", 150);
	map_skill("parry", "murong-sword");
	map_skill("sword", "murong-sword");
	map_skill("blade", "murong-blade");
	map_skill("force", "shenyuan-gong");
	map_skill("dodge", "yanling-shenfa");
	map_skill("finger", "canhe-finger");
	map_skill("strike", "xingyi-strike");
	prepare_skill("finger", "canhe-finger");
	prepare_skill("strike", "xingyi-strike");
	set("env/wimpy", 60);
	set("chat_chance_combat", 60);  
	set("chat_msg_combat", ({		
		(: perform_action, "sword.lianhuan" :),
		(: perform_action, "finger.dian" :),
		(: exert_function, "powerup" :),
		(: exert_function, "reserve" :),
		(: exert_function, "recover" :),
	}) );
	set("inquiry",([
		"������"   : "ֻ��������������ǹ��ӣ�Ҳ��֪�����������ˣ�\n",
		"��Ľ��" : "�Ҽҹ��Ӻ�ؤ���ǰ����������ϳơ���Ľ�ݱ��Ƿ塱��\n",
		"Ľ�ݸ�"   : "��������Ҳ�������������Ҽҹ��ӣ�\n",
		"������"   : "���ǹ���ү�ľ��裬����ɽׯ��ׯ����\n",
		"�˰ٴ�"   : "���ʵ˴�簡�����������ׯ���ء�\n",
		"��ұǬ"   : "��ұ������Ÿ봫��һ���룬��û�����˶��ö��ˡ�\n",
		"����ͬ"   : "�Ǿ����ҵĴ���ˣ���Ц��Ц��\n",
		"������"   : "�Ǿ����ҵĹ�Ů����\n",
		"�粨��"   : "���ĵ����Ǻ�ˬ�ˣ����Ӳ����˼ƽ�ʲô��\n",
	]) );
	create_family("����Ľ��", 33, "����");
 	setup();
	carry_object("/clone/misc/cloth")->wear();
	carry_object("/clone/weapon/changjian")->wield();
}

void attempt_apprentice(object ob)
{
	if ((int)ob->query("betrayer") > 0)
	{
		command("say ��λ" + RANK_D->query_respect(ob) +
			"����Ľ�ݼҸ�������ΪҪ�£�����־���ᣬ��Ե���š�");
		return;
	}
	if ((int)ob->query_skill("shenyuan-gong", 1) < 50)
	{
		command("say ����Ľ�ݼ��书�����ڹ�Ϊ������");
		command("say "+RANK_D->query_respect(ob)+"��Ӧ�ö��Ŭ����");
		return;
	}
	command("say �ð��Ҿ�����Ϊͽ�ɡ�");
	command("recruit " + ob->query("id"));
}