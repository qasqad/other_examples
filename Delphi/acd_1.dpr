program acd_1;

uses
  Forms,
  Unit1 in 'Unit1.pas' {Form1},
  lab1 in 'lab1.pas',
  lab2 in 'lab2.pas',
  lab3 in 'lab3.pas',
  lab41 in 'lab41.pas',
  lab5 in 'lab5.pas',
  lab42 in 'lab42.pas';

{$R *.res}

begin
  Application.Initialize;
  Application.Title := 'алг & стр';
  Application.CreateForm(TForm1, Form1);
  Application.Run;
end.
