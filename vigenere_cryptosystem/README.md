# Vigenere cipher

- *__Vigenere cipher__* is a symmetric (private key) crypto system first used back in the 16th century.
- It resisted all attemp to break until _*1863*_
- It is a __*polyalphabetic substitution cipher*__ - we shift all the letters of the plaintext with a fixed number of letters
- Unlike caesar cipher crypto system, the private key is a word instead of a single integer value 

> We could use the ASCII standard table to transform the characters to their numerical value

### Encryption formula

>E<sub>i</sub>(x<sub>i</sub>) = (x<sub>i</sub> + k<sub>i</sub>) mod 256

- We have to consider all the character in the plaintext
- x<sub>i</sub> is the actual letter of the plaintext
- E<sub>i</sub>(x<sub>i</sub>) is the encrypted version of the letter x<sub>i</sub>
- We have to shift the given letter by k<sub>i</sub> which is a letter from the word key

### Decryption formula

>D<sub>i</sub>(x<sub>i</sub>) = (x<sub>i</sub> - k<sub>i</sub>) mod 256

- We have to consider all the character in the ciphertext
- x<sub>i</sub> is the actual letter of the ciphertext
- D<sub>i</sub>(x<sub>i</sub>) is the decrypted version of the letter x<sub>i</sub>
- We have to shift the given letter by -k<sub>i</sub> which is a letter from the word key

### Example

We will use the encryption formula __E<sub>i</sub>(x<sub>i</sub>) = (x<sub>i</sub> + k<sub>i</sub>) mod 256__ and the private key word __*SECRET*__ to cipher the world __*HELLO*__

1. We need to convert the plain text to its numerical value which is:

    > H = 72, E = 69, L = 76, L = 76, O = 79

2. We convert the secret key character values to its numerical values:

    > S = 83, E = 69, C = 67, R = 82, E = 69, T = 84

3. Finally, we shift the letters according the indices of the plain text and the word key if the characters number in the plain text is greater than the key word we must start over with the key word.
   - E(H) = 72 + 83 mod 256 = 161 = ¡
   - E(E) = 69 + 69 mod 256 = 138 = Š
   - E(L) = 76 + 67 mod 256 = 143 = 
   - E(L) = 76 + 67 mod 256 = 143 =
   - E(O) = 79 + 69 mod 256 = 145 = ‘
