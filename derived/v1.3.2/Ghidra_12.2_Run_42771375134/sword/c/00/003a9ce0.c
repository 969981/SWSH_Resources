/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a9ce0; name: FUN_003a9ce0
 */


void FUN_003a9ce0(float param_1,long param_2)

{
  undefined4 uVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_2 + 0x38);
  *(float *)(param_2 + 0x38) = param_1;
  uVar1 = FUN_003a93c0(*(float *)(param_2 + 0x3c) * fVar2 *
                       (float)(uint)(1 << (ulong)(*(uint *)(param_2 + 0x50) & 0x1f)),
                       *(float *)(param_2 + 0x3c) * param_1);
  *(undefined4 *)(param_2 + 0x50) = uVar1;
  return;
}


