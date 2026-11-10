/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094b8b0; name: FUN_0094b8b0
 */


void FUN_0094b8b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 uVar1;
  ulong uVar2;
  long local_48 [2];
  char *local_38;
  undefined8 local_30;
  long local_28;
  
  uVar2 = FUN_008f89e0();
  if ((uVar2 & 1) != 0) {
    uVar1 = FUN_008e1290(param_3);
    local_48[0] = FUN_008e1670(param_2);
    local_48[1] = 0x8e949e9aa7f0d3b3;
    local_38 = "USE_WARUAGAKI";
    local_30 = 0xd;
    local_28 = 0;
    if (local_48[0] != 0) {
      (**(code **)(*(long *)(local_48[0] + 0x48) + 0x10))();
    }
    FUN_014af6c0(local_48 + 1,uVar1,local_48);
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


