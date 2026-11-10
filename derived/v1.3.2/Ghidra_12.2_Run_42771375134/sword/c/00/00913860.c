/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00913860; name: FUN_00913860
 */


void FUN_00913860(char *param_1,char param_2)

{
  char *pcVar1;
  
  if (((((*param_1 == '\0') || (pcVar1 = param_1 + 2, *pcVar1 != param_2)) &&
       ((param_1[3] == '\0' || (pcVar1 = param_1 + 5, *pcVar1 != param_2)))) &&
      ((param_1[6] == '\0' || (pcVar1 = param_1 + 8, *pcVar1 != param_2)))) &&
     ((param_1[9] == '\0' || (pcVar1 = param_1 + 0xb, *pcVar1 != param_2)))) {
    if (param_1[0xc] == '\0') {
      return;
    }
    pcVar1 = param_1 + 0xe;
    if (*pcVar1 != param_2) {
      return;
    }
  }
  *pcVar1 = '\x1f';
  return;
}


