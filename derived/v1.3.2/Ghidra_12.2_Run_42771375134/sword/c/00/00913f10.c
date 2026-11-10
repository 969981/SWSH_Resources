/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00913f10; name: FUN_00913f10
 */


undefined8 FUN_00913f10(char *param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  
  if ((*param_1 != '\0') && (param_1[2] == param_3)) {
    uVar1 = FUN_008f8d70(param_2,0);
    return uVar1;
  }
  if ((param_1[3] != '\0') && (param_1[5] == param_3)) {
    uVar1 = FUN_008f8d70(param_2,1);
    return uVar1;
  }
  if ((param_1[6] != '\0') && (param_1[8] == param_3)) {
    uVar1 = FUN_008f8d70(param_2,2);
    return uVar1;
  }
  if ((param_1[9] != '\0') && (param_1[0xb] == param_3)) {
    uVar1 = FUN_008f8d70(param_2,3);
    return uVar1;
  }
  if ((param_1[0xc] == '\0') || (param_1[0xe] != param_3)) {
    return 0;
  }
  uVar1 = FUN_008f8d70(param_2,4);
  return uVar1;
}


