
unsigned char	reverse_bits(unsigned char octet)
{
    unsigned char rev;
    
    rev = octet;
    octet = octet<<4;
    rev = rev>>4;
    return(octet + rev);
}