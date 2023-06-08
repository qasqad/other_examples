unit lab5;

interface
uses Unit1, Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, ComCtrls, ShellAPI, ExtCtrls, Math;

  procedure lab5pr;

implementation


type
trec3=record
fm,tel:string;
end;

type
trec4=record
fm,tel:array of string;
end;


function hsh(str:string):Int64;
var
ii,a,b:Integer;
jj:int64;
begin

  case str[1] of

  chr(224)..chr(255):

    begin
        jj:=0;
        
      for ii:=1 to length(str) do
        begin
          a:=length(str)-(1+(ii-1));
          b:=ord(str[ii])-224;
          jj:=jj+trunc(power(32,a))*(b);

        end;

        jj:=jj mod 301;

        Result:=jj;

    end;

end;
end;

procedure lab5pr();
var
f:array of trec3;
p:array of trec4;
i,j,ip,jp:Integer;
begin

  j:=Form1.Memo6.Lines.Count;

  Setlength(f,j);
  jp:=-1;

  for i:=0 to j-1 do

  begin
    f[i].fm:=copy(Form1.Memo6.Lines.Strings[i],1,Pos(',',Form1.Memo6.Lines.Strings[i])-1);
    f[i].tel:=copy(form1.Memo6.Lines.Strings[i],Pos(',',Form1.Memo6.Lines.Strings[i])+2,length(Form1.Memo6.Lines.Strings[i]));
  end;


  for i:=0 to j-1 do

    begin
      ip:=hsh(f[i].fm);

      if jp<ip then
        jp:=ip;
    end;



  SetLength(p,jp+1);

  for i:=0 to j-1 do

    begin

       ip:=hsh(f[i].fm);
       jp:=length(p[ip].fm);


       SetLength(p[ip].fm,jp+1);
       SetLength(p[ip].tel,jp+1);

       p[ip].fm[jp]:=f[i].fm;
       p[ip].tel[jp]:=f[i].tel;



    end;

  ip:=hsh(form1.Edit7.Text);
  if ip>length(p) then
    begin
  ShowMessage('нет элемента');
    end
  else
    begin
  jp:=length(p[ip].fm);

  if jp>1 then

    begin

      for i:=0 to ip-1 do

        if (p[ip].fm[i]=form1.Edit7.text) then

          ShowMessage(p[ip].fm[0]+' - '+p[ip].tel[0]);


    end

  else
    begin

    if jp=0 then
    ShowMessage('нет элемента');

    if jp=1 then
    ShowMessage(p[ip].fm[0]+' - '+p[ip].tel[0]);

    end;
    end;

end;

end.
