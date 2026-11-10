/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0121b9e0; name: FUN_0121b9e0
 */


bool FUN_0121b9e0(char *param_1,char *param_2)

{
  ulong uVar1;
  
  if (*param_1 != *param_2) {
    return false;
  }
  if (param_1[4] == '\0') {
    if (param_2[4] != '\0') {
      return false;
    }
  }
  else {
    if (param_2[4] == '\0') {
      return false;
    }
    uVar1 = FUN_012228f0(param_1 + 8,param_2 + 8);
    if ((uVar1 & 1) == 0) {
      return false;
    }
  }
  uVar1 = FUN_0077d930(param_1 + 0x24,param_2 + 0x24);
  if ((uVar1 & 1) == 0) {
    return false;
  }
  if (*(int *)(param_1 + 0x40) != *(int *)(param_2 + 0x40)) {
    return false;
  }
  if (param_1[0x44] != param_2[0x44]) {
    return false;
  }
  if (param_1[0x45] != param_2[0x45]) {
    return false;
  }
  if (*(short *)(param_1 + 0x46) == *(short *)(param_2 + 0x46)) {
    return param_1[0x48] == param_2[0x48];
  }
  return false;
}


