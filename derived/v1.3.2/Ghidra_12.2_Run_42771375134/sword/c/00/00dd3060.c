/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dd3060; name: FUN_00dd3060
 */


ulong FUN_00dd3060(long *param_1,undefined8 param_2,long *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  byte *pbVar11;
  ulong *puVar12;
  long lVar13;
  bool bVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  byte *pbVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  lVar13 = *param_1;
  lVar19 = *param_3;
  local_68 = 0xffffffff;
  local_78 = 0xffffffffffffffff;
  local_70 = 0xffffffffffffffff;
  local_88 = 0xffffffffffffffff;
  local_80 = 0xffffffffffffffff;
  local_98 = 0xffffffffffffffff;
  local_90 = 0xffffffffffffffff;
  local_a8 = 0xffffffffffffffff;
  local_a0 = 0xffffffffffffffff;
  puVar15 = *(undefined8 **)(lVar13 + 0xb28);
  if (puVar15 < *(undefined8 **)(lVar13 + 0xb30)) {
    uVar16 = *(undefined8 *)(lVar13 + 0xb38);
    uVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(uVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(uVar5 + *(ulong *)(uVar5 + 0x80) * 8) = uVar16;
    *(long *)(uVar5 + 0x80) = *(long *)(uVar5 + 0x80) + 1;
    *puVar15 = local_a8;
    puVar15[3] = local_90;
    puVar15[4] = local_88;
    puVar15[1] = local_a0;
    puVar15[2] = local_98;
    *(undefined4 *)(puVar15 + 8) = local_68;
    puVar15[6] = local_78;
    puVar15[7] = local_70;
    puVar15[5] = local_80;
    *(long *)(uVar5 + 0x80) = *(long *)(uVar5 + 0x80) + -1;
    lVar20 = *(long *)(lVar13 + 0xb28) + 0x44;
    *(long *)(lVar13 + 0xb28) = lVar20;
    if (*(long *)(lVar19 + 0x328) == *(long *)(lVar19 + 800)) {
      return uVar5;
    }
  }
  else {
    uVar5 = FUN_00dd3490(lVar13 + 0xb20,&local_a8);
    lVar20 = *(long *)(lVar13 + 0xb28);
    if (*(long *)(lVar19 + 0x328) == *(long *)(lVar19 + 800)) {
      return uVar5;
    }
  }
  uVar5 = 0;
  pbVar17 = (byte *)((ulong)&local_a8 | 1);
  do {
    uVar18 = 0;
    bVar14 = false;
    while( true ) {
      iVar8 = (int)uVar18;
      uVar4 = snprintf((char *)&local_a8,0x20,"Collider%dPositionX",iVar8);
      uVar6 = (ulong)uVar4;
      uVar9 = 0xcbf29ce484222645;
      if ((byte)local_a8 != 0) {
        uVar9 = 0xcbf29ce484222645;
        pbVar11 = pbVar17;
        bVar3 = (byte)local_a8;
        do {
          uVar9 = (uVar9 ^ bVar3) * 0x100000001b3;
          bVar3 = *pbVar11;
          pbVar11 = pbVar11 + 1;
        } while (bVar3 != 0);
      }
      lVar13 = *(long *)(*(long *)(lVar19 + 0x218) + 0x290) + uVar5 * 0x4c0;
      puVar1 = *(ulong **)(lVar13 + 0xa8);
      puVar2 = *(ulong **)(lVar13 + 0xb0);
      if (puVar2 == puVar1) break;
      puVar12 = puVar1;
      if (*puVar1 != uVar9) {
        do {
          puVar12 = puVar12 + 4;
          if (puVar2 == puVar12) goto LAB_00dd3418;
        } while (*puVar12 != uVar9);
      }
      iVar7 = (int)((ulong)((long)puVar12 - (long)puVar1) >> 5);
      if (puVar12 == puVar2) {
        iVar7 = -1;
      }
      if (iVar7 < 0) break;
      lVar13 = lVar20 + uVar18 * 4;
      *(int *)(lVar13 + -0x40) = iVar7;
      uVar4 = snprintf((char *)&local_a8,0x20,"Collider%dPositionY",iVar8);
      uVar6 = (ulong)uVar4;
      uVar9 = 0xcbf29ce484222645;
      if ((byte)local_a8 != 0) {
        uVar9 = 0xcbf29ce484222645;
        pbVar11 = pbVar17;
        bVar3 = (byte)local_a8;
        do {
          uVar9 = (uVar9 ^ bVar3) * 0x100000001b3;
          bVar3 = *pbVar11;
          pbVar11 = pbVar11 + 1;
        } while (bVar3 != 0);
      }
      lVar10 = *(long *)(*(long *)(lVar19 + 0x218) + 0x290) + uVar5 * 0x4c0;
      puVar1 = *(ulong **)(lVar10 + 0xa8);
      puVar2 = *(ulong **)(lVar10 + 0xb0);
      if (puVar2 == puVar1) break;
      puVar12 = puVar1;
      if (*puVar1 != uVar9) {
        do {
          puVar12 = puVar12 + 4;
          if (puVar2 == puVar12) goto LAB_00dd3418;
        } while (*puVar12 != uVar9);
      }
      iVar7 = (int)((ulong)((long)puVar12 - (long)puVar1) >> 5);
      if (puVar12 == puVar2) {
        iVar7 = -1;
      }
      if (iVar7 < 0) break;
      *(int *)(lVar13 + -0x30) = iVar7;
      uVar4 = snprintf((char *)&local_a8,0x20,"Collider%dPositionZ",iVar8);
      uVar6 = (ulong)uVar4;
      uVar9 = 0xcbf29ce484222645;
      if ((byte)local_a8 != 0) {
        uVar9 = 0xcbf29ce484222645;
        pbVar11 = pbVar17;
        bVar3 = (byte)local_a8;
        do {
          uVar9 = (uVar9 ^ bVar3) * 0x100000001b3;
          bVar3 = *pbVar11;
          pbVar11 = pbVar11 + 1;
        } while (bVar3 != 0);
      }
      lVar10 = *(long *)(*(long *)(lVar19 + 0x218) + 0x290) + uVar5 * 0x4c0;
      puVar1 = *(ulong **)(lVar10 + 0xa8);
      puVar2 = *(ulong **)(lVar10 + 0xb0);
      if (puVar2 == puVar1) break;
      puVar12 = puVar1;
      if (*puVar1 != uVar9) {
        do {
          puVar12 = puVar12 + 4;
          if (puVar2 == puVar12) goto LAB_00dd3418;
        } while (*puVar12 != uVar9);
      }
      iVar7 = (int)((ulong)((long)puVar12 - (long)puVar1) >> 5);
      if (puVar12 == puVar2) {
        iVar7 = -1;
      }
      if (iVar7 < 0) break;
      *(int *)(lVar13 + -0x20) = iVar7;
      uVar4 = snprintf((char *)&local_a8,0x20,"Collider%dRadius",iVar8);
      uVar6 = (ulong)uVar4;
      uVar9 = 0xcbf29ce484222645;
      if ((byte)local_a8 != 0) {
        uVar9 = 0xcbf29ce484222645;
        pbVar11 = pbVar17;
        bVar3 = (byte)local_a8;
        do {
          uVar9 = (uVar9 ^ bVar3) * 0x100000001b3;
          bVar3 = *pbVar11;
          pbVar11 = pbVar11 + 1;
        } while (bVar3 != 0);
      }
      lVar10 = *(long *)(*(long *)(lVar19 + 0x218) + 0x290) + uVar5 * 0x4c0;
      puVar1 = *(ulong **)(lVar10 + 0xa8);
      puVar2 = *(ulong **)(lVar10 + 0xb0);
      if (puVar2 == puVar1) break;
      puVar12 = puVar1;
      if (*puVar1 != uVar9) {
        do {
          puVar12 = puVar12 + 4;
          if (puVar2 == puVar12) goto LAB_00dd3418;
        } while (*puVar12 != uVar9);
      }
      iVar8 = (int)((ulong)((long)puVar12 - (long)puVar1) >> 5);
      if (puVar12 == puVar2) {
        iVar8 = -1;
      }
      if (iVar8 < 0) break;
      uVar18 = uVar18 + 1;
      bVar14 = true;
      *(int *)(lVar13 + -0x10) = iVar8;
      if (3 < uVar18) goto LAB_00dd3450;
    }
LAB_00dd3418:
    if (bVar14) {
LAB_00dd3450:
      *(int *)(lVar20 + -0x44) = (int)uVar5;
      return uVar6;
    }
    uVar5 = uVar5 + 1;
    if ((ulong)((*(long *)(lVar19 + 0x328) - *(long *)(lVar19 + 800) >> 3) * -0x70a3d70a3d70a3d7) <=
        uVar5) {
      return uVar6;
    }
  } while( true );
}


