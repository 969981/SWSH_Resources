/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a359d0; name: FUN_00a359d0
 */


void FUN_00a359d0(long param_1,int param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  switch(param_2) {
  case 0:
    break;
  case 1:
    lVar2 = 2;
    break;
  case 2:
    lVar2 = 5;
    break;
  case 3:
    return;
  default:
    lVar2 = 1;
  }
  if ((*(char *)(param_1 + 0x5f0) == '\0' || param_2 != 1) && ((param_3 & 1) != 0)) {
    FUN_00a1ab60();
    lVar2 = *(long *)(param_1 + 0x5d0);
    if (*(char *)(lVar2 + 0x3f0) == '\0') goto LAB_00a35a74;
LAB_00a35a44:
    lVar1 = lVar2 + 0x800;
  }
  else {
    FUN_00a1ab90(*(long *)(param_1 + 0x5d0) + lVar2 * 0x200);
    lVar2 = *(long *)(param_1 + 0x5d0);
    if (*(char *)(lVar2 + 0x3f0) != '\0') goto LAB_00a35a44;
LAB_00a35a74:
    lVar1 = lVar2 + 0x800;
    if (*(char *)(lVar2 + 0x5f0) == '\0') goto LAB_00a35a88;
  }
  if (*(char *)(lVar2 + 0x1f0) != '\0') {
    FUN_00a1ab60();
    return;
  }
LAB_00a35a88:
  FUN_00a1ab90(lVar1);
  return;
}


