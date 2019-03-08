public class BoundedBufferTests extends BoundedBuffer {

     public static void main (String[] args) {
        BoundedBuffer buffer = new BoundedBuffer();
        try {
            testInsert(buffer);              
        }
        catch (Exception e) {
            e.printStackTrace();
        }
        try {
            buffer.insert("This a retrieve example");             
            testRetrieve(buffer);
        }
        catch (Exception e) {
            e.printStackTrace();
        }                        
     }

     public static void testInsert(BoundedBuffer buffer) throws InterruptedException {
        Object objectOne = "This an insert object";

        System.out.println("Object exists?: ");
        buffer.insert(objectOne);
        try { 
            System.out.println(objectOne.equals("This is an insert object")); 
        }
        catch( Exception e ) { 
            System.out.println ( false ); 
        }
     }
 
     public static void testRetrieve(BoundedBuffer buffer) throws InterruptedException {
        Object objectOne = "retrieve object";
        try { 
            System.out.println(buffer.retrieve() == "retrieve object");
        }
        catch( Exception e ) { 
            System.out.println ( false ); 
        }
     }
 }
