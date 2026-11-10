/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00546bd0; name: FUN_00546bd0
 */


char * FUN_00546bd0(uint param_1,char *param_2)

{
  char *__src;
  
  __src = "GPUFMT_UNKNOWN";
  switch(param_1) {
  default:
    __src = &DAT_0275dbf0;
    sprintf(&DAT_0275dbf0,"0x%08x",param_1);
    break;
  case 2:
    __src = "GPUFMT_A32B32G32R32F";
  case 0:
    break;
  case 10:
    __src = "GPUFMT_A16B16G16R16F";
    break;
  case 0x18:
    __src = "GPUFMT_A2B10G10R10";
    break;
  case 0x1c:
    __src = "GPUFMT_A8R8G8B8";
    break;
  case 0x1d:
    __src = "GPUFMT_A8R8G8B8_SRGB";
    break;
  case 0x29:
    __src = "GPUFMT_R32F";
    break;
  case 0x2d:
    __src = "GPUFMT_D24S8";
    break;
  case 0x37:
    __src = "GPUFMT_D16";
    break;
  case 0x41:
    __src = "GPUFMT_A8";
  }
  if (param_2 == (char *)0x0) {
    return __src;
  }
  strcpy(param_2,__src);
  return param_2;
}


