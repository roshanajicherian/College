import java.util.*;
import java.io.*;
import java.net.*;

class clientside
{
    public static void main(String[] args) throws Exception
    {
        try
        {
            InetAddress addr = InetAddress.getByName("Localhost");
            Socket client = new Socket(addr,3000);
            DataInputStream input = new DataInputStream(client.getInputStream());
            DataOutputStream output = new DataOutputStream(client.getOutputStream());
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            String clientMessage = "", serverMessage = "";
            System.out.println("Enter the message : ");
            clientMessage = br.readLine();
            output.writeUTF(clientMessage);
            output.flush();
            serverMessage= input.readUTF();
            System.out.println("SERVER MESSAGE : "+serverMessage);
            client.close();
        }
        catch (Exception e)
        {
            System.out.println(e);
        }
    }
}