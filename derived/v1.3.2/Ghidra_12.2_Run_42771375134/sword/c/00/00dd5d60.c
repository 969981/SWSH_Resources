/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dd5d60; name: FUN_00dd5d60
 */


bool FUN_00dd5d60(undefined8 *param_1,long param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  
  if ((int)param_3 < 3) {
    return false;
  }
  uVar8 = 0;
  uVar6 = 0;
  do {
    puVar3 = (undefined8 *)(param_2 + uVar8 * 0x10);
    bVar5 = (ulong)param_3 - 1 != uVar8;
    uVar8 = uVar8 + 1;
    uVar2 = 0;
    if (bVar5) {
      uVar2 = uVar8 & 0xffffffff;
    }
    puVar4 = (undefined8 *)(param_2 + uVar2 * 0x10);
    fVar9 = (float)*puVar3;
    fVar10 = (float)puVar3[1];
    iVar7 = -1;
    if (0.0 <= ((float)*puVar4 - fVar9) * ((float)param_1[1] - fVar10) -
               ((float)puVar4[1] - fVar10) * ((float)*param_1 - fVar9)) {
      iVar7 = 1;
    }
    uVar6 = iVar7 + uVar6;
  } while (param_3 != uVar8);
  uVar1 = -uVar6;
  if (-1 < (int)uVar6) {
    uVar1 = uVar6;
  }
  return uVar1 == param_3;
}


