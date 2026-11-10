/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e60e00; name: FUN_00e60e00
 */


void FUN_00e60e00(long param_1,undefined8 *param_2)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = (float)((ulong)*(undefined8 *)(param_1 + 0xb50) >> 0x20);
  fVar4 = (float)((ulong)*param_2 >> 0x20);
  bVar1 = false;
  if (((float)*(undefined8 *)(param_1 + 0xb50) == (float)*param_2) &&
     (bVar1 = false, !NAN(fVar3) && !NAN(fVar4))) {
    bVar1 = fVar3 == fVar4;
  }
  fVar3 = (float)*(undefined8 *)(param_1 + 0xb58);
  bVar2 = false;
  if ((bVar1) && (bVar2 = false, !NAN(fVar3) && !NAN((float)param_2[1]))) {
    bVar2 = fVar3 == (float)param_2[1];
  }
  if (bVar2) {
    return;
  }
  FUN_00e5edc0(*(undefined4 *)(param_1 + 0x4ec));
  return;
}


