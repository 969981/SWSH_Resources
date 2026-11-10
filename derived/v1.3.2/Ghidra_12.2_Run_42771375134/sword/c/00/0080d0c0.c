/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0080d0c0; name: FUN_0080d0c0
 */


undefined8 FUN_0080d0c0(ulong *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  ulong uVar2;
  int iVar3;
  
  bVar1 = *param_2;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 == 0) goto LAB_0080d114;
  }
  else if (*(long *)(param_2 + 8) == 0) goto LAB_0080d114;
  if ((bVar1 & 1) == 0) {
    param_2[0] = 0;
    param_2[1] = 0;
  }
  else {
    **(undefined1 **)(param_2 + 0x10) = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
  }
LAB_0080d114:
  iVar3 = (int)param_1[6];
  if ((int)param_1[5] <= (int)param_1[6]) {
    iVar3 = (int)param_1[5];
  }
  if (iVar3 == 0x7fffffff) {
  }
  else {
    iVar3 = (iVar3 - (int)param_1[3]) + *(int *)((long)param_1 + 0x2c) +
            ((int)param_1[1] - (int)*param_1);
    if (((param_3 <= iVar3) && (0 < param_3)) && (0 < iVar3)) {
      std::string::reserve((ulong)param_2);
    }
  }
  do {
    uVar2 = *param_1;
    iVar3 = (int)param_1[1] - (int)uVar2;
    if (param_3 - iVar3 == 0 || param_3 < iVar3) {
      std::string::append((char *)param_2,uVar2);
      *param_1 = *param_1 + (long)param_3;
      return 1;
    }
    if (iVar3 != 0) {
      std::string::append((char *)param_2,uVar2);
      *param_1 = *param_1 + (long)iVar3;
    }
    uVar2 = FUN_0080cd70(param_1);
    param_3 = param_3 - iVar3;
  } while ((uVar2 & 1) != 0);
  return 0;
}


