/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01389680; name: FUN_01389680
 */


void FUN_01389680(long param_1)

{
  long lVar1;
  float fVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  
  fVar2 = (float)FUN_012dcb90();
  fVar2 = fVar2 + *(float *)(param_1 + 0xd0);
  *(float *)(param_1 + 0xd0) = fVar2;
  if (*(float *)(param_1 + 0x7c) < fVar2) {
    *(float *)(param_1 + 0xd0) = fVar2 - *(float *)(param_1 + 0x7c);
  }
  lVar1 = *(long *)(param_1 + 0xf0);
  if (lVar1 != 0) {
    uStack_28 = *(undefined8 *)(lVar1 + 0xa8);
    local_30 = *(undefined8 *)(lVar1 + 0xa0);
    FUN_012dc7f0(param_1,&local_30);
  }
  return;
}


