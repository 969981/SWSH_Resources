/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01497110; name: FUN_01497110
 */


void FUN_01497110(long param_1)

{
  byte *pbVar1;
  int *piVar2;
  undefined *puVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong *puVar10;
  long lVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  long local_80;
  int local_78;
  uint uStack_74;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar8 = *(long *)(param_1 + 0x5e8);
  uVar9 = *(ulong *)(lVar8 + 0xe8);
  if ((int)uVar9 != 0) {
    if ((uVar9 & 0xffffffff) == 1) {
      lVar11 = 0;
    }
    else {
      lVar7 = 0;
      lVar11 = 0;
      do {
        *(undefined1 *)(*(long *)(lVar8 + 0xe0) + lVar7 + 4) = 1;
        lVar8 = *(long *)(*(long *)(param_1 + 0x5e8) + 0xe0) + lVar7;
        lVar7 = lVar7 + 0x10;
        *(undefined1 *)(lVar8 + 0xc) = 1;
        lVar8 = *(long *)(param_1 + 0x5e8);
        lVar11 = lVar11 + 2;
      } while ((uVar9 & 0xffffffff) - (uVar9 & 1) != lVar11);
    }
    if ((uVar9 & 1) != 0) {
      *(undefined1 *)(*(long *)(lVar8 + 0xe0) + lVar11 * 8 + 4) = 1;
      lVar8 = *(long *)(param_1 + 0x5e8);
    }
    puVar12 = *(ulong **)(lVar8 + 0xe0);
    lVar7 = *(long *)(lVar8 + 0xe8);
    puVar10 = puVar12 + lVar7;
    if ((lVar7 != 0) && ((*puVar12 & 0x100000000) == 0)) {
      lVar11 = lVar7 * 8;
      do {
        lVar11 = lVar11 + -8;
        if (lVar11 == 0) goto LAB_014972c8;
        pbVar1 = (byte *)((long)puVar12 + 0xc);
        puVar12 = puVar12 + 1;
      } while ((*pbVar1 & 1) == 0);
    }
    if (puVar10 != puVar12) {
      puVar13 = puVar12 + 1;
      if (puVar13 == puVar10) {
        if (puVar10 == puVar12) goto LAB_014972c8;
      }
      else {
        uVar9 = (long)(puVar10 + -2) - (long)puVar12;
        puVar14 = puVar10 + -2;
        puVar15 = puVar12;
        if (((uint)uVar9 >> 3 & 1) == 0) {
          puVar14 = puVar12;
          if ((puVar12[1] >> 0x20 & 1) == 0) {
            puVar14 = puVar12 + 1;
            *puVar12 = puVar12[1];
          }
          puVar13 = puVar12 + 2;
          puVar15 = puVar14;
        }
        puVar12 = puVar14;
        if (7 < uVar9) {
          puVar12 = puVar15;
          do {
            while ((*puVar13 >> 0x20 & 1) == 0) {
              puVar12 = puVar12 + 1;
              *puVar15 = *puVar13;
              uVar9 = puVar13[1];
              puVar15 = puVar12;
              if ((uVar9 >> 0x20 & 1) == 0) goto LAB_01497290;
LAB_0149726c:
              puVar13 = puVar13 + 2;
              if (puVar13 == puVar10) goto LAB_014972a8;
            }
            uVar9 = puVar13[1];
            if ((uVar9 >> 0x20 & 1) != 0) goto LAB_0149726c;
LAB_01497290:
            puVar12 = puVar12 + 1;
            *puVar15 = uVar9;
            puVar13 = puVar13 + 2;
            puVar15 = puVar12;
          } while (puVar13 != puVar10);
        }
LAB_014972a8:
        lVar7 = *(long *)(lVar8 + 0xe8);
        puVar10 = (ulong *)(*(long *)(lVar8 + 0xe0) + lVar7 * 8);
        if (puVar10 == puVar12) goto LAB_014972c8;
      }
      *(long *)(lVar8 + 0xe8) = lVar7 - ((long)puVar10 - (long)puVar12 >> 3);
    }
  }
LAB_014972c8:
  piVar2 = (int *)(param_1 + 0x6700);
  *piVar2 = 0xff;
  uVar6 = FUN_01485a70(*(undefined8 *)(param_1 + 0x5d8));
  iVar18 = 0;
  uVar16 = 0;
  do {
    uVar9 = FUN_0087ede0(uVar6,uVar16);
    if ((uVar9 & 1) != 0) {
      cVar4 = FUN_0087ee40(uVar6);
      if ((cVar4 != -1) && (uVar5 = FUN_0087ee40(uVar6), uVar16 == (uVar5 & 0xff))) {
        *piVar2 = iVar18;
      }
      lVar8 = (long)iVar18;
      iVar18 = iVar18 + 1;
      *(uint *)(param_1 + lVar8 * 4 + 0x608) = uVar16;
    }
    uVar16 = uVar16 + 1;
  } while (uVar16 != 0x62);
  local_68 = param_1;
  FUN_01498620(param_1 + 0x608,param_1 + 0x608 + (long)iVar18 * 4,&local_68);
  puVar3 = PTR_DAT_02710860;
  if (0 < iVar18) {
    iVar17 = 0;
    do {
      while( true ) {
        lVar8 = *(long *)(param_1 + 0x5e8);
        uStack_74 = uStack_74 & 0xffffff00;
        uVar9 = *(ulong *)(lVar8 + 0xe8);
        local_78 = iVar17;
        if (*(ulong *)(lVar8 + 0xf0) <= uVar9) break;
        lVar11 = *(long *)(lVar8 + 0xe0);
        uVar6 = *(undefined8 *)(lVar8 + 0xa0);
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
        if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar6;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        *(ulong *)(lVar11 + uVar9 * 8) = CONCAT44(uStack_74,local_78);
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        *(long *)(lVar8 + 0xe8) = *(long *)(lVar8 + 0xe8) + 1;
        iVar17 = iVar17 + 1;
        if (iVar18 <= iVar17) goto LAB_0149740c;
      }
      local_68 = *(long *)(lVar8 + 0xe0) + uVar9 * 8;
      FUN_008caa00(auStack_70,lVar8 + 0xa0,&local_68,1,&local_78);
      iVar17 = iVar17 + 1;
    } while (iVar17 < iVar18);
LAB_0149740c:
    if ((*piVar2 != 0x62) && (0 < iVar18)) {
      lVar8 = 0;
      do {
        if (*(int *)(param_1 + 0x608 + lVar8 * 4) == *piVar2) {
          *piVar2 = (int)lVar8;
          uVar6 = *(undefined8 *)(param_1 + 0x5f0);
          local_80 = *(long *)(param_1 + 0x5e8);
          goto joined_r0x0149753c;
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < iVar18);
    }
  }
  uVar6 = *(undefined8 *)(param_1 + 0x5f0);
  local_80 = *(long *)(param_1 + 0x5e8);
joined_r0x0149753c:
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x10))();
  }
  FUN_016c2cb0(uVar6,&local_80);
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    local_80 = 0;
  }
  FUN_016c2c80(*(undefined8 *)(param_1 + 0x5f0),0,0);
  FUN_016c2c90(*(undefined8 *)(param_1 + 0x5f0),0);
  FUN_016bef00(*(undefined8 *)(param_1 + 0x5f0));
  FUN_016b2da0(*(undefined8 *)(param_1 + 0x5f0),1);
  *(byte *)(*(long *)(param_1 + 0x5e0) + 0x58) = *(byte *)(*(long *)(param_1 + 0x5e0) + 0x58) & 0xfe
  ;
  FUN_016b2da0(*(undefined8 *)(param_1 + 0x5f8),1);
  FUN_016b2da0(*(undefined8 *)(param_1 + 0x600),1);
  *(byte *)(*(long *)(param_1 + 0x6708) + 0x58) =
       *(byte *)(*(long *)(param_1 + 0x6708) + 0x58) & 0xfe | iVar18 == 0;
  iVar18 = 0;
  if (*piVar2 != 0xff) {
    iVar18 = *piVar2;
  }
  FUN_016bff10(*(undefined8 *)(param_1 + 0x5f0),iVar18,0);
  return;
}


