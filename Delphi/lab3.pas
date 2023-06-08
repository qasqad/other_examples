unit lab3;

interface
uses Unit1, Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, ComCtrls, ShellAPI, ExtCtrls, Math;

  procedure lab3pr;

var

mass:array of integer;

implementation

function indexconvert(a:integer;b:boolean):integer;
begin
if b then //от последнего до первого
begin
  if (a>0)and((a mod 2)=0) then Result:=(a-2) div 2
  else Result:=(a-1) div 2;
end else

begin

  if (Length(mass)-1)<(2*a+2) then
  begin

      if (Length(mass)-1)<(2*a+1) then
          begin

              Result:=a;

          end

          else

          begin
              Result:=2*a+1;
          end;

  end

  else

  begin

      if (mass[2*a+1]>=mass[2*a+2]) then Result:=2*a+1      //если равны, то мен€ть с левым

      else Result:=2*a+2;

  end;

end;



end;


procedure lab3pr();
var
maxmass:array of integer;
lmas,mmas,i,c1,c2,t1,t2:integer;
begin
lmas:=0;
mmas:=0;
Form1.Memo4.Lines.LoadFromFile('lab3.txt');

for i:=0 to Form1.Memo4.Lines.Count-1 do
begin
  if Pos('+',Form1.Memo4.Lines.Strings[i])=1 then
    begin
      //ShowMessage('надо добавить '+Copy(Form1.Memo4.Lines.Strings[i],2,Length(Form1.Memo4.Lines.Strings[i])-1));
      lmas:=lmas+1;
      SetLength(mass,lmas);
      mass[lmas-1]:=strtoint(Copy(Form1.Memo4.Lines.Strings[i],2,Length(Form1.Memo4.Lines.Strings[i])-1));

          if Length(mass)>1 then
             begin
               t1:=lmas-1;
               t2:=indexconvert(t1,true);

               if mass[t1]>mass[t2] then

                  begin

                      c1:=mass[t1];
                      mass[t1]:=mass[t2];
                      mass[t2]:=c1;

                  end;



               while t2<>0 do
               begin
                   t1:=t2;
                   c2:=indexconvert(t2,true);
                   t2:=c2;

                   if mass[t1]>mass[t2] then

                      begin

                          c1:=mass[t1];
                          mass[t1]:=mass[t2];
                          mass[t2]:=c1;

                      end;




               end;


             end;

      Continue;
    end;
  if Pos('-',Form1.Memo4.Lines.Strings[i])=1 then
    begin
      //ShowMessage('надо вычесть максимальный элемент');

          lmas:=length(mass);
         // ShowMessage(inttostr(mass[0])+' - максимальный элемент');

          c1:=mass[lmas-1];

          mmas:=mmas+1;
          Setlength(maxmass,mmas);
		      maxmass[mmas-1]:=mass[0];

          SetLength(mass,lmas-1);

          lmas:=lmas-1;

          if (lmas)>0 then

              begin



               mass[0]:=c1;

               t1:=0;
               t2:=indexconvert(t1,false);

               if mass[t1]<mass[t2] then

                  begin

                      c1:=mass[t1];
                      mass[t1]:=mass[t2];
                      mass[t2]:=c1;

                  end
                  else t2:=0;



               while t2<>0 do
               begin
                   t1:=t2;
                   c2:=indexconvert(t2,false);
                   t2:=c2;

                   if mass[t1]<mass[t2] then

                      begin

                          c1:=mass[t1];
                          mass[t1]:=mass[t2];
                          mass[t2]:=c1;

                      end;

                    if t1=t2 then t2:=0;


               end;



              end;




      Continue;
    end;
end;

for i:=0 to mmas-1 do
begin
  if i=0 then form1.Memo4.Lines.Add('ћаксимальные элементы:'+#13#10);
  Form1.Memo4.Lines.Text:=Form1.Memo4.Lines.Text+IntToStr(maxmass[i])+' ';
end;

end;
end.
