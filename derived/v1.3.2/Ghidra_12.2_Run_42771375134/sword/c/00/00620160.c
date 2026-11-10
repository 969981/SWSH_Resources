/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00620160; name: FUN_00620160
 */


void FUN_00620160(long *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  byte *pbVar17;
  
  uVar9 = *(uint *)(param_1 + 5);
  if (0xfffe < uVar9) {
    *(undefined4 *)(param_1 + 5) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x2c) = 0;
    return;
  }
  lVar10 = *param_1;
  uVar15 = *(uint *)(param_1 + 7);
  uVar13 = *(uint *)((long)param_1 + 0x3c);
  lVar12 = *(long *)(lVar10 + 0x338);
  lVar11 = *(long *)(lVar10 + 0x330);
  pbVar17 = (byte *)param_1[9];
  uVar14 = *(uint *)(param_1 + 8);
  uVar8 = uVar15;
  if (uVar15 <= uVar9 + 1) {
    uVar8 = uVar9 + 1;
  }
  uVar9 = uVar8;
  if (uVar13 < uVar8) goto LAB_006202dc;
  do {
    uVar9 = uVar8;
    if (pbVar17 == (byte *)0x0) {
      uVar15 = *(uint *)(lVar10 + 0x20);
      if ((int)(uVar14 + uVar13) < 0) {
        do {
          uVar8 = uVar14 + uVar9 & 0xffff;
          if (uVar15 <= uVar8) break;
          if (uVar8 != 0) goto LAB_006203e0;
          uVar9 = uVar9 + 1;
        } while (uVar9 <= uVar13);
      }
      else if ((int)(uVar14 + uVar13) < 0x10000) {
        do {
          uVar8 = uVar9 + uVar14 & 0xffff;
          if (uVar8 < uVar15) {
            uVar5 = uVar9;
            if (uVar8 != 0) goto LAB_006203e0;
          }
          else {
            uVar5 = -uVar14;
            if (-1 < (int)(uVar9 + uVar14)) break;
          }
          uVar9 = uVar5 + 1;
        } while (uVar9 <= uVar13);
      }
      else {
        do {
          uVar5 = uVar9 + uVar14;
          uVar8 = uVar5 & 0xffff;
          if (uVar8 < uVar15) {
            uVar6 = uVar9;
            if (uVar8 != 0) goto LAB_006203e0;
          }
          else {
            uVar6 = -uVar14;
            if ((-1 < (int)uVar5) && (uVar6 = 0x10000 - uVar14, 0xffff < (int)uVar5)) break;
          }
          uVar9 = uVar6 + 1;
        } while (uVar9 <= uVar13);
      }
    }
    else {
      pbVar17 = pbVar17 + (uVar8 - uVar15) * 2;
      if (pbVar17 <= (byte *)(lVar11 + lVar12)) {
        do {
          uVar8 = CONCAT11(*pbVar17,pbVar17[1]) + uVar14 & 0xffff;
          if (CONCAT11(*pbVar17,pbVar17[1]) != 0 && uVar8 != 0) goto LAB_006203e0;
          uVar9 = uVar9 + 1;
          pbVar17 = pbVar17 + 2;
        } while (uVar9 <= uVar13);
      }
    }
LAB_006202dc:
    do {
      uVar8 = *(uint *)(param_1 + 6);
      uVar13 = *(int *)((long)param_1 + 0x34) + 1;
      if (uVar8 <= uVar13) {
LAB_006203d8:
        uVar8 = 0;
        uVar9 = 0xffffffff;
LAB_006203e0:
        *(uint *)(param_1 + 5) = uVar9;
        *(uint *)((long)param_1 + 0x2c) = uVar8;
        return;
      }
      uVar5 = uVar8 * 2;
      uVar16 = (ulong)uVar13;
      uVar7 = uVar16 << 1;
      while( true ) {
        puVar1 = (undefined1 *)(param_1[3] + 0xe + (uVar7 & 0xfffffffe));
        puVar2 = puVar1 + (uVar5 + 2);
        uVar13 = (uint)CONCAT11(*puVar1,puVar1[1]);
        *(uint *)((long)param_1 + 0x3c) = uVar13;
        uVar15 = (uint)CONCAT11(*puVar2,puVar2[1]);
        pbVar3 = puVar2 + uVar5;
        *(uint *)(param_1 + 7) = uVar15;
        pbVar17 = pbVar3 + uVar5;
        uVar14 = (int)(short)((ushort)*pbVar3 << 8) | (uint)pbVar3[1];
        *(uint *)(param_1 + 8) = uVar14;
        uVar4 = CONCAT11(*pbVar17,pbVar17[1]);
        if ((uVar13 == 0xffff && uVar8 - 1 <= uVar16) && uVar15 == 0xffff) {
          if (uVar4 == 0) {
            pbVar17 = (byte *)0x0;
            goto LAB_006201c8;
          }
          if ((byte *)(*(long *)(lVar10 + 0x330) + *(long *)(lVar10 + 0x338)) <
              pbVar17 + (ulong)uVar4 + 2) {
            uVar14 = 1;
            pbVar17 = (byte *)0x0;
            *(undefined4 *)(param_1 + 8) = 1;
            goto LAB_006201c8;
          }
        }
        if (uVar4 != 0xffff) break;
        uVar16 = uVar16 + 1;
        uVar7 = uVar7 + 2;
        if (uVar8 <= uVar16) goto LAB_006203d8;
      }
      pbVar17 = pbVar17 + uVar4;
      uVar16 = uVar16 & 0xffffffff;
      if (uVar4 == 0) {
        pbVar17 = (byte *)0x0;
      }
LAB_006201c8:
      param_1[9] = (long)pbVar17;
      *(int *)((long)param_1 + 0x34) = (int)uVar16;
      uVar8 = uVar15;
      if (uVar15 <= uVar9) {
        uVar8 = uVar9;
      }
      uVar9 = uVar8;
    } while (uVar13 < uVar8);
  } while( true );
}


