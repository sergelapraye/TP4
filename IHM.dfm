object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'Form2'
  ClientHeight = 521
  ClientWidth = 745
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label3: TLabel
    Left = 156
    Top = 261
    Width = 16
    Height = 13
    Caption = 'sec'
    Visible = False
  end
  object Label4: TLabel
    Left = 8
    Top = 231
    Width = 157
    Height = 13
    Caption = 'Voulez vous changer la p'#233'riode ?'
  end
  object Shape1: TShape
    Left = 632
    Top = 392
    Width = 25
    Height = 25
    Brush.Color = clRed
  end
  object Label7: TLabel
    Left = 537
    Top = 404
    Width = 76
    Height = 13
    Caption = 'Carte Velleman:'
  end
  object Label8: TLabel
    Left = 51
    Top = 48
    Width = 3
    Height = 13
  end
  object Label2: TLabel
    Left = 568
    Top = 448
    Width = 33
    Height = 13
    Caption = 'MySQL'
  end
  object Shape2: TShape
    Left = 632
    Top = 437
    Width = 25
    Height = 24
    Brush.Color = clRed
  end
  object Label1: TLabel
    Left = 552
    Top = 376
    Width = 29
    Height = 13
    Caption = 'Etats:'
  end
  object Chart1: TChart
    Left = 203
    Top = 8
    Width = 518
    Height = 353
    Legend.Visible = False
    Title.Text.Strings = (
      'Graphique de la temp'#233'rature '
      'en fonction de la p'#233'riode')
    BottomAxis.Title.Caption = 'P'#233'riode'
    LeftAxis.Automatic = False
    LeftAxis.AutomaticMaximum = False
    LeftAxis.AutomaticMinimum = False
    LeftAxis.Maximum = 60.000000000000000000
    LeftAxis.Minimum = -30.000000000000000000
    LeftAxis.Title.Caption = 'Temp'#233'rature'
    View3D = False
    View3DOptions.Orthogonal = False
    Color = 11842740
    TabOrder = 0
    DefaultCanvas = 'TGDIPlusCanvas'
    PrintMargins = (
      15
      16
      15
      16)
    ColorPaletteIndex = 17
    object Series1: TLineSeries
      Selected.Hover.Visible = False
      Brush.BackColor = clDefault
      LinePen.Color = 10708548
      Pointer.InflateMargins = True
      Pointer.Style = psRectangle
      TreatNulls = tnIgnore
      XValues.Name = 'X'
      XValues.Order = loAscending
      YValues.Name = 'Y'
      YValues.Order = loNone
      Data = {0000000000}
    end
  end
  object Button3: TButton
    Left = 51
    Top = 96
    Width = 75
    Height = 25
    Caption = 'D'#233'marrer'
    TabOrder = 1
    Visible = False
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 51
    Top = 127
    Width = 75
    Height = 25
    Caption = 'Arr'#234'ter'
    TabOrder = 2
    Visible = False
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 35
    Top = 43
    Width = 105
    Height = 25
    Caption = 'Nouvelle acquisition'
    TabOrder = 3
    OnClick = Button5Click
  end
  object Edit1: TEdit
    Left = 35
    Top = 258
    Width = 102
    Height = 21
    TabOrder = 4
    OnKeyDown = Edit1KeyDown
  end
  object Timer1: TTimer
    Enabled = False
    Interval = 5000
    OnTimer = Timer1Timer
    Left = 80
    Top = 400
  end
  object MainMenu1: TMainMenu
    Left = 24
    Top = 408
    object Ficher1: TMenuItem
      Caption = 'Fichier ini'
      object Ouvrir1: TMenuItem
        Caption = 'Ouvrir '
        OnClick = Ouvrir1Click
      end
      object Enregistrer1: TMenuItem
        Caption = 'Enregistrer'
        OnClick = Enregistrer1Click
      end
    end
  end
  object Timer2: TTimer
    Interval = 4000
    OnTimer = Timer2Timer
    Left = 120
    Top = 400
  end
end
