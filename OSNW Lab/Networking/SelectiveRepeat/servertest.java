import java.io.*;
import java.net.*;
import java.util.*;

class servertest
{
    static ServerSocket server;
    static DataInputStream din;
    static DataOutputStream dos;
    public static void main(String args[]) throws IOException
    {
        try
        {
            int a[] = {10,20,30,40,60,70,80,90};
            server = new ServerSocket(8011);
            Socket client = server.accept();
            din = new DataInputStream(client.getInputStream());
            dos = new DataOutputStream(client.getOutputStream());
            int dataLength = a.length;
            dos.write(dataLength);
            dos.flush();
            for(int i=0;i<a.length;i++)
            {
                dos.write(a[i]);
                dos.flush();
            }
            int lostData = din.read();
            dos.write(a[lostData]);
            dos.flush();
            
        }
        catch(IOException e)
        {
            System.out.println(e);
        }
        finally
        {
            try
            {
                din.close();
                dos.close();
            }
            catch (IOException e)
            {
                System.out.println(e);
            }
        }
    }
}