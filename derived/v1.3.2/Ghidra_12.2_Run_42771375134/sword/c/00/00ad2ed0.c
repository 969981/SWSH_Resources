/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ad2ed0; name: FUN_00ad2ed0
 */


void FUN_00ad2ed0(long *param_1,uint param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = (**(code **)(*param_1 + 400))();
  if ((uVar1 & 1) == 0) {
    return;
  }
  if ((param_4 & 1) != 0) {
    uVar2 = 0xffff;
    if (param_3 != 0) {
      uVar2 = param_3;
    }
    if ((uVar2 & 1) != 0) {
      uVar2 = *(uint *)((long)param_1 + 0x4bc) | 1;
      if ((param_2 & 1) == 0) {
        uVar2 = *(uint *)((long)param_1 + 0x4bc) & 0xfffffffe;
      }
      *(uint *)((long)param_1 + 0x4bc) = uVar2;
    }
    if (param_1[0xac] != 0) {
      FUN_014a6050(param_1[0xac],param_2 & 1);
    }
    if ((param_2 & 1) == 0) {
      return;
    }
  }
  if (param_3 == 0) {
    uVar2 = 0xffff;
    if ((param_2 & 1) == 0) {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = *(uint *)((long)param_1 + 0x4bc) & (param_3 ^ 0xffffffff);
    if ((param_2 & 1) != 0) {
      uVar2 = *(uint *)((long)param_1 + 0x4bc) | param_3;
    }
  }
  *(uint *)((long)param_1 + 0x4bc) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00ad2f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x200))(param_1);
  return;
}


