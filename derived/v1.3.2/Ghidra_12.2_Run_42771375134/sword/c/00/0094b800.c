/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094b800; name: FUN_0094b800
 */


void FUN_0094b800(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  ulong uVar1;
  long local_48 [2];
  char *pcStack_38;
  undefined8 local_30;
  long local_28;
  
  uVar1 = FUN_008f89e0();
  if ((uVar1 & 1) != 0) {
    local_48[0] = FUN_008e1670(param_2);
    local_48[1] = 0x126418b4caa1a9c5;
    pcStack_38 = "INEFFECTIVE_SKILL";
    local_30 = 0x11;
    local_28 = 0;
    if (local_48[0] != 0) {
      (**(code **)(*(long *)(local_48[0] + 0x48) + 0x10))();
    }
    FUN_014af7f0(local_48 + 1,param_3,local_48);
    if (local_48[0] != 0) {
      (**(code **)(*(long *)(local_48[0] + 0x48) + 0x18))();
      local_48[0] = 0;
    }
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
  }
  return;
}


