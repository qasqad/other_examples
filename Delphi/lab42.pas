unit lab42;

interface
uses Unit1, Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, ComCtrls, ShellAPI, ExtCtrls, Math;



type
trec=record
  cost,weight:integer;
end;

type
trec2=record
ww:array of integer;
r:boolean; 	//законченность
end;

procedure lab42pr;

var
n:array of trec;
w,k:array of integer;
mc:array of trec2;
maxw,c,d,a,z,kke,ikke,az1,az2,erms:integer;
bb:boolean;
bbb:array of boolean;
ab,t,t2,dt1,dt2:integer;


implementation

uses DateUtils;







procedure rrint(indx,max:integer);

var
i,j:integer;


begin

	bb:=False;
	az1:=Length(mc);



		
	if (az1=0) then

		begin

			az1:=az1+1;
			Setlength(mc, az1);

			az2:=Length(mc[az1-1].ww)+1;
			Setlength(mc[az1-1].ww, az2);

			mc[az1-1].ww[az2-1]:=w[indx];

      erms:=0;

		end

	else

		begin

			if (mc[az1-1].r) then

				begin

					az1:=az1+1;
					Setlength(mc, az1);

					az2:=Length(mc[az1-1].ww)+1;
					Setlength(mc[az1-1].ww, az2);

					mc[az1-1].ww[az2-1]:=w[indx];

          erms:=0;
				end

			else

				begin

					az2:=Length(mc[az1-1].ww)+1;
					Setlength(mc[az1-1].ww, az2);

					mc[az1-1].ww[az2-1]:=w[indx];

				end;

		end;


	max:=max-n[w[indx]].weight;



	if (max>=n[w[0]].weight)and(indx<>0) then

		begin

			i:=0;
			j:=0;

			while max>=i do

				begin

					i:=n[w[j]].weight;

					if max>=i then

						j:=j+1;

				end;

      az1:=length(mc);
      az2:=length(mc[az1-1].ww);

			if (bbb[ab-length(bbb)])and(not bb) then      //если это рекурсивный режим
				begin

							if (n[w[j-1]].weight>=n[w[indx]].weight)or(n[mc[az1-1].ww[az2-1]].weight=n[w[j-1]].weight) then

								begin
									j:=indx;
								end;
				end;

       if mc[az1-1].ww[az2-1]=w[j-1] then

								begin
									j:=indx;
								end;

			

			if n[mc[az1-1].ww[0]].weight<n[w[j-1]].weight then
				begin
					erms:= mc[az1-1].ww[0];
				end;







			while j>1 do

				begin

					if bbb[ab-1]=false then

						begin

							bbb[ab-1]:=true;

							t2:=t2+1;
							Setlength(k,t2);
							k[t2-1]:=length(mc[az1-1].ww);

						end;

          az1:=length(mc);
          az2:=length(mc[az1-1].ww);

          if mc[az1-1].ww[az2-1]=w[j-1] then

						begin
							j:=j-1;
					  end;

          if erms<>0 then
            begin

              if w[j-1]=erms then
                j:=j-1;

            end;


					j:=j-1;


          if mc[az1-1].ww[az2-1]=w[j] then

						begin
							j:=j-1;
					  end;

          if erms<>0 then
            begin

              if w[j]=erms then
                j:=j-1;

            end;

					ab:=ab+1;   //зашли
					t:=t+1;
					Setlength(bbb,ab);
					bbb[ab-1]:=false; // на случай, когда снова входим в рекурсию


					rrint(j, max);



					while(n[w[j]].weight=n[w[j-1]].weight) do

						j:=j-1;




					ab:=ab-1; //вышли
					t:=t-1;
					Setlength(bbb,ab);


					if k[t2-1]>=1 then

						Setlength(mc, az1+1);


					for i:=1 to k[t2-1] do

						begin

							if erms<>0 then
								begin
							
									Setlength(mc[az1].ww, i);

									mc[az1].ww[i-1]:=mc[az1-1].ww[i-1];
								end
							
							else
							
								begin
								
									Setlength(mc[az1].ww, i);

									mc[az1].ww[i-1]:=mc[az1-1].ww[i-1];
																		
									
								end;
						end;

						

						


					if j=1 then

						begin

							bbb[ab-1]:=false;

							t2:=t2-1;
							Setlength(k,t2);

						end;

				end;



			j:=j-1; //намерены записать самый легкий элемент (он точно влазит) проверяем наличие повтора

			az1:=length(mc);
			c:=-1;
			z:=0;

			for i:=0 to az1-2 do

				begin

					if mc[az1-1].ww[0]=mc[i].ww[0] then

						begin

							c:=i;
							break;

						end;

				end;

			if c=-1 then

				rrint(j,max)

			else

				begin

					for i:=c to az1-2 do

						begin

							a:=length(mc[i].ww)-1;

							if (mc[i].ww[0]=mc[az1-1].ww[0])and(mc[i].ww[a]=w[j]) then 	//совпали начала и концы

								if((length(mc[az1-1].ww)+2)=length(mc[i].ww)) then

									begin

										z:=z+1;
										break;

									end;

						end;

					if z=0 then

						rrint(j,max)

					else

						begin

							Setlength(mc,az1-1);
							az1:=length(mc);

						end;

				end;


			if not bbb[ab-1-t] then
			bb:=true;



		end

	else

	begin



	mc[az1-1].r:=true;

	if mc[az1-1].ww[0]=w[length(w)-1] then bb:=true;//для случая когда самый тяжелый элемент занимает сумку без остатка



	end;



	if bb then

	begin


	for i:=length(w)-1 downto 0 do
	if mc[az1-1].ww[0]=w[i] then
	begin
	indx:=i;
	break;
	end;

	while n[w[indx]].weight=n[w[indx-1]].weight do
	indx:=indx-1;

	indx:=indx-1;


	if indx<>0 then
	rrint(indx,maxw);

	end;

end;




procedure lab42pr();
var

	i,j,l,k,kke,jkke:integer;
	kkstr1,kkstr2,kkstr3:ansistring;
	f3:TStringList;
	b:boolean;

begin

  dt1:=GetTickCount;

  ab:=1;
  t:=0;
  t2:=0;
  Setlength(bbb,ab);
  bbb[ab-1]:=False;


	Form1.Memo5.Clear;
	form1.Memo5.Lines.LoadFromFile('lab42.txt');
	maxw:=strtoint(Form1.Edit6.Text);

		if form1.Memo5.Lines.Count=0 then
		begin
			randomize;
			j:=Random(70);

			if j<65 then j:=65;

			f3:=TStringList.Create;
			f3.Add(inttostr(j));
			for i:=0 to j-1 do f3.Add(inttostr(random(200)+1)+', '+inttostr(random(50)+1));
			f3.SaveToFile('lab42.txt');
			f3.Free;

			form1.Memo5.Lines.LoadFromFile('lab42.txt');
		end;

		
		
    j:=form1.Memo5.Lines.Count;
    SetLength(n,j-1);

    for i:=1 to j-1 do
    begin
       n[i-1].cost:=strtoint(copy(Form1.Memo5.Lines.Strings[i],1,Pos(',',Form1.Memo5.Lines.Strings[i])-1));
       n[i-1].weight:=strtoint(copy(Form1.Memo5.Lines.Strings[i],Pos(',',Form1.Memo5.Lines.Strings[i])+2,Length(form1.Memo5.Lines.Strings[i])));
    end;

      j:=0;

 ////////////////////////////// отсечение
    for i:=0 to Length(n)-1 do
    begin
      if n[i].weight<=maxw then
      begin
        j:=j+1;
        SetLength(w,j);
        w[j-1]:=i;
      end;

    end;

    l:=Length(w)-1;

 if j>0 then		//если есть хоть одно подходящее число и ищем max по стоимости
	begin


	//сортируем по убыванию подходящие элементы "вес"

		jkke:=0;
		c:=0;
		kke:=n[w[0]].weight;

			   for j:=0 to l do
			   for i:=j to l do
			   begin

				  if n[w[i]].weight>kke then

					  begin

						  kke:=n[w[i]].weight;			//запоминаем max элемент и затем
						  c:=i;

					  end;

						  if i=l then

							  begin
								  d:=w[c];				// и затем его записываем..
								  w[c]:=w[j];			// и так все подходящие элементы...
								  w[j]:=d;
								  kke:=0;
							  end;
          if jkke<n[w[i]].cost then
          jkke:=n[w[i]].cost+10;

				end;







    for i:=0 to  trunc((l+1)/2)-1 do		// нам нужно по возрастанию

    begin
     w[i]:=w[i]+w[l-i];
     w[l-i]:=w[i]-w[l-i];
     w[i]:=w[i]-w[l-i];
    end;
	  
	  a:=0;
	  z:=0;
	  k:=0;
	  d:=0;
	  c:=0;
	  kke:=0;
	  j:=0;
	  ikke:=-1;
	  b:=true;				//как бы еще не нашли


	for i:=1 to l do  //ищем равные по весу элементы чтобы max цена встретилась раньше
		begin

    
     
			if (n[w[i-1]].weight=n[w[i]].weight) then

				begin
			
					if b then 			//допустим уже нашли такой элемент
					
						begin

							j:=i;
							
							while(n[w[j-1]].weight=n[w[j]].weight) do
							
								begin
								
									if b then 
									
										begin 
											b:=false; 
											c:=i-1; 
										end;
										
										d:=j;
                    if (j<length(w)-1) then
                      j:=j+1
                    else   break;  //защита от выхода за пределы массив (актуально для последних возможных элементов)
                    
                end;

							begin
								
								j:=d-c;	//начиная с 'c'-ого элемента j штук имеют одинаковый вес. отсортируем их по возрастанию стоимости.
								kke:=jkke;
									
								for k:=c to j+c-1 do
								for z:=k to j+c do

									begin

										if n[w[z]].cost<kke then

											begin
												kke:=n[w[z]].cost;
												ikke:=z;
											end;

										if z=j+c then

											begin
												a:=w[ikke];
												w[ikke]:=w[k];
												w[k]:=a;
												kke:=jkke;
												ikke:=-1;
											end;

									end;
													
													
							end;
											
											
						end;			
				end
				
			else
			if (b=false) then b:=true;
		
		end;

	b:=false;
	d:=0;
	
	for i:=0 to l do
		if (maxw>d) then	//еще влазит?
		begin
			d:=n[w[i]].weight+d;
			if (i=l) then begin b:=true; end;
		end else
        break;

   i:=l;
	 if b then

		begin

			 ShowMessage('влезло все (что вошло)');

		end
 
	else

		begin //самый главный расчет

			rrint(l,maxw);
		



    a:=0;
    z:=0;
    c:=0;
    d:=0;
    az1:=0;
    az2:=0;
    ikke:=0;


    z:=length(mc);
    for a:=0 to z-1 do
      begin

        d:=length(mc[a].ww);

        for c:=0 to d-1 do

          begin
            az1:=az1+n[mc[a].ww[c]].cost;
          end;

        if az2<az1 then
          begin
            az2:=az1;
            ikke:=a;
            az1:=0;
          end
        else

          begin
            az1:=0;
          end;

      end;


      dt2:=GetTickCount;

      d:=length(mc[ikke].ww);
      for c:=0 to d-1 do

          begin
            kkstr3:=kkstr3+inttostr(n[mc[ikke].ww[c]].cost)+' ('+inttostr(n[mc[ikke].ww[c]].weight)+'), ';
          end;




			for i:=0 to l do
				begin

					if Length(IntToStr(n[w[i]].weight))=1 then
						kkstr1:=kkstr1+'  '+IntToStr(n[w[i]].weight)+'  |'
					else
						kkstr1:=kkstr1+IntToStr(n[w[i]].weight)+'  |';


					if Length(IntToStr(n[w[i]].cost))=1 then
						kkstr1:=kkstr1+'     '+IntToStr(n[w[i]].cost)+#13#10;
					if Length(IntToStr(n[w[i]].cost))=2 then
						kkstr1:=kkstr1+'   '+IntToStr(n[w[i]].cost)+#13#10;
					if Length(IntToStr(n[w[i]].cost))=3 then
						kkstr1:=kkstr1+' '+IntToStr(n[w[i]].cost)+#13#10;

						///////////////////////////////////////////

					if Length(IntToStr(n[w[i]].weight))=1 then
							kkstr2:=kkstr2+'  '+IntToStr(n[w[i]].weight)+' |'
					else
							kkstr2:=kkstr2+' '+IntToStr(n[w[i]].weight)+' |';


					if Length(IntToStr(n[w[i]].cost))=1 then
						kkstr2:=kkstr2+'   '+IntToStr(n[w[i]].cost)+#13#10;
					if Length(IntToStr(n[w[i]].cost))=2 then
						kkstr2:=kkstr2+'  '+IntToStr(n[w[i]].cost)+#13#10;
					if Length(IntToStr(n[w[i]].cost))=3 then
						kkstr2:=kkstr2+' '+IntToStr(n[w[i]].cost)+#13#10;

					  

				end;

			form1.Memo5.Lines.Add(#13#10);
			form1.Memo5.Lines.Add(kkstr2);
			if Form1.CheckBox1.Checked then showmessage('вес стоимость:'+#13#10+kkstr1);
      form1.Memo5.Lines.Add('Максимальная стоимость элементов:'+#13#10+inttostr(az2)+#13#10+'Сами элементы:'+#13#10+kkstr3+#13#10+#13#10+IntToStr(dt2-dt1)+' в мс');

	end;
	
 end
		else ShowMessage('Слишком маленький рюкзак... (нет подходящих предметов)');			//введенный максимальный вес для рюкзака меньше чем самый легкий предмет

   end;
end.
