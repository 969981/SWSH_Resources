/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0120fba0; name: FUN_0120fba0
 */


uint FUN_0120fba0(long *param_1)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  undefined8 uVar4;
  short *psVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 local_40;
  undefined2 local_3c;
  undefined4 local_38;
  undefined2 local_34;
  undefined4 local_28;
  undefined2 local_24;
  
  lVar9 = *(long *)PTR_DAT_02716b80;
  if (lVar9 != 0) {
    (**(code **)(*param_1 + 0x10))();
    uVar4 = FUN_007c1ae0();
    local_28 = (undefined4)uVar4;
    local_24 = (undefined2)((ulong)uVar4 >> 0x20);
    psVar5 = (short *)FUN_007c1b40(&local_28);
    sVar1 = *psVar5;
    lVar6 = (**(code **)(*param_1 + 0x10))(param_1);
    sVar2 = FUN_0075dcb0(lVar6 + 2,0x1fe);
    if (sVar1 == sVar2) {
      (**(code **)(*param_1 + 0x10))(param_1);
      uVar4 = FUN_007c1ae0();
      local_38 = (undefined4)uVar4;
      local_34 = (undefined2)((ulong)uVar4 >> 0x20);
      uVar4 = FUN_007c1b50(&local_38);
      uVar7 = FUN_007c1800(uVar4,PTR_DAT_02716b88);
      if ((uVar7 & 1) != 0) {
        (**(code **)(*param_1 + 0x10))(param_1);
        uVar4 = FUN_007c1ae0();
        local_40 = (undefined4)uVar4;
        local_3c = (undefined2)((ulong)uVar4 >> 0x20);
        uVar4 = FUN_007c1b50(&local_40);
        uVar8 = FUN_007c26b0(lVar9);
        uVar3 = FUN_007c1a20(uVar4,uVar8);
        goto LAB_0120fc94;
      }
    }
  }
  uVar3 = 0;
LAB_0120fc94:
  return uVar3 & 1;
}


