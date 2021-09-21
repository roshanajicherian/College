import java.applet.Applet;
import java.awt.Graphics;
public class pgm16 extends Applet {
    public void paint(Graphics G)
    {
        // G.drawString("Hello World",100,100);
        G.drawOval(120, 120, 250, 250);
        G.fillOval(155, 175, 50, 50);
        G.fillOval(285, 175, 50, 50);
        G.drawArc(195,230,100,80,180,180);       
    }
}
/*
<applet code="app2.class" height=500 width=500>
</applet>
*/
