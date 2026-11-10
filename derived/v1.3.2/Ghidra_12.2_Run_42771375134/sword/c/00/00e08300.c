/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e08300; name: FUN_00e08300
 */


void FUN_00e08300(long param_1)

{
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_00e09470();
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_00e08bc0();
  }
  *(undefined8 *)(param_1 + 0x60) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  return;
}


