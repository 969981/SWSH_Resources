/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e93d0; name: FUN_003e93d0
 */


void FUN_003e93d0(long param_1,undefined4 *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x720);
  *(undefined4 *)(lVar1 + 0x78c) = *param_2;
  *(undefined4 *)(lVar1 + 0x790) = param_2[1];
  *(undefined4 *)(lVar1 + 0x794) = param_2[2];
  *(undefined4 *)(lVar1 + 0x798) = param_2[3];
  *(undefined4 *)(lVar1 + 0x79c) = param_2[4];
  *(undefined4 *)(lVar1 + 0x7a0) = param_2[5];
  return;
}


