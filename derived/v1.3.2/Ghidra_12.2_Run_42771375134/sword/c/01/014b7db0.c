/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b7db0; name: FUN_014b7db0
 */


void FUN_014b7db0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  uVar1 = FUN_0087d610(param_1,2);
  if ((uVar1 & 1) == 0) {
    local_30 = 0;
    uStack_28 = 0;
    local_40 = 0;
    uStack_38 = 0;
    FUN_01524c20(param_2,&local_40);
    FUN_0087d0f0(param_1,&local_40);
  }
  FUN_014b7d00(param_1);
  FUN_0087d600(param_1,0);
  FUN_00878370(param_1);
  FUN_008797a0(param_1,0);
  return;
}


