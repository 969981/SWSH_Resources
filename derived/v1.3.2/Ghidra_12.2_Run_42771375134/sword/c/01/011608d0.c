/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011608d0; name: FUN_011608d0
 */


void FUN_011608d0(long param_1,uint param_2)

{
  if (*(char *)(param_1 + 0xb89) != '\0') {
    FUN_01038270(param_1,param_2 & 1);
    *(undefined1 *)(param_1 + 0xb89) = 0;
  }
  return;
}


