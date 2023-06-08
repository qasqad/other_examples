object Form1: TForm1
  Left = 226
  Top = 156
  Width = 834
  Height = 487
  BorderStyle = bsSizeToolWin
  Caption = 
    #1040#1083#1075#1086#1088#1080#1090#1084#1099' '#1080' '#1089#1090#1088#1091#1082#1090#1091#1088#1099' '#1076#1072#1085#1085#1099#1093'. '#1057#1077#1084#1077#1089#1090#1088' 1. | '#1042#1085#1077#1096#1085#1103#1103' '#1089#1086#1088#1090#1080#1088#1086#1074#1082#1072' '#1092#1072 +
    #1081#1083#1072'.'
  Color = clBtnFace
  Font.Charset = RUSSIAN_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'Courier New'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 16
  object PageControl1: TPageControl
    Left = 0
    Top = 0
    Width = 826
    Height = 453
    ActivePage = TabSheet4
    Align = alClient
    MultiLine = True
    ScrollOpposite = True
    TabOrder = 0
    OnChange = PageControl1Change
    object TabSheet1: TTabSheet
      Caption = #1083#1072#1073#1072'1'
      object Button1: TButton
        Left = 8
        Top = 384
        Width = 113
        Height = 25
        Caption = #1086#1090#1082#1088#1099#1090#1100' '#1083#1072#1073#1091
        TabOrder = 0
        OnClick = Button1Click
      end
      object StaticText0: TStaticText
        Left = 48
        Top = 16
        Width = 12
        Height = 20
        Caption = 'f'
        TabOrder = 1
      end
      object Memo2: TMemo
        Left = 464
        Top = 16
        Width = 361
        Height = 121
        ReadOnly = True
        ScrollBars = ssVertical
        TabOrder = 2
      end
      object Memo3: TMemo
        Left = 464
        Top = 152
        Width = 361
        Height = 121
        ReadOnly = True
        ScrollBars = ssVertical
        TabOrder = 3
      end
      object StaticText1: TStaticText
        Left = 440
        Top = 16
        Width = 20
        Height = 20
        Caption = 'f1'
        TabOrder = 4
      end
      object StaticText2: TStaticText
        Left = 440
        Top = 152
        Width = 20
        Height = 20
        Caption = 'f2'
        TabOrder = 5
      end
      object Memo1: TMemo
        Left = 80
        Top = 16
        Width = 353
        Height = 257
        ReadOnly = True
        ScrollBars = ssVertical
        TabOrder = 6
      end
      object Button6: TButton
        Left = 8
        Top = 296
        Width = 75
        Height = 25
        Caption = #1047#1072#1087#1091#1089#1082
        TabOrder = 7
        OnClick = Button6Click
      end
      object Edit1: TEdit
        Left = 104
        Top = 296
        Width = 121
        Height = 24
        TabOrder = 8
        Text = #1076#1083#1080#1085#1072' '#1092#1072#1081#1083#1072
        OnMouseDown = Edit1MouseDown
      end
    end
    object TabSheet2: TTabSheet
      Caption = #1083#1072#1073#1072'2'
      ImageIndex = 1
      object Button2: TButton
        Left = 8
        Top = 384
        Width = 113
        Height = 25
        Caption = #1086#1090#1082#1088#1099#1090#1100' '#1083#1072#1073#1091
        TabOrder = 0
        OnClick = Button2Click
      end
      object Button7: TButton
        Left = 16
        Top = 16
        Width = 75
        Height = 25
        Caption = #1047#1072#1087#1091#1089#1082
        TabOrder = 1
        OnClick = Button7Click
      end
      object Edit2: TEdit
        Left = 248
        Top = 24
        Width = 433
        Height = 24
        BorderStyle = bsNone
        TabOrder = 2
        OnKeyPress = Edit2KeyPress
      end
      object Edit3: TEdit
        Left = 248
        Top = 56
        Width = 433
        Height = 24
        BorderStyle = bsNone
        ReadOnly = True
        TabOrder = 3
      end
      object Edit4: TEdit
        Left = 248
        Top = 88
        Width = 433
        Height = 24
        BorderStyle = bsNone
        TabOrder = 4
      end
      object StaticText3: TStaticText
        Left = 112
        Top = 24
        Width = 116
        Height = 20
        Caption = #1048#1089#1093#1086#1076#1085#1086#1077' '#1074#1099#1088'-'#1077
        TabOrder = 5
      end
      object StaticText4: TStaticText
        Left = 200
        Top = 56
        Width = 28
        Height = 20
        Caption = #1054#1055#1053
        TabOrder = 6
      end
      object StaticText5: TStaticText
        Left = 152
        Top = 88
        Width = 76
        Height = 20
        Caption = #1056#1077#1079#1091#1083#1100#1090#1072#1090
        TabOrder = 7
      end
    end
    object TabSheet3: TTabSheet
      Caption = #1083#1072#1073#1072'3'
      ImageIndex = 2
      object Button3: TButton
        Left = 8
        Top = 384
        Width = 113
        Height = 25
        Caption = #1086#1090#1082#1088#1099#1090#1100' '#1083#1072#1073#1091
        TabOrder = 0
        OnClick = Button3Click
      end
      object Button8: TButton
        Left = 16
        Top = 16
        Width = 75
        Height = 25
        Caption = #1047#1072#1087#1091#1089#1082
        TabOrder = 1
        OnClick = Button8Click
      end
      object Memo4: TMemo
        Left = 128
        Top = 24
        Width = 561
        Height = 329
        ScrollBars = ssVertical
        TabOrder = 2
      end
    end
    object TabSheet4: TTabSheet
      Caption = #1083#1072#1073#1072'4'
      ImageIndex = 3
      object Button4: TButton
        Left = 8
        Top = 384
        Width = 113
        Height = 25
        Caption = #1086#1090#1082#1088#1099#1090#1100' '#1083#1072#1073#1091
        TabOrder = 0
        OnClick = Button4Click
      end
      object GroupBox1: TGroupBox
        Left = 0
        Top = 0
        Width = 265
        Height = 81
        Caption = #1056#1072#1089#1089#1090#1072#1085#1086#1074#1082#1072' '#1079#1085#1072#1082#1086#1074
        TabOrder = 1
        object Button9: TButton
          Left = 16
          Top = 24
          Width = 75
          Height = 25
          Caption = #1047#1072#1087#1091#1089#1082
          TabOrder = 0
          OnClick = Button9Click
        end
        object Edit5: TEdit
          Left = 120
          Top = 24
          Width = 121
          Height = 24
          ParentShowHint = False
          ShowHint = False
          TabOrder = 1
          Text = #1074#1074#1077#1076#1080#1090#1077' '#1095#1080#1089#1083#1086
          OnMouseDown = Edit5MouseDown
        end
        object StaticText6: TStaticText
          Left = 117
          Top = 53
          Width = 140
          Height = 20
          Caption = '1 2 3 4 5 6 7 8 9'
          TabOrder = 2
        end
      end
      object GroupBox2: TGroupBox
        Left = 272
        Top = 0
        Width = 529
        Height = 377
        Caption = #1047#1072#1076#1072#1095#1072' '#1086' '#1088#1102#1082#1079#1072#1082#1077
        TabOrder = 2
        object Button11: TButton
          Left = 16
          Top = 24
          Width = 75
          Height = 25
          Caption = #1047#1072#1087#1091#1089#1082
          TabOrder = 0
          OnClick = Button11Click
        end
        object Memo5: TMemo
          Left = 104
          Top = 24
          Width = 401
          Height = 337
          ScrollBars = ssVertical
          TabOrder = 1
        end
        object Edit6: TEdit
          Left = 16
          Top = 64
          Width = 73
          Height = 24
          TabOrder = 2
          Text = 'Wmax'
          OnMouseDown = Edit6MouseDown
        end
        object CheckBox1: TCheckBox
          Left = 16
          Top = 104
          Width = 81
          Height = 25
          Caption = #1089#1086#1086#1073#1097#1077#1085#1080#1103
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -11
          Font.Name = 'Courier New'
          Font.Style = []
          ParentFont = False
          TabOrder = 3
        end
      end
    end
    object TabSheet5: TTabSheet
      Caption = #1083#1072#1073#1072'5'
      ImageIndex = 4
      object Button5: TButton
        Left = 8
        Top = 384
        Width = 113
        Height = 25
        Caption = #1086#1090#1082#1088#1099#1090#1100' '#1083#1072#1073#1091
        TabOrder = 0
        OnClick = Button5Click
      end
      object Button10: TButton
        Left = 16
        Top = 16
        Width = 75
        Height = 25
        Caption = #1047#1072#1087#1091#1089#1082
        TabOrder = 1
        OnClick = Button10Click
      end
      object Memo6: TMemo
        Left = 328
        Top = 16
        Width = 361
        Height = 313
        TabOrder = 2
      end
      object Edit7: TEdit
        Left = 184
        Top = 16
        Width = 121
        Height = 24
        CharCase = ecLowerCase
        TabOrder = 3
        Text = #1092#1072#1084#1080#1083#1080#1103
        OnMouseDown = Edit7MouseDown
      end
      object StaticText7: TStaticText
        Left = 118
        Top = 16
        Width = 52
        Height = 20
        Alignment = taCenter
        BiDiMode = bdLeftToRight
        Caption = #1055#1086#1080#1089#1082':'
        ParentBiDiMode = False
        TabOrder = 4
      end
    end
  end
end
