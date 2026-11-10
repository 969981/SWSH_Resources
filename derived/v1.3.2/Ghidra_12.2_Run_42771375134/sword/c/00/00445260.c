/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00445260; name: FUN_00445260
 */


undefined8 FUN_00445260(long param_1,long param_2,ulong param_3,uint param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined1 auStack_34 [4];
  
  param_3 = param_3 & 0xffffffff;
  if (*(int *)(param_2 + 0x48) == 0) {
    iVar1 = (int)(param_3 / 0xc) * 0xc;
    if ((param_4 & 1) == 0) {
      lVar2 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,iVar1);
      *(long *)(param_2 + 0x30) = lVar2;
      if (lVar2 == 0) {
        return 0x34;
      }
      *(byte *)(param_2 + 0x78) = *(byte *)(param_2 + 0x78) | 2;
      FUN_0044e640(param_1 + 8,lVar2,iVar1);
      lVar2 = *(long *)(param_2 + 0x30);
    }
    else {
      lVar2 = FUN_0044e300(param_1 + 8,iVar1);
      plVar3 = (long *)(param_2 + 0x30);
      if (*plVar3 == 0) {
        *plVar3 = lVar2;
      }
      FUN_0044e600(param_1 + 8);
      lVar2 = *plVar3;
    }
    if (lVar2 != 0) {
      *(int *)(param_2 + 0x4c) = (int)(param_3 / 0xc);
    }
  }
  else {
    FUN_0044df40(param_1 + 8,param_3,auStack_34);
  }
  return 1;
}


