unit lab2;

interface

uses Unit1, Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, ComCtrls, ShellAPI, ExtCtrls, Math;

  procedure lab2pr;

implementation


procedure lab2pr();
var
stek,outputstr,inputstr:ansistring;
i,istek,jstek,kstek,mstek,ioutputstr:byte;
outmsar:array of integer;
outms:array of ansistring;
numblenght:byte;

begin

  SetLength(inputstr,Length(Form1.Edit2.Text));
    inputstr:=Form1.Edit2.Text;
  SetLength(stek,Length(Form1.Edit2.Text));
  SetLength(outputstr,Length(Form1.Edit2.Text));


  istek:=1;
  jstek:=1;
  kstek:=1;
  mstek:=1;
  ioutputstr:=1;


  for i:=1 to Length(inputstr) do
  begin

   case inputstr[i] of

    chr(48)..chr(57):                         //Число
    begin
      outputstr[ioutputstr]:=inputstr[i];
      ioutputstr:=ioutputstr+1;
    end;

    chr(42),chr(43),chr(45),chr(47):          //Знак операции
    begin

         if (stek[istek-1]=chr(42))or(stek[istek-1]=chr(43))or(stek[istek-1]=chr(45))or(stek[istek-1]=chr(47)) then   //в стеке знак операции
            begin
              case inputstr[i] of

              chr(42),chr(47):       //*,/
               begin
                if stek[istek-1]=chr(42) then   //*
                begin

                    outputstr[ioutputstr]:=stek[istek-1];
                    ioutputstr:=ioutputstr+1;
                    istek:=istek-1;
                    stek[istek]:=inputstr[i];
                    istek:=istek+1;

                    continue;
                end;

                if stek[istek-1]=chr(43) then   //+
                begin
                    stek[istek]:=inputstr[i];
                    istek:=istek+1;

                    continue;
                end;

                if stek[istek-1]=chr(45) then   //-
                begin
                   stek[istek]:=inputstr[i];
                   istek:=istek+1;

                   continue;
                end;

                if stek[istek-1]=chr(47) then   ///
                begin
                    outputstr[ioutputstr]:=stek[istek-1];
                    ioutputstr:=ioutputstr+1;
                    istek:=istek-1;
                    stek[istek]:=inputstr[i];
                    istek:=istek+1;

                end;
            end;
              chr(43),chr(45):       //+,-

		      	begin

                    outputstr[ioutputstr]:=stek[istek-1];
                    ioutputstr:=ioutputstr+1;
                    istek:=istek-1;
                    stek[istek]:=inputstr[i];
                    istek:=istek+1;


 	      		end;

			  end;
            end else
		begin
			stek[istek]:=inputstr[i];
			istek:=istek+1;

		end;

    end;

    chr(40):                                  //Открывающаяся скобка
    begin
      stek[istek]:=inputstr[i];
      istek:=istek+1;
    end;

    chr(41):                                  //Закрывающаяся скобка
    begin
       kstek:=istek-1;
       for jstek:=kstek downto 1 do
       begin
          if stek[jstek]=chr(40) then
            begin
              for mstek:=kstek downto jstek+1 do

              begin
              outputstr[ioutputstr]:=stek[mstek];
              ioutputstr:=ioutputstr+1;
              istek:=istek-1;

              if mstek=(jstek+1) then istek:=istek-1;
              
              end;
              break;

            end;
       end;
    end;

  end;
end;

  if istek>1 then
  begin
     mstek:=istek-1;
     kstek:=istek-1;
  for jstek:=kstek downto 1 do
  begin

  if stek[jstek]<>chr(40) then
    begin

    outputstr[ioutputstr]:=stek[jstek];
    mstek:=mstek-1;
    ioutputstr:=ioutputstr+1;
  end;
  end;
  end;
  istek:=mstek;
  
	for i:=1 to ioutputstr-1 do
  Form1.Edit3.Text:=Form1.Edit3.Text+outputstr[i];

  ////////////////////////////////////////////////////////////


  numblenght:=0;

   for i:=1 to Length(inputstr) do                              //для извлечения чисел из строки
  begin
		if (inputstr[i]>=chr(48))and(inputstr[i]<=chr(57)) then
		begin
				if (i<>1) and ((inputstr[i-1]>=chr(48))and(inputstr[i-1]<=chr(57))) then outms[numblenght]:=outms[numblenght]+inputstr[i]
				else
					begin
						numblenght:=numblenght+1;
						SetLength(outms, numblenght+1);
						outms[numblenght]:=inputstr[i];
					end;
		end;
    if i=Length(inputstr) then outms[0]:=inttostr(numblenght);
end;



 //обрабатываем ОПН
 numblenght:=1;
 jstek:=0;
 mstek:=1;



 for i:=1 to ioutputstr-1 do
   begin

     case outputstr[i] of

     chr(42),chr(43),chr(45),chr(47):

     begin

        while (jstek<>(i-1)) do
          begin
              jstek:=jstek+Length(outms[mstek]);                    //длина строк элементов outms для того, чтобы знать, куда вставить *+-/
              mstek:=mstek+1;                                       //порядковый номер в массиве outms элемента, вместо которго надо вставить
          end;

     begin

       SetLength(outms,strtoint(outms[0])+2);
       outms[0]:=inttostr(strtoint(outms[0])+1);
       for numblenght:=0 to (strtoint(outms[0])-mstek) do

          outms[strtoint(outms[0])-numblenght]:=outms[strtoint(outms[0])-numblenght-1];

       outms[mstek]:=outputstr[i];

     end;
     jstek:=0;
     mstek:=1;


     end;
     end;
   end;


   istek:=0;
   mstek:=1;


   for i:=1 to strtoint(outms[0]) do
   if (outms[i]=chr(42)) or (outms[i]=chr(43)) or (outms[i]=chr(45)) or (outms[i]=chr(47)) then
   istek:=istek+1;


   while istek>0 do
   for i:=1 to strtoint(outms[0]) do
 begin
     if (outms[i]=chr(42)) or (outms[i]=chr(43)) or (outms[i]=chr(45)) or (outms[i]=chr(47)) then
   begin
      if outms[i]='*' then
        begin
          outmsar[mstek-3]:=outmsar[mstek-3]*outmsar[mstek-2];
          mstek:=mstek-1;

        end

      else if outms[i]='+' then
        begin
          outmsar[mstek-3]:=outmsar[mstek-3]+outmsar[mstek-2];
          mstek:=mstek-1;

        end

      else if outms[i]='-' then
        begin
          outmsar[mstek-3]:=outmsar[mstek-3]-(outmsar[mstek-2]);
          mstek:=mstek-1;

        end

      else if outms[i]='/' then
        begin
          outmsar[mstek-3]:=outmsar[mstek-3] div outmsar[mstek-2];
          mstek:=mstek-1;
          
        end;
      istek:=istek-1;
   end else
   begin
     SetLength(outmsar,mstek);
     outmsar[mstek-1]:=StrToInt(outms[i]);
     mstek:=mstek+1;
   end;
 end;


    form1.Edit4.Text:=IntToStr(outmsar[0]);
    end;

end.
