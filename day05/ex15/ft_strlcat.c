int	ft_strlcpy(char *src, char *dst, unsigned int size)
{
	unsigned int index;
	unsigned int dst_len;
	unsigned int src_len;

	index = 0;
	dst_len = 0;
	src_len = 0;
	while (dst[dst_len])
		++dst_len;
	while (src[src_len])
		++src_len;
	while (src[index] && index < size)
	{
		dst[dst_len + index] = src[index]; 
		++index;
	}
	dst[dst_len + index] = '\0';
	return (dst_len + src_len);
}
