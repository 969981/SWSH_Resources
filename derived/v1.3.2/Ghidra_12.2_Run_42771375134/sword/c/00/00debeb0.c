/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00debeb0; name: FUN_00debeb0
 */


void FUN_00debeb0(undefined4 param_1,float param_2,long param_3)

{
  float fVar1;
  
  *(undefined1 *)(param_3 + 0xc4) = 1;
  *(undefined4 *)(param_3 + 200) = param_1;
  fVar1 = DAT_01d4bec4;
  if (0.0 <= param_2) {
    fVar1 = param_2;
  }
  *(float *)(param_3 + 0xcc) = fVar1;
  return;
}


