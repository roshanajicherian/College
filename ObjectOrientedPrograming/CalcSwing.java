import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.lang.Math;

class CalcSwingApp implements ActionListener{

    JFrame f=new JFrame();
    JLabel lab1,lab2,lab3,lab4;
    JTextField tf1,tf2;
    JButton btn1,btn2,btn3,btn4,btn5,btn6;
    public CalcSwingApp() {
        f.setVisible(true);
        f.setSize(500,500);
        f.setLayout(new GridLayout(6,2));
        lab1=new JLabel("Number 1 ");
        lab2=new JLabel("Number 2 ");
        lab3=new JLabel("Result : ");
        lab4=new JLabel("");
        tf1=new JTextField(30);
        tf2=new JTextField(30);
        btn1=new JButton("Add");
        btn2=new JButton("Subtract");
        btn3=new JButton("Multiply");
        btn4=new JButton("Divide");
        btn5=new JButton("Square");
        btn6=new JButton("Square Root");
        f.add(lab1);
        f.add(tf1);
        f.add(lab2);
        f.add(tf2);
        f.add(btn1);
        f.add(btn2);
        f.add(btn3);
        f.add(btn4);
        f.add(btn5);
        f.add(btn6);
        f.add(lab3);
        f.add(lab4);
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
public class CalcSwing
{
    public static void main(String[] args)
    {
        new CalcSwingApp();
    }
}
