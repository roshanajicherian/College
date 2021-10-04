import java.applet.Applet;
import java.awt.*;
import java.awt.event.*;
import java.lang.Math;

public class Calc extends Applet implements ActionListener{

    Label lab1,lab2,lab3,lab4;
    TextField tf1,tf2;
    Button btn1,btn2,btn3,btn4,btn5,btn6;
    public void init() {
        setLayout(new GridLayout(6,2));
        lab1=new Label("Number 1 ");
        lab2=new Label("Number 2 ");
        lab3=new Label("Result : ");
        lab4=new Label("");
        tf1=new TextField(30);
        tf2=new TextField(30);
        btn1=new Button("Add");
        btn2=new Button("Subtract");
        btn3=new Button("Multiply");
        btn4=new Button("Divide");
        btn5=new Button("Square");
        btn6=new Button("Square Root");
        add(lab1);
        add(tf1);
        add(lab2);
        add(tf2);
        add(btn1);
        add(btn2);
        add(btn3);
        add(btn4);
        add(btn5);
        add(btn6);
        add(lab3);
        add(lab4);
        btn1.addActionListener(this);
        btn2.addActionListener(this);
        btn3.addActionListener(this);
        btn4.addActionListener(this);
        btn5.addActionListener(this);
        btn6.addActionListener(this);
        

    }
    public void actionPerformed(ActionEvent e)
    {
        int no1=Integer.parseInt(tf1.getText());
        int no2=Integer.parseInt(tf2.getText());
        if(e.getSource()==btn1)
        {
            int res=no1+no2;
            lab4.setText(Integer.toString(res));
        }
        else if(e.getSource()==btn2)
        {
            int res=no1-no2;
            lab4.setText(Integer.toString(res));
        }
        else if(e.getSource()==btn3)
        {
            int res=no1*no2;
            lab4.setText(Integer.toString(res));
        }
        else if(e.getSource()==btn4)
        {
            double res,d1=no1,d2=no2;
            res=(double)no1/no2;
            lab4.setText(Double.toString(res));
        }
        else if(e.getSource()==btn5)
        {
            int res=no1*no1;
            lab4.setText(Integer.toString(res));
        }
        else if(e.getSource()==btn6)
        {
            double res=Math.sqrt(no1);
            lab4.setText(Double.toString(res));
        }
    }

}
