/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d94040; name: FUN_00d94040
 */


void FUN_00d94040(long param_1,undefined4 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  *(undefined4 *)(param_1 + 0xa8) = 1;
  *(undefined4 *)(param_1 + 0xac) = param_2;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  return;
}


