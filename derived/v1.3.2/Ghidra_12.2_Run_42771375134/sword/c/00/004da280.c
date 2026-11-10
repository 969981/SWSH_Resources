/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004da280; name: FUN_004da280
 */


void FUN_004da280(long *param_1,long *param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  long lVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  
  uVar7 = *(uint *)(param_1 + 1);
  uVar2 = *(ushort *)((long)param_2 + 0x12);
  uVar6 = (ulong)(uVar7 & 0xff);
  uVar9 = (uint)uVar2;
  if ((uVar7 & 0xff) == 0 || uVar9 == 0) {
    return;
  }
  uVar8 = 0;
  lVar12 = *param_1;
  if ((uVar7 >> 0xf & 1) == 0) goto LAB_004da320;
  do {
    uVar3 = uVar7 >> 0xc & 7;
    uVar3 = uVar3 - (uVar3 >> 1 & 1);
    uVar3 = (uVar3 & 0x33333333) + (uVar3 >> 2 & 0x33333333);
    uVar5 = (ulong)((uVar3 + (uVar3 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18);
    if (uVar8 == uVar5) {
      uVar7 = (uVar7 & 0xff) - 1;
    }
    else {
      if (uVar8 <= uVar5) goto LAB_004da320;
      uVar7 = (int)uVar8 - 1;
    }
    while( true ) {
      puVar14 = (undefined4 *)(lVar12 + uVar8 * 4);
      puVar11 = (undefined4 *)(*param_2 + (ulong)uVar7 * (ulong)*(ushort *)(param_2 + 2) * 4);
      if (6 < uVar9 - 1) {
        puVar10 = puVar11;
        iVar4 = (uVar9 & 7) - uVar9;
        do {
          puVar13 = puVar14;
          puVar11 = puVar13 + uVar6;
          *puVar10 = *puVar13;
          puVar14 = puVar11 + uVar6;
          puVar10[1] = *puVar11;
          puVar11 = puVar14 + uVar6;
          puVar10[2] = *puVar14;
          puVar14 = puVar11 + uVar6;
          puVar10[3] = *puVar11;
          puVar11 = puVar14 + uVar6;
          puVar10[4] = *puVar14;
          puVar14 = puVar11 + uVar6;
          puVar10[5] = *puVar11;
          puVar10[6] = *puVar14;
          puVar11 = puVar10 + 8;
          puVar10[7] = puVar14[uVar6];
          iVar4 = iVar4 + 8;
          puVar10 = puVar11;
          puVar14 = puVar14 + uVar6 + uVar6;
        } while (iVar4 != 0);
        puVar14 = puVar13 + uVar6 * 8;
      }
      if ((uVar2 & 7) != 0) {
        iVar4 = -(uVar9 & 7);
        do {
          uVar1 = *puVar14;
          puVar14 = puVar14 + uVar6;
          iVar4 = iVar4 + 1;
          *puVar11 = uVar1;
          puVar11 = puVar11 + 1;
        } while (iVar4 != 0);
      }
      uVar8 = uVar8 + 1;
      if (uVar8 == uVar6) {
        return;
      }
      uVar7 = *(uint *)(param_1 + 1);
      lVar12 = *param_1;
      if ((uVar7 >> 0xf & 1) != 0) break;
LAB_004da320:
      uVar7 = (uint)uVar8;
    }
  } while( true );
}


