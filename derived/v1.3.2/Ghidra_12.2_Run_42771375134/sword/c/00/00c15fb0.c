/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c15fb0; name: FUN_00c15fb0
 */


void FUN_00c15fb0(long param_1,long *param_2)

{
  *(undefined1 *)(param_1 + 0x868) = 0;
  *(long **)(param_1 + 0x860) = param_2;
  FUN_00c14440(param_1,(ulong)(param_2[1] - *param_2) >> 3);
  return;
}


