///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description : Application for basic calculator using the concept of AWT(abstract window toolkit) from Java.
// Author :      Dinesh Devidasrao Kadam
// Date :        12 May 2023
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////


import java.awt.*;
import java.awt.event.*;

class Calculator
{
    public static void main(String Arg[])
    {
        Casio obj = new Casio("My Calculator");
    }
}

class Casio extends WindowAdapter implements ActionListener
{
    public Frame fobj;
    public Button Add, Sub, Mult, Div, One, Two, Three, Four, Five, Six, Seven, Eight, Nine, Mod, Zero, Point, Reverse, Delete, AC, Equal;
    public Label lobj;
    public double d1, d2, check, Ans;

    public Casio(String str)
    {
        fobj = new Frame(str);
        fobj.setSize(400, 400);
        fobj.setVisible(true);
        fobj.addWindowListener(this);

        Add = new Button("ADD");
        Sub = new Button("SUB");
        Mult = new Button("MULT");
        Div = new Button("DIV");

        One = new Button("1");
        Two = new Button("2");
        Three = new Button("3");
        Four = new Button("4");
        Five = new Button("5");
        Six = new Button("6");
        Seven = new Button("7");
        Eight = new Button("8");
        Nine = new Button("9");
        Zero = new Button("0");
        Mod = new Button("%");
        Point = new Button(".");
        Reverse = new Button("+/-");
        AC = new Button("AC");
        Equal = new Button("=");
        Delete = new Button("DELETE");

        lobj = new Label();
        lobj.setBackground(Color.LIGHT_GRAY);
        lobj.setBounds(10, 10, 350, 150);
        
        Add.setBounds(10, 350, 85, 40);
        One.setBounds(10, 310, 85, 40);
        Four.setBounds(10, 270, 85, 40);
        Seven.setBounds(10, 230, 85, 40);
        Mod.setBounds(10, 190, 85, 40);

        Sub.setBounds(110, 350, 85, 40);
        Two.setBounds(110, 310, 85, 40);
        Five.setBounds(110, 270, 85, 40);
        Eight.setBounds(110, 230, 85, 40);
        Zero.setBounds(110, 190, 85, 40);

        Mult.setBounds(210, 350, 85, 40);
        Three.setBounds(210, 310, 85, 40);
        Six.setBounds(210, 270, 85, 40);
        Nine.setBounds(210, 230, 85, 40);
        Point.setBounds(210, 190, 85, 40);

        Div.setBounds(310, 350, 85, 40);
        Reverse.setBounds(310, 310, 85, 40);
        Delete.setBounds(310, 270, 85, 40);
        Equal.setBounds(310, 230, 85, 40);
        AC.setBounds(310, 190, 85, 40);
    
        fobj.add(Add);
        fobj.add(Sub);
        fobj.add(Mult);
        fobj.add(Div);
        fobj.add(One);
        fobj.add(Two);
        fobj.add(Three);
        fobj.add(Four);
        fobj.add(Five);
        fobj.add(Six);
        fobj.add(Seven); 
        fobj.add(Eight);
        fobj.add(Nine);
        fobj.add(Mod);
        fobj.add(Zero);
        fobj.add(Point);
        fobj.add(Reverse);
        fobj.add(Delete);
        fobj.add(AC);
        fobj.add(Equal);

        fobj.add(lobj);

        Add.addActionListener(this);
        Sub.addActionListener(this);
        Mult.addActionListener(this);
        Div.addActionListener(this);

        One.addActionListener(this);
        Two.addActionListener(this);
        Three.addActionListener(this);
        Four.addActionListener(this);
        Five.addActionListener(this);
        Six.addActionListener(this);
        Seven.addActionListener(this);
        Eight.addActionListener(this);
        Nine.addActionListener(this);
        Zero.addActionListener(this);
        Mod.addActionListener(this);
        Point.addActionListener(this);
        Reverse.addActionListener(this);
        AC.addActionListener(this);
        Equal.addActionListener(this);
        Delete.addActionListener(this);
    
        fobj.setLayout(null);
    }

    public void windowClosing(WindowEvent aobj)
    {
        System.exit(0);
    }

    public void actionPerformed(ActionEvent aobj)
    {
        String s1, s2;

        if(aobj.getSource() == One)
        {
            s2 = lobj.getText();
            s1 = s2 + "1";
            lobj.setText(s1);
        }

        if(aobj.getSource() == Two)
        {
            s2 = lobj.getText();
            s1 = s2 + "2";
            lobj.setText(s1);
        }

        if(aobj.getSource() == Three)
        {
            s2 = lobj.getText();
            s1 = s2 + "3";
            lobj.setText(s1);
        }

        if(aobj.getSource() == Four)
        {
            s2 = lobj.getText();
            s1 = s2 + "4";
            lobj.setText(s1);
        }

        if(aobj.getSource() == Five)
        {
            s2 = lobj.getText();
            s1 = s2 + "5";
            lobj.setText(s1);
        }

        if(aobj.getSource() == Six)
        {
            s2 = lobj.getText();
            s1 = s2 + "6";
            lobj.setText(s1);
        }

        if(aobj.getSource() == Seven)
        {
            s2 = lobj.getText();
            s1 = s2 + "7";
            lobj.setText(s1);
        }

        if(aobj.getSource() == Eight)
        {
            s2 = lobj.getText();
            s1 = s2 + "8";
            lobj.setText(s1);
        }

        if(aobj.getSource() == Nine)
        {
            s2 = lobj.getText();
            s1 = s2 + "9";
            lobj.setText(s1);
        }

        if(aobj.getSource() == Point)
        {
            s2 = lobj.getText();
            s1 = s2 + ".";
            lobj.setText(s1);
        }

        if(aobj.getSource() == Reverse)
        {
            s2 = lobj.getText();
            s1 = "-" + s2;
            lobj.setText(s1);
        }

        if(aobj.getSource() == Delete)
        {
            s2 = lobj.getText();
            try
            {
                s1 = s2.substring(0, s2.length() - 1);
            }

            catch(StringIndexOutOfBoundsException S)
            {
               return;
            }

            lobj.setText(s1);
        }

        if(aobj.getSource() == Add)
        {
            try
            {
                d1 = Double.parseDouble(lobj.getText());
            }

            catch(NumberFormatException N)
            {
                lobj.setText("Invalid Format");
               return;
            }
            s1 = " ";
            lobj.setText(s1);
            check = 1;
        }

        if(aobj.getSource() == Sub)
        {
            try
            {
                d1 = Double.parseDouble(lobj.getText());
            }

            catch(NumberFormatException N)
            {
                lobj.setText("Invalid Format");
               return;
            }
            s1 = " ";
            lobj.setText(s1);
            check = 2;
        }

        if(aobj.getSource() == Mult)
        {
            try
            {
                d1 = Double.parseDouble(lobj.getText());
            }

            catch(NumberFormatException N)
            {
                lobj.setText("Invalid Format");
               return;
            }
            s1 = " ";
            lobj.setText(s1);
            check = 3;
        }

        if(aobj.getSource() == Div)
        {
            try
            {
                d1 = Double.parseDouble(lobj.getText());
            }

            catch(NumberFormatException N)
            {
                lobj.setText("Invalid Format");
               return;
            }
            s1 = " ";
            lobj.setText(s1);
            check = 4;
        }

        if(aobj.getSource() == Mod)
        {
            try
            {
                d1 = Double.parseDouble(lobj.getText());
            }

            catch(NumberFormatException N)
            {
                lobj.setText("Invalid Format");
               return;
            }
            s1 = " ";
            lobj.setText(s1);
            check = 5;
        }

        if(aobj.getSource() == Equal)
        {
            try
            {
                d2 = Double.parseDouble(lobj.getText());
            }

            catch(Exception E)
            {
                lobj.setText("ENTER NUMBER FIRST");
               return;
            }
            
            if(check == 1)
            {
                Ans = d1 + d2;
            }

            if(check == 2)
            {
                Ans = d1 - d2;
            }

            if(check == 3)
            {
                Ans = d1 * d2;
            }

            if(check == 4)
            {
                Ans = d1 / d2;
            }

            if(check == 5)
            {
                Ans = d1 % d2;
            }

            lobj.setText(String.valueOf(Ans));
        }

        if(aobj.getSource() == AC)
        {
            d1 = 0;
            d2 = 0;
            check = 0;
            Ans = 0;
            s1 = " ";
            lobj.setText(s1);
        }
    }
}
