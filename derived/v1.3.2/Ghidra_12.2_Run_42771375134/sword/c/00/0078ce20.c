/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0078ce20; name: FUN_0078ce20
 */


void FUN_0078ce20(long param_1)

{
  if ((*(long *)(param_1 + 0xe0) != 0) &&
     (*(int *)(param_1 + 0xe8) == *(int *)(*(long *)(param_1 + 0xe0) + 0x2c))) {
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined4 *)(param_1 + 0xe8) = 0xffffffff;
  }
  return;
}


