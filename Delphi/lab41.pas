unit lab41;

interface
uses Unit1, Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, ComCtrls, ShellAPI, ExtCtrls, Math;

 procedure lab41pr;

implementation


function znak(i:byte):string;
begin
      case i of
        1: znak:='+';
        2: znak:='-';
        3: znak:='';
      end;
end;

procedure lab41pr();
var
inp:string;
i1,i2,i3,i4,i5,i6,i7,i8,i,j : byte;
mt:array of integer;
t:integer;
label lable1;
begin
    i:=0;
    j:=1;
    t:=0;
    SetLength(mt,j);
    for i1:=1 to 3 do begin
    for i2:=1 to 3 do begin
    for i3:=1 to 3 do begin
    for i4:=1 to 3 do begin
    for i5:=1 to 3 do begin
    for i6:=1 to 3 do begin
    for i7:=1 to 3 do begin
    for i8:=1 to 3 do begin
    begin
    
	inp:='1'+znak(i1)+'2'+znak(i2)+'3'+znak(i3)+'4'+znak(i4)+'5'+znak(i5)+'6'+znak(i6)+'7'+znak(i7)+'8'+znak(i8)+'9';
      for i:=1 to Length(inp) do
      begin
          if (inp[i]='+')or(inp[i]='-') then
           begin
             j:=j+1;
             SetLength(mt,j);
           end else
             mt[j-1]:=strtoint(inttostr(mt[j-1])+inp[i]);
      end;
     
	 j:=0;
      for i:=1 to Length(inp) do
      begin
        if (inp[i]='+') then
          begin
            j:=j+1;
            if j=1 then t:=mt[j-1]+mt[j] else t:=t+mt[j];
          end;
        if (inp[i]='-') then
          begin
            j:=j+1;
            if j=1 then t:=mt[j-1]-mt[j] else t:=t-mt[j];
          end;
      end;
    
	if t=strtoint(Form1.Edit5.Text) then
    begin
      form1.StaticText6.Caption:=inp;
      goto lable1;
	end else

    begin
    i:=0;
    j:=1;
    t:=0;
    SetLength(mt,j);
    mt[0]:=0;
    end;
    
	end;

	end;

	end;


	end;

	end;

	end;

	end;

	end;

	end;
lable1:
	end;

end.
