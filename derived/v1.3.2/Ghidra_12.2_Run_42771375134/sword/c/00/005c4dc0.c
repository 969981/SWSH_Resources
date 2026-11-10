/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c4dc0; name: FUN_005c4dc0
 */


wchar_t * FUN_005c4dc0(char *param_1,wchar_t *param_2,size_t param_3)

{
  if (param_1 == (char *)0x0) {
    *param_2 = L'\0';
    return param_2;
  }
  if (*param_1 == '\0') {
    *param_2 = L'\0';
    return param_2;
  }
  mbstowcs(param_2,param_1,param_3);
  return param_2;
}


