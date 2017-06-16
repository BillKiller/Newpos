void addbook()
{
		int i=0,n=0;
		char k[10];
		int m;
		printf("【请输入你要添加的书籍】\n");
		printf("书名：");
		scanf("%s",k);
		printf("数目：");
		scanf("%d",&m);
		FILE *fp;
		if((fp=fopen("C:\\book.txt","r"))!=NULL)
		{
			pritnf("找不到文件\n");
		}
		while(!feof(fp))
		{
				fscanf(fp,"%d%s%d",&book[i].num1,book[i].bookname,&book[i].num2);
				i++;
		}
		n=i;
		fclose(fp);

		{   if((strcmp(book[i].bookname,k)==0))

				{
						fp=fopen("C:\\book.txt","w");
						for(i=0;i<n-1;i++)
						{
								if((strcmp(book[i].bookname,k)==0))
								{
										book[i].num2=book[i].num2+m;
								}

						}
						fprintf(fp,"%-5d%-10s%-10d\n",book[i].num1,book[i].bookname,book[i].num2);
				}fclose(fp);
		}
		else {

				book[i].num1=i;
				strcpy(book[i].bookname,k);
				book[i].num2=m;
				//printf("%-5d%-10s%-10d\n",book[i].num1,book[i].bookname,book[i].num2);
				if((fp=fopen("C:\\book.txt","a"))!=NULL)
				{
						fprintf(fp,"%-5d%-10s%-10d\n",book[i].num1,book[i].bookname,book[i].num2);
						fclose(fp);
				}
		}

		printf("【书本信息已添加！】\n");
		printf("【返回主菜单请按1，结束请关闭】\n");

		scanf("%d",&x);

		if(x==1)
				recycle();
		system("cls");
}
