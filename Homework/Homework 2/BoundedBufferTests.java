public class BoundedBufferTests {

    //Object constructor to test with
    class testObject {
        String error;
        testObject (String error) {
            this.error = error;
        }
    }

     public static void main (String[] args) {
        testInsert();              
        testRetrieve();            
     }

     //insert test
     public static void  testInsert() {
        testObject insertObject1 = new testObject(“This is an insert example”);

        System.out.println(”Test if object exists: ”);
        insertObject1.insert(insertObject1);
        try { 
            System.out.println(insertObject1.length == 25 ? “true” : “false” ); 
        }
        catch( Exception e ) { 
            System.out.println ( false ); 
        }
     }
 
     //retrieve test
     public static void testRetrieve() {
        testObject retrieveObject1 = new testObject("This is a retrieve example");

        try { 
            System.out.println(retrieveObject1.retrieve() == "This is a retrieve example" ? "true" : "false" ); 
        }
        catch( Exception e ) { 
            System.out.println ( false ); 
        }
     }
 }
