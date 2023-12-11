/**
 * _isalpha - A function that checks for an alphabetical character.
 * @symbol: The character to be checked.
 *Return: 1 for alphabatical character, 0 otherwise.
 */

int _isalpha(int symbol)
{
if ((symbol >= 65 && symbol <= 97) || (symbol >= 97 && symbol <= 122))
{
return (1);
}
return (0);
}
