import java.util.*;
import java.net.*;
import java.io.*;

class tcpserver {
    static ServerSocket server;
    public static void main(String args[]) throws IOException 
    {
        server = new ServerSocket(3000);
        do
        {
            handleClient();
        }while(true);
    }
    public static void handleClient()
    {
        Socket client =  null;
        try
        {
            client = server.accept();
            System.out.println("Connection with client establlished");
            
            Scanner input = new Scanner(client.getInputStream());
            PrintWriter output = new PrintWriter(client.getOutputStream(),true);

            String messageReceived = "";
            int messageCount =0;
            
            messageReceived = input.nextLine();
            while(!messageReceived.equals("CLOSE"))
            {
                messageCount++;
                System.out.println("Message Recevied is "+ messageReceived);
               output.println(messageCount + "messages recevied."); 
                messageReceived = input.nextLine();
            }
            output.println("Total messages : "+messageCount);
        }
        catch(IOException e)
        {
            System.out.println(e);
        }
        finally
        {
            try
            {
                client.close();
            }
            catch (IOException e)
            {
                System.out.println(e);
            }
        }
    }   
}
