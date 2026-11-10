/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0146bc50; name: FUN_0146bc50
 */


void FUN_0146bc50(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  
  if (*(long *)(param_1 + 0x1f8) == -0x340d631b7bddd9bb || *(long *)(param_1 + 0x1f8) == 0) {
    FUN_0167ba30(*(undefined8 *)(param_1 + 8),param_1 + 0xa8);
    FUN_0167bdb0(0,*(undefined8 *)(param_1 + 8),param_1 + 0xa8);
    return;
  }
  lVar1 = param_1 + 0x1f8;
  FUN_0167ba30(*(undefined8 *)(param_1 + 8),lVar1);
  fVar4 = (float)FUN_0167bf30(*(undefined8 *)(param_1 + 8),lVar1);
  uVar3 = (uint)fVar4;
  uVar2 = 0;
  if (uVar3 != 0) {
    uVar2 = param_2 / uVar3;
  }
  FUN_0167bdb0((float)(param_2 - uVar2 * uVar3),*(undefined8 *)(param_1 + 8),lVar1);
  return;
}


