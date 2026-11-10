/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c68840; name: FUN_00c68840
 */


void FUN_00c68840(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined **local_80;
  undefined8 uStack_78;
  long *local_60;
  undefined **local_50;
  undefined1 *puStack_48;
  undefined ***local_30;
  
  local_60 = (long *)&local_80;
  puStack_48 = (undefined1 *)&local_80;
  local_80 = &PTR_LAB_0263fa58;
  local_50 = &PTR_LAB_0263fa10;
  uStack_78 = param_2;
  local_30 = &local_50;
  (**(code **)(**(long **)(param_1 + 0x90) + 0xb0))(*(long **)(param_1 + 0x90),&local_50);
  if (&local_50 == local_30) {
    pcVar1 = (code *)(*local_30)[4];
  }
  else {
    if (local_30 == (undefined ***)0x0) goto LAB_00c688b4;
    pcVar1 = (code *)(*local_30)[5];
  }
  (*pcVar1)();
LAB_00c688b4:
  if (&local_80 == (undefined ***)local_60) {
    pcVar1 = *(code **)(*local_60 + 0x20);
  }
  else {
    if (local_60 == (long *)0x0) {
      return;
    }
    pcVar1 = *(code **)(*local_60 + 0x28);
  }
  (*pcVar1)();
  return;
}


