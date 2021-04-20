package networkinclass.UDP;

import java.io.*;
import java.net.*;

public class UDPPacket {

    public static void main(String args[]) {
        InetAddress internetAddress;
        String message;
        byte[] buf = new byte[1024];
        DatagramPacket respondPack;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        try {
            internetAddress = InetAddress.getLocalHost();
            do {
                System.out.print("Message to send: ");
                message = br.readLine();
                byte[] msg = message.getBytes();
                // format the msg into a UDP packet
                DatagramPacket packet = new DatagramPacket(msg, msg.length, internetAddress, 8506);
                // send the packet to the server
                DatagramSocket socket = new DatagramSocket();
                socket.send(packet);
                respondPack = new DatagramPacket(buf, buf.length);
                socket.receive(respondPack);
                System.out.println(new String(buf, 0, respondPack.getLength()));
            } while (!message.equals(""));
        } catch (Exception exc) {
            System.out.println("Error - " + exc.toString());
        }
    }
}
