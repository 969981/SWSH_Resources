/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c7790; name: FUN_004c7790
 */


void FUN_004c7790(long *param_1,long param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  
  uVar1 = *(uint *)(*(long *)(param_1[0xe] + 0x18) + 0x26b);
  if (*(char *)(param_2 + 0x34) == '\0') {
    if ((uVar1 >> 0xc & 1) == 0) {
      bVar2 = false;
    }
    else {
      bVar2 = *(int *)(*(long *)(param_1[0xe] + 0x18) + 0x2b8) == -1;
    }
  }
  else {
    bVar2 = true;
  }
  if ((uVar1 >> 0xe & 1) == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = (int)param_1[0x10] == 1;
  }
  if (bVar2 || *(int *)(param_2 + 0x30) != 0x11) {
    if (!(bool)(bVar2 | *(int *)(param_2 + 0x30) == 2)) {
      if (bVar3) {
                    /* WARNING: Could not recover jumptable at 0x004c783c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x98))(param_1);
        return;
      }
      return;
    }
  }
  else {
    lVar5 = param_1[0xf];
    if (lVar5 != 0) {
      param_1[0xf] = 0;
      FUN_004dad30(param_1,0);
      iVar4 = FUN_004dc200(param_1,lVar5,1,0);
      if ((iVar4 == 1) && (iVar4 = FUN_004db4a0(param_1), iVar4 == 1)) {
        FUN_004ddaf0(lVar5);
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x004c78a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))(param_1);
  return;
}


