/* 他のファイルで作った関数がありますとCコンパイラに教える */

void io_hlt(void);

/* 関数宣言なのに、{}がなくていきなり;を書くと、他のファイルにあるからよろしくね、という意味になるのです。 */

void HariMain(void)
{
fin:
	/* ここにHLTを入れたいのだが、C言語ではHLTが使えない! */
	/* これでnaskfunc.nasの_io_hltが実行されます */
	io_hlt();
	goto fin;
  
}
