/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013896f0; name: FUN_013896f0
 */


void FUN_013896f0(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0xd8) == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0xd0) = 0;
  FUN_00794740();
  FUN_007946a0(*(undefined8 *)(param_1 + 0xd8),1);
  if (*(long *)(param_1 + 0xe0) != 0) {
    FUN_00794740();
    FUN_007946a0(*(undefined8 *)(param_1 + 0xe0),1);
  }
  lVar1 = *(long *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar1 = *(long *)(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar1 = *(long *)(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar1 = *(long *)(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  *(undefined4 *)(param_1 + 200) = 0;
  FUN_012dc480(param_1,1);
  return;
}


