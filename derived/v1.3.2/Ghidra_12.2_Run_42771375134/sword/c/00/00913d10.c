/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00913d10; name: FUN_00913d10
 */


char FUN_00913d10(char *param_1,char param_2)

{
  char cVar1;
  char cVar2;
  
  cVar2 = false;
  if (*param_1 != '\0') {
    if (param_1[1] != param_2) {
      cVar2 = false;
      cVar1 = param_1[3];
      goto joined_r0x00913d34;
    }
    cVar2 = param_1[2] == '\x1f';
  }
  cVar1 = param_1[3];
joined_r0x00913d34:
  if ((cVar1 == '\0') || (param_1[4] != param_2)) {
    cVar1 = param_1[6];
  }
  else {
    if (param_1[5] == '\x1f') {
      cVar2 = cVar2 + '\x01';
    }
    cVar1 = param_1[6];
  }
  if (((cVar1 != '\0') && (param_1[7] == param_2)) && (param_1[8] == '\x1f')) {
    cVar2 = cVar2 + '\x01';
  }
  if (((param_1[9] != '\0') && (param_1[10] == param_2)) && (param_1[0xb] == '\x1f')) {
    cVar2 = cVar2 + '\x01';
  }
  if (((param_1[0xc] != '\0') && (param_1[0xd] == param_2)) && (param_1[0xe] == '\x1f')) {
    cVar2 = cVar2 + '\x01';
  }
  return cVar2;
}


