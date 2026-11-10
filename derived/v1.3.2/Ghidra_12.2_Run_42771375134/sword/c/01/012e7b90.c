/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e7b90; name: FUN_012e7b90
 */


void FUN_012e7b90(long param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long local_58 [3];
  undefined1 local_40 [16];
  
  if (((*(int *)(param_1 + 0x500) != 4) &&
      (uVar1 = FUN_01321d20(*(undefined8 *)(param_1 + 0x4e0)), (uVar1 & 1) == 0)) &&
     (uVar1 = FUN_01321f40(*(undefined8 *)(param_1 + 0x4e0)), (uVar1 & 1) == 0)) {
    uVar1 = FUN_012e7ca0(param_1);
    if ((uVar1 & 1) == 0) {
      local_40 = FUN_0130fa00(param_1);
      local_58[1] = 0xd9c841b0fbb8e6cd;
      local_58[2] = 0;
      uVar1 = FUN_012ecf40(local_58 + 3,local_58 + 1);
      if ((uVar1 & 1) == 0) {
        return;
      }
    }
    uVar2 = *(undefined8 *)(param_1 + 0x4e0);
    local_58[0] = *param_2;
    if (local_58[0] != 0) {
      (**(code **)(*(long *)(local_58[0] + 0x48) + 0x10))();
    }
    FUN_01322540(uVar2,local_58);
    if (local_58[0] != 0) {
      (**(code **)(*(long *)(local_58[0] + 0x48) + 0x18))();
      local_58[0] = 0;
    }
    local_40._0_8_ = 0xd9c841b0fbb8e6cd;
    local_40._8_8_ = 0;
    FUN_0130fad0(param_1,local_58 + 3,0);
    FUN_013100e0(param_1,0xb1975cacecc2fae1);
  }
  return;
}


