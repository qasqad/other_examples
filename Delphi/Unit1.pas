unit Unit1;

interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, ComCtrls, ShellAPI, ExtCtrls, Math, Grids;

type
  TForm1 = class(TForm)
    PageControl1: TPageControl;
    TabSheet1: TTabSheet;
    TabSheet2: TTabSheet;
    TabSheet3: TTabSheet;
    TabSheet4: TTabSheet;
    TabSheet5: TTabSheet;
    Button1: TButton;
    Button2: TButton;
    Button3: TButton;
    Button4: TButton;
    Button5: TButton;
    StaticText0: TStaticText;
    Memo2: TMemo;
    Memo3: TMemo;
    StaticText1: TStaticText;
    StaticText2: TStaticText;
    Memo1: TMemo;
    Button6: TButton;
    Edit1: TEdit;
    Button7: TButton;
    Button8: TButton;
    Button9: TButton;
    Button10: TButton;
    Edit2: TEdit;
    Edit3: TEdit;
    Edit4: TEdit;
    StaticText3: TStaticText;
    StaticText4: TStaticText;
    StaticText5: TStaticText;
    Memo4: TMemo;
    Edit5: TEdit;
    StaticText6: TStaticText;
    Button11: TButton;
    GroupBox1: TGroupBox;
    GroupBox2: TGroupBox;
    Memo5: TMemo;
    Edit6: TEdit;
    CheckBox1: TCheckBox;
    Memo6: TMemo;
    Edit7: TEdit;
    StaticText7: TStaticText;
    procedure PageControl1Change(Sender: TObject);
    procedure Button1Click(Sender: TObject);
    procedure Button2Click(Sender: TObject);
    procedure Button3Click(Sender: TObject);
    procedure Button4Click(Sender: TObject);
    procedure Button5Click(Sender: TObject);
    procedure Edit1MouseDown(Sender: TObject; Button: TMouseButton;
      Shift: TShiftState; X, Y: Integer);
    procedure Button6Click(Sender: TObject);
    procedure Button7Click(Sender: TObject);
    procedure Button8Click(Sender: TObject);
    procedure Button9Click(Sender: TObject);
    procedure Button10Click(Sender: TObject);
    procedure FormCreate(Sender: TObject);
    procedure Edit2KeyPress(Sender: TObject; var Key: Char);
    procedure Edit5MouseDown(Sender: TObject; Button: TMouseButton;
      Shift: TShiftState; X, Y: Integer);
    procedure Button11Click(Sender: TObject);
    procedure Edit6MouseDown(Sender: TObject; Button: TMouseButton;
      Shift: TShiftState; X, Y: Integer);
    procedure Edit7MouseDown(Sender: TObject; Button: TMouseButton;
      Shift: TShiftState; X, Y: Integer);



  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;


implementation

 uses lab1, lab2, lab3, lab41, lab42, lab5;
{$R *.dfm}

procedure TForm1.Button6Click(Sender: TObject);
begin
  lab1pr;
end;

procedure TForm1.Button7Click(Sender: TObject);
begin
lab2pr;
end;

procedure TForm1.Button8Click(Sender: TObject);
begin
 lab3pr;
end;

procedure TForm1.Button9Click(Sender: TObject);
begin
 lab41pr;
end;

procedure TForm1.Button11Click(Sender: TObject);
begin
 lab42pr;
end;

procedure TForm1.Button10Click(Sender: TObject);
begin

  lab5pr;
end;




procedure TForm1.PageControl1Change(Sender: TObject);
begin
  if PageControl1.ActivePageIndex=0 then
    begin
      Caption:='Алгоритмы и структуры данных. Семестр 1. | Внешняя сортировка файла.';
    end;

  if PageControl1.ActivePageIndex=1 then
    begin
      Caption:='Алгоритмы и структуры данных. Семестр 1. | Польская инверсная запись.';
    end;

  if PageControl1.ActivePageIndex=2 then
    begin
      Caption:='Алгоритмы и структуры данных. Семестр 1. | Очередь с приоритетами.';
    end;

  if PageControl1.ActivePageIndex=3 then
    begin
      Caption:='Алгоритмы и структуры данных. Семестр 1. | Перебор с возвратом. Метод ветвей и границ.';
    end;

  if PageControl1.ActivePageIndex=4 then
    begin
       Form1.Memo6.Clear;
	     form1.Memo6.Lines.LoadFromFile('lab5.txt');
      Caption:='Алгоритмы и структуры данных. Семестр 1. | Хэширование.';
    end;


end;

procedure TForm1.Button1Click(Sender: TObject);
begin
   ShellExecute(Handle,'open','лаба1.pdf', nil, nil, SW_SHOWNORMAL);
end;

procedure TForm1.Button2Click(Sender: TObject);
begin
   ShellExecute(Handle,'open','лаба2.pdf', nil, nil, SW_SHOWNORMAL);
end;

procedure TForm1.Button3Click(Sender: TObject);
begin
   ShellExecute(Handle,'open','лаба3.pdf', nil, nil, SW_SHOWNORMAL);
end;

procedure TForm1.Button4Click(Sender: TObject);
begin
   ShellExecute(Handle,'open','лаба4.pdf', nil, nil, SW_SHOWNORMAL);
end;

procedure TForm1.Button5Click(Sender: TObject);
begin
   ShellExecute(Handle,'open','лаба5.pdf', nil, nil, SW_SHOWNORMAL);
end;



procedure TForm1.Edit1MouseDown(Sender: TObject; Button: TMouseButton;
  Shift: TShiftState; X, Y: Integer);
begin
  edit1.Clear;
end;

procedure TForm1.FormCreate(Sender: TObject);
begin
PageControl1.ActivePage:=TabSheet1;
end;

procedure TForm1.Edit2KeyPress(Sender: TObject; var Key: Char);
begin
case key of
'0'..'9',#8,#40..#43,#45,#47:;

else key:=chr(0);
end;
end;
procedure TForm1.Edit5MouseDown(Sender: TObject; Button: TMouseButton;
  Shift: TShiftState; X, Y: Integer);
begin
    Edit5.Clear;
end;




procedure TForm1.Edit6MouseDown(Sender: TObject; Button: TMouseButton;
  Shift: TShiftState; X, Y: Integer);
begin
    Edit6.Clear;
end;


procedure TForm1.Edit7MouseDown(Sender: TObject; Button: TMouseButton;
  Shift: TShiftState; X, Y: Integer);
begin
  Edit7.Clear;
end;

end.
