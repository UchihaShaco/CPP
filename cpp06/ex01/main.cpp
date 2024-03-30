#include "Serial.hpp"

int main()
{
    // Create a Data object
    Data data;
    data.id = 42;
    data.dataString = "Hello, world!";

    // Print address and value of the Data object before serialization
    std::cout << "Before serialization:" << std::endl;
    std::cout << "Address: " << &data << std::endl;
    std::cout << "Value id: " << data.id << ", dataString: " << data.dataString << std::endl;

    // Serialize the Data object
    unsigned long serializedPtr = Serializer::serialize(&data);

    // Print the serialized pointer
    std::cout << "\nSerialized pointer: " << serializedPtr << std::endl;

    // Deserialize the serialized pointer
    Data *deserializedPtr = Serializer::deserialize(serializedPtr);

    // Print address and value of the Data object after deserialization
    std::cout << "\nAfter deserialization:" << std::endl;
    std::cout << "Address: " << deserializedPtr << std::endl;
    std::cout << "Value id: " << deserializedPtr->id << ", dataString: " << deserializedPtr->dataString << std::endl;


    return 0;
}
