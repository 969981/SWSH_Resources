/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01426920; name: FUN_01426920
 */


void FUN_01426920(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *local_40;
  char *local_38;
  undefined8 local_30;
  long local_28;
  
  uVar2 = *param_2;
  local_40 = &DAT_80a8e808288e407;
  uVar1 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_40);
  FUN_016a66b0(uVar2,uVar1);
  local_40 = (undefined1 *)0xea4ea6c0f1e3e00c;
  local_38 = "Play_Camp_Eating_Curry_Introduce_Efx_Birthday";
  local_30 = 0x2d;
  local_28 = 0;
  FUN_012d6d40(&local_40);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


