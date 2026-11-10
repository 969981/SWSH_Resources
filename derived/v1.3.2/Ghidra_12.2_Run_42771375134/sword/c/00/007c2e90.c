/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c2e90; name: FUN_007c2e90
 */


void FUN_007c2e90(long param_1)

{
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_006d0420();
  }
  if (*(long *)(param_1 + 0x158) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x158) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x158) = 0;
  }
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  return;
}


