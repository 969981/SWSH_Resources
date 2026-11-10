/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bccb20; name: thunk_FUN_00bccb30
 */


undefined8 thunk_FUN_00bccb30(long param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lStack_40;
  long lStack_38;
  
  if (param_2 == 1) {
    if (param_3 == 0) {
      uVar4 = FUN_00884820(*(undefined8 *)(param_1 + 0x60));
      if (param_4 < uVar4) {
                    /* WARNING: Could not recover jumptable at 0x00bccc98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (**(code **)(**(long **)(param_1 + 0x60) + 0x50))
                          (*(long **)(param_1 + 0x60),param_4);
        return uVar6;
      }
      return 0;
    }
    iVar1 = param_3 - 1;
    uVar5 = FUN_0150a610(*(undefined8 *)(param_1 + 0x70),iVar1,param_4);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    uVar2 = FUN_0150a590(*(undefined8 *)(param_1 + 0x70),iVar1,param_4);
    uVar3 = FUN_0150a5c0(*(undefined8 *)(param_1 + 0x70),iVar1,param_4);
    lStack_40 = *(long *)(param_1 + 0x78);
    uVar6 = *(undefined8 *)(param_1 + 0x68);
    if (lStack_40 != 0) {
      (**(code **)(*(long *)(lStack_40 + 0x48) + 0x10))();
    }
    FUN_01505e60(uVar6,&lStack_40,uVar2,uVar3);
    if (lStack_40 != 0) {
      (**(code **)(*(long *)(lStack_40 + 0x48) + 0x18))();
      lStack_40 = 0;
    }
  }
  else {
    if (param_2 != 0) {
      return 0;
    }
    if (0x1f < param_3) {
      return 0;
    }
    if (0x1d < param_4) {
      return 0;
    }
    lStack_38 = *(long *)(param_1 + 0x78);
    uVar6 = *(undefined8 *)(param_1 + 0x68);
    if (lStack_38 != 0) {
      (**(code **)(*(long *)(lStack_38 + 0x48) + 0x10))();
    }
    FUN_01505e60(uVar6,&lStack_38,param_3,param_4);
    if (lStack_38 != 0) {
      (**(code **)(*(long *)(lStack_38 + 0x48) + 0x18))();
      lStack_38 = 0;
      uVar5 = FUN_008787d0(*(long *)(param_1 + 0x78));
      goto joined_r0x00bccc5c;
    }
  }
  uVar5 = FUN_008787d0(*(undefined8 *)(param_1 + 0x78));
joined_r0x00bccc5c:
  if ((uVar5 & 1) == 0) {
    return *(undefined8 *)(param_1 + 0x78);
  }
  return 0;
}


