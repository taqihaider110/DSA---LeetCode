import re
import nltk
from nltk.chat.util import Chat, reflections

# Define reflections for handling common variations in user input
reflections = {
    "i am": "you are",
    "i'll": "you'll",
    "you": "me",
    "me": "you",
}

# Correctly define the list of pairs that map patterns to responses
patterns_and_responses = [
    (r'hello|hi|hey', ["Hello! How can I assist you today?"]),
    (r'how are you', ["I'm doing great! How about you?"]),
    (r'what is your name', ["I don't really have a name, but I'm here to help!"]),
    (r'(.*) my name is (.*)', ["Hello, %2! Nice to meet you!"]),
    (r'bye|goodbye|see you', ["Goodbye! Have a great day!"]),
    (r'(.*) help (.*)', ["Sure, I can assist you. What do you need help with?"]),
    (r'what can you do', ["I can chat with you, answer basic questions, and just be here to talk!"]),
    (r'.*', ["I'm sorry, I don't quite understand. Could you clarify what you mean?"]),
]

# Create a chatbot instance with the specified patterns and reflections
chatbot = Chat(patterns_and_responses, reflections)

# Define a simple loop to interact with the chatbot
def chat():
    print("Chatbot: Hello! I'm here to chat with you.")
    while True:
        user_input = input("You: ")  # Get input from the user
        if re.search(r'bye|goodbye|exit', user_input, re.IGNORECASE):
            print("Chatbot: Goodbye! See you next time!")
            break
        response = chatbot.respond(user_input)  # Get the chatbot's response
        print(f"Chatbot: {response}")

# Run the chatbot
if __name__ is __main__:
    chat()
