/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c2870; name: FUN_014c2870
 */


void FUN_014c2870(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  ulong uVar1;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  
  uVar1 = FUN_014c28d0();
  if ((uVar1 & 1) != 0) {
    local_40 = param_3;
    local_38 = param_5;
    uStack_34 = param_6;
    FUN_014c2c40(param_1,&local_40);
  }
  return;
}


