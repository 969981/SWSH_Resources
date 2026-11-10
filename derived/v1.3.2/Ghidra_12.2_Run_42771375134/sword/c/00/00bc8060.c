/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc8060; name: FUN_00bc8060
 */


void FUN_00bc8060(long param_1)

{
  float fVar1;
  float fVar2;
  
  FUN_00bc80e0(param_1,0,*(undefined1 *)(param_1 + 0x691));
  FUN_00bc80e0(param_1,1,*(undefined1 *)(param_1 + 0x692));
  fVar1 = *(float *)(param_1 + 0x6b8) - *(float *)(param_1 + 0x6a0);
  fVar2 = *(float *)(param_1 + 0x6bc) - *(float *)(param_1 + 0x6a4);
  *(float *)(param_1 + 0x6a8) = fVar1 * 0.25;
  *(float *)(param_1 + 0x6ac) = fVar2 * 0.25;
  *(float *)(param_1 + 0x6c0) = fVar1 * -0.25;
  *(float *)(param_1 + 0x6c4) = fVar2 * -0.25;
  *(undefined1 *)(param_1 + 0x693) = 0;
  return;
}


