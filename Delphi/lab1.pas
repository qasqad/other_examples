unit lab1;

interface

uses Unit1, Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, ComCtrls, ShellAPI, ExtCtrls, Math;

  procedure lab1pr;

implementation



procedure lab1pr();
var
  i,j,di,cnt,povtor,edit,mem2index,mem3index:integer;
  mem1,mem2,mem3:array of integer;		//кол-во элементов х кол-во итераций; осн+резерв дл€ увелич размера
  uporyad,thrd:boolean;
  f1,f2:TStringList;
begin
  form1.Memo1.Clear;
	form1.Memo2.Clear;
	form1.Memo3.Clear;
	povtor:=1;
  edit:=strtoint(form1.Edit1.Text);
	uporyad:=false;
  thrd:=false;
  Randomize;
  SetLength(mem1,edit);
	SetLength(mem2,edit);
	SetLength(mem3,edit);
	f1:=TStringList.Create;
	f2:=TStringList.Create;

  for i:=0 to edit-1 do
	begin
		di:=Random(255)+1;
		f1.Add(inttostr(di));
	end;
  
  f1.SaveToFile('lab1.txt');
  f2.LoadFromFile('lab1.txt');
  
  for i:=0 to edit-1 do mem1[i]:=strtoint(f2.Strings[i]);

  
  while (uporyad=false) do
begin
  di:=0;
	mem2index:=1;          
	mem3index:=0;
  thrd:=false;

  

 for i:=0 to edit-1 do
 begin
   mem2[i]:=0;
   mem3[i]:=0;
 end;
	///////разбиение на mem2 и mem3
	for i:=0 to edit-2 do
		begin
          if (mem1[i]>mem1[i+1]) then
          begin
          if(thrd=false) then
          begin
              mem3[mem3index]:=mem1[i+1];
              mem3index:=mem3index+1;
              thrd:=true;
          end 
		  else
          begin
              mem2[mem2index]:=mem1[i+1];
              mem2index:=mem2index+1;
              thrd:=false;
          end;
          end 
		  else
          begin
              if(thrd=true) then    //если следующий меньше
          begin
              mem3[mem3index]:=mem1[i+1];
              mem3index:=mem3index+1;
          end 
		  else
          begin
              mem2[mem2index]:=mem1[i+1];
              mem2index:=mem2index+1;

          end;
          end;


          if (i=edit-2) and (mem3index=0) then
            begin
              //ShowMessage(inttostr(povtor));
              uporyad:=true;

            end;
		end;

    mem2[0]:=mem1[0];
	///////

	//////¬ывод
	      for i:=0 to edit-1 do
      begin
        if i=0 then form1.Memo1.Text:=form1.Memo1.Text+inttostr(povtor)+') ';
		        form1.Memo1.Text:=form1.Memo1.Text+inttostr(mem1[i])+' ';

        if i=(edit-1) then
          begin
            cnt:=form1.memo1.Lines.Count;
            form1.memo1.Lines.Insert(cnt,#13#10);
          end;
      end;

		for i:=0 to edit-1 do
      begin
      if mem2[i]<>0 then
        begin
          if i=0 then form1.Memo2.Text:=form1.Memo2.Text+inttostr(povtor)+') ';
			        form1.Memo2.Text:=form1.Memo2.Text+inttostr(mem2[i])+' ';
        end;

          if i=(edit-1) then
            begin
              cnt:=form1.memo2.Lines.Count;
              form1.memo2.Lines.Insert(cnt,#13#10);
            end;
        end;

		for i:=0 to edit-1 do
     begin
      if mem3[i]<>0 then
        begin
          if i=0 then form1.Memo3.Text:=form1.Memo3.Text+inttostr(povtor)+') ';
			        form1.Memo3.Text:=form1.Memo3.Text+inttostr(mem3[i])+' ';
        end;
          if i=(edit-1) then
            begin
              cnt:=form1.memo3.Lines.Count;
              form1.memo3.Lines.Insert(cnt,#13#10);
            end;
        end;
	//////

    for i:=0 to (edit-1) do mem1[i]:=0;

	
	///////—ли€ние
 if uporyad=false then
  begin
povtor:=povtor+1;
  mem2index:=0;
  mem3index:=0;

	for i:=0 to edit-1 do
      begin
         if (mem2[mem2index]<>0) and (mem3[mem3index]<>0) then
            begin
              if mem2[mem2index]<=mem3[mem3index] then
                  begin
                    mem1[i]:=mem2[mem2index];
                    mem2index:=mem2index+1;
                    
                  end else
                  begin
                    mem1[i]:=mem3[mem3index];
                    mem3index:=mem3index+1;
                  end;
            end
			else

            begin

                if (mem2[mem2index]<>0) then
                 begin
                  mem1[i]:=mem2[mem2index];
                  mem2index:=mem2index+1;
                 end;
                if (mem3[mem3index]<>0) then
                 begin
                  mem1[i]:=mem3[mem3index];
                  mem3index:=mem3index+1;
                 end;
                if mem1[edit-1]<>0 then break;
            end;
      end;


 end;
    ///////



end;

f1.Free;
f2.Free;
end;

end.
