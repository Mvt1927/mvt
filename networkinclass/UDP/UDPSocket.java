package networkinclass.UDP;

import java.awt.*;
import java.net.*;

public class UDPSocket {

    public static void main(String args[]) {
        DatagramSocket socket = null;
        DatagramPacket packet = null;
        byte[] buffer = new byte[1024]; // create a receive buffer
        byte[] OK = "OK".getBytes();

        try {
            // now create a socket to listen in
            socket = new DatagramSocket(8506);
        } catch (Exception exc) {
            System.out.println("Error! - " + exc.toString());
        }

        while (true) {
            try {
                packet = new DatagramPacket(buffer, buffer.length);
                socket.receive(packet);
                InetAddress senderAddress = packet.getAddress();
                int port = packet.getPort();
                DatagramPacket OKpack = new DatagramPacket(OK, OK.length, senderAddress, port);
                socket.send(OKpack);
            } catch (Exception exc) {
                System.out.println("Error! - " + exc.toString());
            }

            String receiveStr = new String(buffer, 0, packet.getLength()); // extract the packet
            System.out.println("Received packet: " + receiveStr);
            if (receiveStr.equals("")) {
                System.out.println("Close");
                System.exit(0);
            }
            
        }
    }
}
