/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004da3f0; name: FUN_004da3f0
 */


void FUN_004da3f0(long *param_1,long *param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  ulong uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  
  uVar5 = *(uint *)(param_1 + 1);
  uVar1 = *(ushort *)((long)param_2 + 0x12);
  uVar4 = (ulong)(uVar5 & 0xff);
  uVar7 = (uint)uVar1;
  if ((uVar5 & 0xff) == 0 || uVar7 == 0) {
    return;
  }
  uVar6 = 0;
  if ((uVar5 >> 0xf & 1) == 0) goto LAB_004da488;
  do {
    uVar2 = uVar5 >> 0xc & 7;
    uVar2 = uVar2 - (uVar2 >> 1 & 1);
    uVar2 = (uVar2 & 0x33333333) + (uVar2 >> 2 & 0x33333333);
    uVar10 = (ulong)((uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18);
    if (uVar6 == uVar10) {
      uVar5 = (uVar5 & 0xff) - 1;
    }
    else {
      if (uVar6 <= uVar10) goto LAB_004da488;
      uVar5 = (int)uVar6 - 1;
    }
    while( true ) {
      puVar9 = (undefined4 *)(*param_1 + (ulong)uVar5 * (ulong)*(ushort *)(param_1 + 2) * 4);
      puVar12 = (undefined4 *)(*param_2 + uVar6 * 4);
      if (6 < uVar7 - 1) {
        puVar8 = puVar9;
        iVar3 = (uVar7 & 7) - uVar7;
        do {
          puVar11 = puVar12;
          *puVar11 = *puVar8;
          puVar12 = puVar11 + uVar4;
          *puVar12 = puVar8[1];
          puVar12 = puVar12 + uVar4;
          *puVar12 = puVar8[2];
          puVar12 = puVar12 + uVar4;
          *puVar12 = puVar8[3];
          puVar12 = puVar12 + uVar4;
          *puVar12 = puVar8[4];
          puVar12 = puVar12 + uVar4;
          *puVar12 = puVar8[5];
          puVar12 = puVar12 + uVar4;
          puVar9 = puVar8 + 8;
          *puVar12 = puVar8[6];
          puVar12[uVar4] = puVar8[7];
          iVar3 = iVar3 + 8;
          puVar8 = puVar9;
          puVar12 = puVar12 + uVar4 + uVar4;
        } while (iVar3 != 0);
        puVar12 = puVar11 + uVar4 * 8;
      }
      if ((uVar1 & 7) != 0) {
        iVar3 = -(uVar7 & 7);
        do {
          *puVar12 = *puVar9;
          puVar12 = puVar12 + uVar4;
          iVar3 = iVar3 + 1;
          puVar9 = puVar9 + 1;
        } while (iVar3 != 0);
      }
      uVar6 = uVar6 + 1;
      if (uVar6 == uVar4) {
        return;
      }
      uVar5 = *(uint *)(param_1 + 1);
      if ((uVar5 >> 0xf & 1) != 0) break;
LAB_004da488:
      uVar5 = (uint)uVar6;
    }
  } while( true );
}


