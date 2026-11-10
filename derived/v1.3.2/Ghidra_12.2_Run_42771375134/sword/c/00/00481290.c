/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00481290; name: FUN_00481290
 */


undefined8 * FUN_00481290(long *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  float fVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  float fVar17;
  
  puVar3 = PTR_DAT_02712a90;
  uVar1 = *(uint *)(param_1 + 1);
  lVar15 = *param_1;
  iVar8 = uVar1 - 1;
  if (iVar8 < 0) {
    lVar14 = lVar15;
    if (lVar15 != 0) goto joined_r0x0048147c;
  }
  else {
    fVar6 = (float)param_2;
    iVar12 = 0;
    do {
      while( true ) {
        iVar2 = iVar8 - iVar12;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        iVar2 = iVar12 + (iVar2 >> 1);
        lVar14 = *(long *)(lVar15 + (long)iVar2 * 8);
        fVar17 = *(float *)(lVar14 + 0x270);
        if (fVar17 != fVar6) {
          if (fVar6 <= fVar17) {
            if (fVar17 <= fVar6) goto LAB_00481374;
            goto LAB_00481310;
          }
          goto LAB_0048135c;
        }
        uVar16 = *(uint *)(lVar14 + 0x278);
        uVar9 = (uint)((ulong)param_2 >> 0x20);
        if (*(char *)((long)param_1 + 0x12) == '\0') break;
        if (uVar16 != param_3) {
          if (param_3 < uVar16) goto LAB_0048135c;
          if (param_3 <= uVar16) goto LAB_00481374;
        }
        else {
          if (uVar9 < *(uint *)(lVar14 + 0x274)) goto LAB_0048135c;
          if (uVar9 <= *(uint *)(lVar14 + 0x274)) goto LAB_00481374;
        }
LAB_00481310:
        iVar12 = iVar2 + 1;
        if (iVar8 < iVar12) goto LAB_00481464;
      }
      if (uVar16 != param_3) {
        if (uVar16 < param_3) goto LAB_0048135c;
        if (uVar16 <= param_3) goto LAB_00481374;
        goto LAB_00481310;
      }
      if (uVar9 <= *(uint *)(lVar14 + 0x274)) {
        if (uVar9 < *(uint *)(lVar14 + 0x274)) goto LAB_00481310;
LAB_00481374:
        lVar14 = lVar15 + (long)iVar2 * 8;
        goto joined_r0x0048147c;
      }
LAB_0048135c:
      iVar8 = iVar2 + -1;
    } while (iVar12 <= iVar8);
LAB_00481464:
    lVar14 = lVar15 + (long)iVar12 * 8;
joined_r0x0048147c:
    if (lVar14 != 0) {
      uVar16 = *(uint *)((long)param_1 + 0xc);
      if (uVar1 < uVar16) goto LAB_00481410;
      uVar16 = uVar16 + 8;
      puVar5 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar16 << 3);
      if (puVar5 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      puVar7 = (undefined8 *)*param_1;
      if ((puVar7 != (undefined8 *)0x0) && (puVar7 != puVar5)) {
        uVar9 = *(uint *)(param_1 + 1);
        if (uVar9 != 0) {
          *puVar5 = *puVar7;
          if (uVar9 != 1) {
            if (uVar9 == 2) {
              lVar10 = 1;
            }
            else {
              lVar4 = 0;
              do {
                lVar10 = lVar4;
                puVar5[lVar10 + 1] = *(undefined8 *)(*param_1 + lVar10 * 8 + 8);
                puVar5[lVar10 + 2] = *(undefined8 *)(*param_1 + lVar10 * 8 + 0x10);
                lVar4 = lVar10 + 2;
              } while (((ulong)uVar9 - 1) - (ulong)(~uVar9 & 1) != lVar10 + 2);
              lVar10 = lVar10 + 3;
              if ((~uVar9 & 1) == 0) goto LAB_004813fc;
            }
            puVar5[lVar10] = *(undefined8 *)(*param_1 + lVar10 * 8);
          }
LAB_004813fc:
          puVar7 = (undefined8 *)*param_1;
        }
        FUN_00404870(*(undefined4 *)puVar3,puVar7);
      }
      *param_1 = (long)puVar5;
      *(uint *)((long)param_1 + 0xc) = uVar16;
LAB_00481410:
      if (uVar16 <= uVar1) {
        return (undefined8 *)0x0;
      }
      uVar1 = *(uint *)(param_1 + 1);
      uVar13 = (ulong)(lVar14 - lVar15) >> 3;
      *(uint *)(param_1 + 1) = uVar1 + 1;
      if (uVar1 <= (uint)uVar13) {
        return (undefined8 *)(*param_1 + (uVar13 & 0xffffffff) * 8);
      }
      puVar5 = (undefined8 *)(*param_1 + (ulong)uVar1 * 8);
      do {
        puVar11 = puVar5 + -1;
        *puVar5 = *puVar11;
        puVar7 = (undefined8 *)(*param_1 + ((ulong)(lVar14 - lVar15) >> 3 & 0xffffffff) * 8);
        puVar5 = puVar11;
      } while (puVar7 < puVar11);
      return puVar7;
    }
  }
  uVar16 = *(uint *)((long)param_1 + 0xc);
  if (uVar1 < uVar16) goto LAB_00481510;
  uVar16 = uVar16 + 8;
  puVar5 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar16 << 3);
  if (puVar5 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar7 = (undefined8 *)*param_1;
  if ((puVar7 != (undefined8 *)0x0) && (puVar7 != puVar5)) {
    uVar9 = *(uint *)(param_1 + 1);
    if (uVar9 != 0) {
      *puVar5 = *puVar7;
      if (uVar9 != 1) {
        if (uVar9 == 2) {
          lVar14 = 1;
        }
        else {
          lVar15 = 0;
          do {
            lVar14 = lVar15;
            puVar5[lVar14 + 1] = *(undefined8 *)(*param_1 + lVar14 * 8 + 8);
            puVar5[lVar14 + 2] = *(undefined8 *)(*param_1 + lVar14 * 8 + 0x10);
            lVar15 = lVar14 + 2;
          } while (((ulong)uVar9 - 1) - (ulong)(~uVar9 & 1) != lVar14 + 2);
          lVar14 = lVar14 + 3;
          if ((~uVar9 & 1) == 0) goto LAB_004814fc;
        }
        puVar5[lVar14] = *(undefined8 *)(*param_1 + lVar14 * 8);
      }
LAB_004814fc:
      puVar7 = (undefined8 *)*param_1;
    }
    FUN_00404870(*(undefined4 *)puVar3,puVar7);
  }
  *param_1 = (long)puVar5;
  *(uint *)((long)param_1 + 0xc) = uVar16;
LAB_00481510:
  if (uVar1 < uVar16) {
    uVar1 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar1 + 1;
    return (undefined8 *)(*param_1 + (ulong)uVar1 * 8);
  }
  return (undefined8 *)0x0;
}


