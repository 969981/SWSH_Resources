/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001206c0; name: FUN_001206c0
 */


void FUN_001206c0(long param_1)

{
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x210) = 0;
  FUN_0011c920(param_1 + 0x218);
                    /* WARNING: Subroutine does not return */
  memset(*(void **)(param_1 + 0x1c60),0,(ulong)(uint)(*(int *)(param_1 + 0x1c68) << 2));
}


