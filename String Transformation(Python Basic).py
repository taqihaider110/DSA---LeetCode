def transformSentence(sentence):
    def transform_word(word):
        result_word = [word[0]]  # Initialize the result word with the first character

        for i in range(1, len(word)):
            prev_char = result_word[-1]
            current_char = word[i]

            if prev_char.lower() < current_char.lower():
                result_word.append(current_char.upper())
            elif prev_char.lower() > current_char.lower():
                result_word.append(current_char.lower())
            else:
                result_word.append(current_char)

        return ''.join(result_word)

    words = sentence.split()  # Split the sentence into words
    transformed_words = [transform_word(word) for word in words]  # Transform each word

    # Re-add spaces between words
    result_sentence = ' '.join(transformed_words)

    return result_sentence

if __name__ == '__main__':
    input_sentence = "ab cB GG"
    transformed_sentence = transformSentence(input_sentence)
    print("Transformed sentence:", transformed_sentence)
