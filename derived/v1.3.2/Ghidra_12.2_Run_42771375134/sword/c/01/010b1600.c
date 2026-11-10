/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010b1600; name: FUN_010b1600
 */


void FUN_010b1600(long param_1,uint param_2)

{
  byte *pbVar1;
  uint *puVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong *puVar8;
  long lVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  uint local_78;
  uint uStack_74;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar6 = *(long *)PTR_DAT_027108d8;
  puVar2 = (uint *)(lVar6 + 0x11aec);
  lVar7 = *(long *)(param_1 + 0x600);
  uVar3 = *puVar2;
  uVar16 = *(ulong *)(lVar7 + 0xe8);
  if ((int)uVar16 != 0) {
    if ((uVar16 & 0xffffffff) == 1) {
      lVar9 = 0;
    }
    else {
      lVar17 = 0;
      lVar9 = 0;
      do {
        *(undefined1 *)(*(long *)(lVar7 + 0xe0) + lVar17 + 4) = 1;
        lVar7 = *(long *)(*(long *)(param_1 + 0x600) + 0xe0) + lVar17;
        lVar17 = lVar17 + 0x10;
        *(undefined1 *)(lVar7 + 0xc) = 1;
        lVar7 = *(long *)(param_1 + 0x600);
        lVar9 = lVar9 + 2;
      } while ((uVar16 & 0xffffffff) - (uVar16 & 1) != lVar9);
    }
    if ((uVar16 & 1) != 0) {
      *(undefined1 *)(*(long *)(lVar7 + 0xe0) + lVar9 * 8 + 4) = 1;
      lVar7 = *(long *)(param_1 + 0x600);
    }
    puVar10 = *(ulong **)(lVar7 + 0xe0);
    lVar17 = *(long *)(lVar7 + 0xe8);
    puVar8 = puVar10 + lVar17;
    if ((lVar17 != 0) && ((*puVar10 & 0x100000000) == 0)) {
      lVar9 = lVar17 * 8;
      do {
        lVar9 = lVar9 + -8;
        if (lVar9 == 0) goto LAB_010b17d8;
        pbVar1 = (byte *)((long)puVar10 + 0xc);
        puVar10 = puVar10 + 1;
      } while ((*pbVar1 & 1) == 0);
    }
    if (puVar8 != puVar10) {
      puVar11 = puVar10 + 1;
      if (puVar11 == puVar8) {
        if (puVar8 == puVar10) goto LAB_010b17d8;
      }
      else {
        uVar14 = (long)(puVar8 + -2) - (long)puVar10;
        puVar12 = puVar8 + -2;
        puVar13 = puVar10;
        if (((uint)uVar14 >> 3 & 1) == 0) {
          puVar12 = puVar10;
          if ((puVar10[1] >> 0x20 & 1) == 0) {
            puVar12 = puVar10 + 1;
            *puVar10 = puVar10[1];
          }
          puVar11 = puVar10 + 2;
          puVar13 = puVar12;
        }
        puVar10 = puVar12;
        if (7 < uVar14) {
          puVar10 = puVar13;
          do {
            while ((*puVar11 >> 0x20 & 1) == 0) {
              puVar10 = puVar10 + 1;
              *puVar13 = *puVar11;
              uVar14 = puVar11[1];
              puVar13 = puVar10;
              if ((uVar14 >> 0x20 & 1) != 0) goto LAB_010b177c;
LAB_010b17a0:
              puVar10 = puVar10 + 1;
              *puVar13 = uVar14;
              puVar11 = puVar11 + 2;
              puVar13 = puVar10;
              if (puVar11 == puVar8) goto LAB_010b17b8;
            }
            uVar14 = puVar11[1];
            if ((uVar14 >> 0x20 & 1) == 0) goto LAB_010b17a0;
LAB_010b177c:
            puVar11 = puVar11 + 2;
          } while (puVar11 != puVar8);
        }
LAB_010b17b8:
        lVar17 = *(long *)(lVar7 + 0xe8);
        puVar8 = (ulong *)(*(long *)(lVar7 + 0xe0) + lVar17 * 8);
        if (puVar8 == puVar10) goto LAB_010b17d8;
      }
      *(long *)(lVar7 + 0xe8) = lVar17 - ((long)puVar8 - (long)puVar10 >> 3);
    }
  }
LAB_010b17d8:
  if (param_2 != 0xffffffff) {
    lVar6 = lVar6 + 0x108;
    if (*puVar2 == 0) {
      FUN_00ffcf80(param_1 + 0x100,"anime_stamp_on");
    }
    *puVar2 = param_2;
    FUN_010b19f0(lVar6);
    FUN_010b1dc0(lVar6);
  }
  puVar4 = PTR_DAT_02710860;
  if (*puVar2 == 0) {
    iVar5 = -1;
  }
  else {
    uVar15 = 0;
    do {
      lVar6 = *(long *)(param_1 + 0x600);
      uStack_74 = uStack_74 & 0xffffff00;
      uVar14 = *(ulong *)(lVar6 + 0xe8);
      local_78 = uVar15;
      if (uVar14 < *(ulong *)(lVar6 + 0xf0)) {
        lVar17 = *(long *)(lVar6 + 0xe0);
        uVar18 = *(undefined8 *)(lVar6 + 0xa0);
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
        if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar18;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        *(ulong *)(lVar17 + uVar14 * 8) = CONCAT44(uStack_74,local_78);
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        *(long *)(lVar6 + 0xe8) = *(long *)(lVar6 + 0xe8) + 1;
      }
      else {
        local_68 = *(long *)(lVar6 + 0xe0) + uVar14 * 8;
        FUN_008caa00(auStack_70,lVar6 + 0xa0,&local_68,1,&local_78);
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < *puVar2);
    iVar5 = *puVar2 - 1;
  }
  *(int *)(param_1 + 0x1a58) = iVar5;
  *(undefined1 *)(param_1 + 0x1a68) = 1;
  uVar18 = *(undefined8 *)(param_1 + 0x5f0);
  local_68 = *(long *)(param_1 + 0x600);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
  }
  FUN_016c2cb0(uVar18,&local_68);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  FUN_016c2c80(*(undefined8 *)(param_1 + 0x5f0),0,0);
  FUN_016c2c90(*(undefined8 *)(param_1 + 0x5f0),0);
  FUN_016bef00(*(undefined8 *)(param_1 + 0x5f0));
  if ((*puVar2 == 0) && (uVar3 != 0)) {
    local_68 = -0x152ef7a1b3c6884f;
    lVar6 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_68);
    *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 1;
    FUN_00ffcf80(param_1 + 0x100,"anime_stamp_off");
  }
  if (((int)uVar16 == 0) && (*puVar2 != 0)) {
    FUN_00ffcf80(param_1 + 0x100,"anime_stamp_on");
  }
  return;
}


