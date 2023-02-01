import java.io.*;
import java.net.*;
import java.util.*;

class testserver
{
    public static void main(String args[]) throws IOException
    {
        System.out.println("*********SERVER CONNECTION**************");
        System.out.println("*********WATING FOR CONNECTION**************");
        InetAddress addr = InetAddress.getByName("LocalHost");
        ServerSocket ss = new ServerSocket(500);

        Socket client = new Socket();
        client = ss.accept();

        BufferedInputStream in = new BufferedInputStream(client.getInputStream());
        DataOutputStream out = new DataOutputStream(client.getOutputStream());

    }
}