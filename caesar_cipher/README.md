# Caesar Cipher (Cryptosystem)

`Caesar cipher` is a symmetric (private key) cryptosystem first used back in the ancient Roman empire.

It is a substitution cipher which means we shift all the letters of the plaintext with a fixed number of letters.

> The private key is the value with which we shift all the letters

> decryption_function = f^-1(cipher_text, key) = plain_text

> encryption_function = f(plain_text, key) = cipher_text

We transform the characters into numerical values. We could use the ASCII standard to achieve this.
[ASCII table](https://www.ascii-code.com/)

The capital alphabet letters are represented as decimal from 65 to 90 in the ASCII table


| DEC | CHAR |
|-----|------|
| 65  | A    |
| 66  | B    |
| 67  | C    |

---

## Encryption Formula

`Eₙ(x) = (x+n) mod 256`

- x is the original letter
- n is the private key which will we use to shift x
- we use mod255 to make sure the encrypted letter is within the range [0,SIZE_ASCII_TABLE-1]

## Decryption Formula

`Dₙ(x) = (x-n) mod 256`

- We have to consider all the characters in the ciphertext
- *D(x)* is the decrypted letter accordingly
- We have to shift the given letter with *-n* (where *n* is the key)

## Example

The letter *_A_* has a value of 65 in the ASCII standard, and we want to encrypt it with a key value of _200_ to achieve
this we have to apply the encryption formula which is:

`Eₙ(x) = (x+n) mod 256` = Eₙ(65) = (65+200) mod 256 = Eₙ(65) = 265 % 256 = 9 = \t

> As we know the first 32 characters of the ASCII standard are unprintable we must consider it in our algorithm

`Dₙ(x) = (x-n) mod 256` = Dₙ(9) = (9-200) mod 256 = Dₙ(9) = -191 mod 256 = 65 = A