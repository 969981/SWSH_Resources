/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007829e0; name: FUN_007829e0
 */


void FUN_007829e0(long param_1,undefined4 *param_2)

{
  long lVar1;
  undefined1 auStack_38 [8];
  undefined1 auStack_28 [8];
  
  *(undefined4 *)(param_1 + 0x88) = *param_2;
  lVar1 = FUN_00782df0(auStack_38,*(undefined8 *)(param_1 + 8));
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x90) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  *(long *)(param_1 + 0x90) = lVar1;
  FUN_019b1940(param_2[1],param_2[2],param_2[3],param_2[4]);
  lVar1 = FUN_00782ed0(auStack_28,*(undefined8 *)(param_1 + 8));
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x50) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  *(long *)(param_1 + 0x50) = lVar1;
  return;
}


