/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00780b80; name: FUN_00780b80
 */


void FUN_00780b80(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x1d0;
  uVar4 = FUN_00781e50(lVar1);
  if ((float)uVar4 < 0.0) {
    return;
  }
  *(float *)(param_1 + 0xa4) = (float)uVar4;
  FUN_00781c40(lVar1);
  uVar2 = FUN_007818a0(uVar4,lVar1);
  if ((uVar2 & 1) == 0) {
    if (*(int *)(param_1 + 0xa8) != 1) goto LAB_00780be4;
    uVar3 = 3;
  }
  else {
    uVar3 = 4;
  }
  *(undefined4 *)(param_1 + 0xa8) = uVar3;
LAB_00780be4:
  uVar3 = FUN_00781c30(lVar1);
  *(undefined4 *)(param_1 + 0xa0) = uVar3;
  return;
}


