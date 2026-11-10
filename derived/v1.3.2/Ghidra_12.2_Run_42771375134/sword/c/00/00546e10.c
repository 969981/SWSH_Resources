/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00546e10; name: FUN_00546e10
 */


char * FUN_00546e10(int param_1,char *param_2)

{
  char *__src;
  
  if (param_1 == 0x39) {
    __src = "GPUIBFMT_UINT16";
  }
  else if (param_1 == 0x2a) {
    __src = "GPUIBFMT_UINT32";
  }
  else if (param_1 == -1) {
    __src = "GPUIBFMT_UNKNOWN";
  }
  else {
    __src = (char *)0x0;
  }
  if (param_2 == (char *)0x0) {
    return __src;
  }
  strcpy(param_2,__src);
  return param_2;
}


