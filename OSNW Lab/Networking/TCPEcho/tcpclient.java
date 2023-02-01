import java.util.*;
import java.net.*;
import java.io.*;

class tcpclient {
    static InetAddress addr;
    public static void main(String args[])
    {
        try
        {
            addr = InetAddress.getLocalHost();
        }
        catch (Exception e)
        {
            System.out.println(e);
        }
        handleServer();
        
    }
    public static void handleServer()
    {
        Socket client = null;
        try
        {
            client = new Socket(addr,3000);

            Scanner input = new Scanner(client.getInputStream());
            PrintWriter output = new PrintWriter(client.getOutputStream(),true);
            Scanner userInput =  new Scanner(System.in);

            String message = "", response = "";
            System.out.println("Enter the message : ");
            while(!message.equals("CLOSE"))
            {
                message = userInput.nextLine();
                System.out.println("The message to be sent is "+message);
                output.println(message);
                response = input.nextLine();
                System.out.println("SERVER response : "+response);
            }

        }
        catch(Exception e)
        {
            System.out.println(e);
        }
        finally
        {
            try
            {
                client.close();
            }
            catch(Exception e)
            {
                System.out.println(e);
            }
        }

    }
}
