public class BoundedBufferTests {

    class testObject {
        String error; 
        testObject(String error) {
            this.error = error;
        }
    }

    public static void main(String[] args) {
        testInsert();
        testRetrieve();
    }

    public static void testInsert() {
        testObject testObject1 = new testObject("This Is A Test Object");
        testObject testObject2 = new testObject("Another Example");
        System.out.println(testObject1); 
        System.out.println(testObject2);
    }

    public static void testRetrieve() {

    }


}
