/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01141350; name: FUN_01141350
 */


bool FUN_01141350(long param_1,long param_2,char *param_3)

{
  char cVar1;
  ulong uVar2;
  
  uVar2 = FUN_01142380(param_1,param_2,0);
  if (((((uVar2 & 1) != 0) ||
       (uVar2 = FUN_01142380(param_1 + 0x30,param_2 + 0x30,0), (uVar2 & 1) != 0)) ||
      (uVar2 = FUN_01142380(param_1 + 0x60,param_2 + 0x60,0), (uVar2 & 1) != 0)) ||
     (uVar2 = FUN_01142380(param_1 + 0x90,param_2 + 0x90,0), (uVar2 & 1) != 0)) {
    *param_3 = '\x01';
  }
  if ((*(short *)(param_1 + 0xc0) == *(short *)(param_2 + 0xc0)) &&
     (*(short *)(param_1 + 0xc2) == *(short *)(param_2 + 0xc2))) {
    if (*(int *)(param_1 + 0xc4) != *(int *)(param_2 + 0xc4)) goto LAB_01141430;
LAB_011413ec:
    if (*(char *)(param_1 + 200) != *(char *)(param_2 + 200)) goto LAB_01141448;
  }
  else {
    param_3[1] = '\x01';
    if (*(int *)(param_1 + 0xc4) == *(int *)(param_2 + 0xc4)) goto LAB_011413ec;
LAB_01141430:
    param_3[2] = '\x01';
    if (*(char *)(param_1 + 200) != *(char *)(param_2 + 200)) {
LAB_01141448:
      param_3[3] = '\x01';
      cVar1 = *param_3;
      goto joined_r0x01141454;
    }
  }
  cVar1 = *param_3;
joined_r0x01141454:
  if (cVar1 != '\0') {
    return true;
  }
  if (param_3[1] != '\0') {
    return true;
  }
  if (param_3[2] == '\0') {
    return param_3[3] != '\0';
  }
  return true;
}


