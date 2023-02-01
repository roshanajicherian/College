import java.util.*;
import java.net.*;
import java.io.*;

class serverside
{
    public static void main(String args[]) throws Exception
    {
        try
        {
            ServerSocket server = new ServerSocket(3000);
            System.out.println("SERVER started on port 3000.Waiting for CLENT.");
            Socket client = server.accept();
            System.out.println("Connected to CLIENT");
            DataInputStream input = new DataInputStream(client.getInputStream());
            DataOutputStream output = new DataOutputStream(client.getOutputStream());
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            String clientMessage = "", serverMessage = "";
            clientMessage = input.readUTF();
            System.out.println("CLIENT MESSAGE : "+clientMessage);
            System.out.println("Enter the message : ");
            serverMessage = br.readLine();
            output.writeUTF(serverMessage);
            output.flush();
            server.close();
            client.close();
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }
}