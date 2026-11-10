/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01139300; name: FUN_01139300
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01139300(long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  long local_18;
  
  if (*(long *)(param_1 + 0x98) == 0) {
    local_18 = 0;
    FUN_01127f10();
  }
  else {
    FUN_01129330(&local_18);
    FUN_01127f10(local_18);
  }
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
    local_18 = 0;
  }
  uVar1 = FUN_011fca80(*(undefined8 *)PTR_DAT_02718f20);
  if ((uVar1 & 1) == 0) {
    if (*(long *)(param_1 + 0x80) == 0) {
      local_18 = 0;
      _DAT_00000064 = 1;
    }
    else {
      FUN_01128420(&local_18);
      *(undefined4 *)(local_18 + 100) = 1;
      if (local_18 != 0) {
        (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
        local_18 = 0;
      }
    }
    FUN_010364c0(*(undefined8 *)(param_1 + 0x360),1);
    FUN_01037030(*(undefined8 *)(param_1 + 0x368));
    uVar2 = 0x17;
  }
  else {
    uVar2 = 0x14;
  }
  *(undefined2 *)(param_1 + 0x3a7) = 0;
  *(undefined4 *)(param_1 + 0x7c) = uVar2;
  return;
}


