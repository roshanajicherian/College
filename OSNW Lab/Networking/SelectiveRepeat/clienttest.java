import java.io.*;
import java.net.*;
import java.util.*;

class clienttest
{
    static Socket connection;
    public static void main(String[] args) throws IOException
    {
        try
        {
            int v[] = new int[10];
            int loc = -1;
            InetAddress addr = InetAddress.getByName("Localhost");
            connection = new Socket(addr,8011);
            DataInputStream din = new DataInputStream(connection.getInputStream());
            DataOutputStream dos = new DataOutputStream(connection.getOutputStream());
            int frameSize = din.read();
            System.out.println("Frame Size : "+frameSize);
            for(int i=0;i<frameSize;i++)
            {
                v[i]=din.read();
                System.out.println(v[i]);
                v[5] = -1;
                System.out.println("Recieved frame is : ");
            }
            for(int i=0;i<frameSize;i++)
            {
                System.out.println(v[i]);
            }
            for(int i=0;i<frameSize;i++)
            {
                if(v[i]==-1)
                {
                    loc = i;
                    System.out.println("Request to retransmit frame : "+(i+1)+" again\n");
                    dos.write(i);
                    dos.flush();
                }
            }
            int newData = din.read();
            v[loc] = newData;
            System.out.println("Frame recived is : "+ newData);
    }
    catch (IOException e)
    {
        System.out.println(e);
    }
    }
}