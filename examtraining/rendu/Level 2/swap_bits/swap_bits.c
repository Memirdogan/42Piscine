unsigned char swap_bits(unsigned char c)
{
    return((c >> 4) | (c << 4));
    //cdeki bit 4 byte sağa kaysın ve 4 bayt sağdaki de sola kaysın
}