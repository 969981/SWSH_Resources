/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c687d0; name: FUN_00c687d0
 */


void FUN_00c687d0(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined **local_50;
  undefined8 uStack_48;
  long *local_30;
  
  local_30 = (long *)&local_50;
  local_50 = &PTR_LAB_0263fa10;
  uStack_48 = param_2;
  (**(code **)(**(long **)(param_1 + 0x90) + 0xb0))(*(long **)(param_1 + 0x90),&local_50);
  if (&local_50 == (undefined ***)local_30) {
    pcVar1 = *(code **)(*local_30 + 0x20);
  }
  else {
    if (local_30 == (long *)0x0) {
      return;
    }
    pcVar1 = *(code **)(*local_30 + 0x28);
  }
  (*pcVar1)();
  return;
}


