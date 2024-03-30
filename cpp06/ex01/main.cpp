#include "Serial.hpp"

int main()
{
    Data data;
    data.id = 42;
    data.dataString = "Hello, world!";

    std::cout << "Before serialization:" << std::endl;
    std::cout << "Address: " << &data << std::endl;
    std::cout << "Value id: " << data.id << ", dataString: " << data.dataString << std::endl;

    // Serialize the Data object
    unsigned long serializedPtr = Serializer::serialize(&data);

    std::cout << "\nSerialized pointer: " << serializedPtr << std::endl;

    Data *deserializedPtr = Serializer::deserialize(serializedPtr);

    std::cout << "\nAfter deserialization:" << std::endl;
    std::cout << "Address: " << deserializedPtr << std::endl;
    std::cout << "Value id: " << deserializedPtr->id << ", dataString: " << deserializedPtr->dataString << std::endl;


    return 0;
}
