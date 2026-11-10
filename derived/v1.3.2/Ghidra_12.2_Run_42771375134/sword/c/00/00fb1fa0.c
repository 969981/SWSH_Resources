/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fb1fa0; name: FUN_00fb1fa0
 */


void FUN_00fb1fa0(long param_1)

{
  if (*(long *)(param_1 + 0x3f8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x3f8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x3f8) = 0;
  }
  if (*(long *)(param_1 + 0x400) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x400) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x400) = 0;
  }
  *(undefined8 *)(param_1 + 0x408) = 0x1e00000000;
  *(undefined4 *)(param_1 + 0x410) = 0x1e;
  return;
}


