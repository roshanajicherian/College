import java.io.*;
import java.net.*;
import java.util.*;

class testclient
{
    public static void main(String[] args) throws IOException
    {
        InetAddress addr = InetAddress.getByName("Localhost");

        Socket connection = new Socket(addr,500);
        
        BufferedInputStream in = new BufferedInputStream(connection.getInputStream());
        DataOutputStream out = new DataOutputStream(connection.getOutputStream());
    }
}