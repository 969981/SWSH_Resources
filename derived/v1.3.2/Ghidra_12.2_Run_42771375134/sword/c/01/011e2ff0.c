/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011e2ff0; name: FUN_011e2ff0
 */


void FUN_011e2ff0(long param_1,int param_2)

{
  *(int *)(param_1 + 0xcf0) = param_2;
  FUN_012ae3d0(param_1 + 0xce0,param_2 * 1000);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0xcf0);
  *(undefined4 *)(param_1 + 0xcf4) = 0;
  *(undefined1 *)(param_1 + 0xcf8) = 1;
  return;
}


