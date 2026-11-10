/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0044e300; name: FUN_0044e300
 */


long FUN_0044e300(long param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  uint local_34;
  
  puVar4 = PTR_DAT_02712a90;
  uVar3 = *(uint *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x30) == 0) {
    if (uVar3 <= param_2) {
      param_2 = uVar3;
    }
    lVar6 = *(long *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x10) = uVar3 - param_2;
    *(ulong *)(param_1 + 0x28) = lVar6 + (ulong)param_2;
  }
  else if (uVar3 < param_2) {
    uVar1 = param_2;
    if ((uVar3 & 0x1f) != 0) {
      uVar1 = param_2 + 0x1f;
    }
    lVar6 = FUN_00404750(*(undefined4 *)PTR_DAT_02712a90,uVar1,0x20);
    *(long *)(param_1 + 0x20) = lVar6;
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      uVar2 = 0;
      if ((uVar3 & 0x1f) != 0) {
        uVar2 = (ulong)(0x20 - (uVar3 & 0x1f));
      }
      lVar6 = lVar6 + uVar2;
      iVar5 = FUN_0044e400(param_1,lVar6,param_2,&local_34);
      if (iVar5 != 1 || local_34 != param_2) {
        FUN_004047f0(*(undefined4 *)puVar4,*(undefined8 *)(param_1 + 0x20));
        lVar6 = 0;
        *(undefined8 *)(param_1 + 0x20) = 0;
      }
    }
  }
  else {
    lVar6 = *(long *)(param_1 + 8);
    *(ulong *)(param_1 + 8) = lVar6 + (ulong)param_2;
    *(uint *)(param_1 + 0x10) = uVar3 - param_2;
  }
  return lVar6;
}


