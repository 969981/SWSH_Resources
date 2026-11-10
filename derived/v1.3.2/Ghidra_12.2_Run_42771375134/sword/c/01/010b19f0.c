/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010b19f0; name: FUN_010b19f0
 */


void FUN_010b19f0(long param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  ulong uVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  int *piVar17;
  ulong uVar18;
  uint local_e0;
  undefined4 uStack_dc;
  uint local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined5 uStack_a0;
  undefined3 local_9b;
  undefined5 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  uVar14 = 0;
  lVar16 = param_1 + 0xf8;
  do {
    piVar17 = (int *)(param_1 + uVar14 * 0xa0 + 4);
    if (*piVar17 != -1) {
      lVar7 = param_1 + uVar14 * 0xa0;
      puVar15 = (undefined8 *)(lVar7 + 0x58);
      lVar6 = lVar16;
      uVar18 = uVar14;
      do {
        uVar18 = uVar18 + 1;
        if (0x31 < uVar18) goto LAB_010b1a90;
        uVar4 = FUN_0121b130(puVar15,lVar6);
        lVar6 = lVar6 + 0xa0;
      } while ((uVar4 & 1) == 0);
      *piVar17 = -1;
      FUN_0121ad80(&local_e0);
      *puVar15 = CONCAT44(uStack_dc,local_e0);
      *(ulong *)(lVar7 + 0x70) = CONCAT44(uStack_c4,local_c8);
      *(ulong *)(lVar7 + 0x78) = CONCAT44(local_bc,uStack_c0);
      *(ulong *)(lVar7 + 0x60) = CONCAT44(uStack_d4,local_d8);
      *(ulong *)(lVar7 + 0x68) = CONCAT44(uStack_cc,uStack_d0);
LAB_010b1a90:
      uVar18 = 0;
      lVar6 = param_1 + 0x1f98;
      do {
        if ((*(int *)(lVar6 + -0x54) != -1) &&
           (uVar4 = FUN_0121b130(puVar15,lVar6), (uVar4 & 1) != 0)) {
          *piVar17 = -1;
          FUN_0121ad80(&local_e0);
          *puVar15 = CONCAT44(uStack_dc,local_e0);
          *(ulong *)(lVar7 + 0x70) = CONCAT44(uStack_c4,local_c8);
          *(ulong *)(lVar7 + 0x78) = CONCAT44(local_bc,uStack_c0);
          *(ulong *)(lVar7 + 0x60) = CONCAT44(uStack_d4,local_d8);
          *(ulong *)(lVar7 + 0x68) = CONCAT44(uStack_cc,uStack_d0);
          break;
        }
        uVar18 = uVar18 + 1;
        lVar6 = lVar6 + 0xa0;
      } while (uVar18 < 0x32);
    }
    lVar16 = lVar16 + 0xa0;
    uVar14 = uVar14 + 1;
    if (uVar14 == 0x32) {
      uVar12 = *(undefined8 *)PTR_DAT_02710958;
      puVar13 = (undefined8 *)((ulong)&local_e0 | 4);
      puVar15 = (undefined8 *)(param_1 + 0x58);
      lVar16 = 0x32;
      do {
        if ((*(int *)((long)puVar15 + -0x54) != -1) &&
           (FUN_01211890(&local_68,uVar12,puVar15), local_68 != 0)) {
          piVar17 = (int *)FUN_01225f00();
          if (*piVar17 == 2) {
            *(undefined4 *)((long)puVar15 + -0x54) = 0xffffffff;
            FUN_0121ad80(&local_e0);
            *puVar15 = CONCAT44(uStack_dc,local_e0);
            puVar15[3] = CONCAT44(uStack_c4,local_c8);
            puVar15[4] = CONCAT44(local_bc,uStack_c0);
            puVar15[1] = CONCAT44(uStack_d4,local_d8);
            puVar15[2] = CONCAT44(uStack_cc,uStack_d0);
          }
          pcVar5 = (char *)FUN_01225e90(local_68);
          uVar1 = local_e0 >> 8;
          local_e0 = local_e0 & 0xffffff00;
          if (*pcVar5 != '\0') {
            uVar8 = *(undefined8 *)(pcVar5 + 4);
            uVar9 = *(undefined8 *)(pcVar5 + 0x14);
            puVar13[1] = *(undefined8 *)(pcVar5 + 0xc);
            puVar13[2] = uVar9;
            *puVar13 = uVar8;
            uVar8 = *(undefined8 *)(pcVar5 + 0x1c);
            uVar9 = *(undefined8 *)(pcVar5 + 0x24);
            uVar10 = *(undefined8 *)(pcVar5 + 0x34);
            puVar13[5] = *(undefined8 *)(pcVar5 + 0x2c);
            puVar13[6] = uVar10;
            puVar13[3] = uVar8;
            puVar13[4] = uVar9;
            local_e0 = CONCAT31((int3)uVar1,1);
            uVar14 = thunk_FUN_012229b0(puVar13);
            if (((((uVar14 & 1) != 0) && (pcVar5 = (char *)FUN_01225ec0(local_68), *pcVar5 != '\0'))
                && (*(int *)(pcVar5 + 4) == 0)) && (*(int *)((long)puVar15 + -0x54) - 0x11U < 10)) {
              *(undefined4 *)((long)puVar15 + -0x54) = 0xffffffff;
              FUN_0121ad80(&local_90);
              *puVar15 = local_90;
              puVar15[3] = local_78;
              puVar15[4] = uStack_70;
              puVar15[1] = local_88;
              puVar15[2] = uStack_80;
            }
            if ((char)local_e0 != '\0') {
              local_e0 = local_e0 & 0xffffff00;
            }
          }
        }
        puVar15 = puVar15 + 0x14;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      puVar15 = (undefined8 *)(param_1 + 0x58);
      lVar16 = 0x32;
      do {
        if ((*(int *)((long)puVar15 + -0x54) != -1) &&
           (FUN_01211890(&local_68,uVar12,puVar15), local_68 != 0)) {
          pcVar5 = (char *)FUN_01225e80();
          uVar1 = local_e0 >> 8;
          local_e0 = local_e0 & 0xffffff00;
          if (*pcVar5 != '\0') {
            uStack_dc = CONCAT31(uStack_dc._1_3_,pcVar5[4]);
            uVar2 = local_d8 >> 8;
            local_d8 = local_d8 & 0xffffff00;
            if (pcVar5[8] != '\0') {
              local_bc = *(undefined4 *)(pcVar5 + 0x24);
              uStack_d4 = (undefined4)*(undefined8 *)(pcVar5 + 0xc);
              uStack_d0 = (undefined4)((ulong)*(undefined8 *)(pcVar5 + 0xc) >> 0x20);
              uStack_cc = (undefined4)*(undefined8 *)(pcVar5 + 0x14);
              local_c8 = (undefined4)((ulong)*(undefined8 *)(pcVar5 + 0x14) >> 0x20);
              uStack_c4 = (undefined4)*(undefined8 *)(pcVar5 + 0x1c);
              uStack_c0 = (undefined4)((ulong)*(undefined8 *)(pcVar5 + 0x1c) >> 0x20);
              local_d8 = CONCAT31((int3)uVar2,1);
            }
            local_b8 = *(undefined8 *)(pcVar5 + 0x28);
            local_b0 = *(undefined8 *)(pcVar5 + 0x30);
            local_a8 = *(undefined8 *)(pcVar5 + 0x38);
            uStack_98 = (undefined5)((ulong)*(undefined8 *)(pcVar5 + 0x45) >> 0x18);
            uStack_a0 = (undefined5)*(undefined8 *)(pcVar5 + 0x40);
            local_9b = (undefined3)((ulong)*(undefined8 *)(pcVar5 + 0x40) >> 0x28);
            local_e0 = CONCAT31((int3)uVar1,1);
            cVar3 = FUN_0121bb50((ulong)&local_e0 | 4);
            if (cVar3 == -1) {
              *(undefined4 *)((long)puVar15 + -0x54) = 0xffffffff;
              FUN_0121ad80(&local_90);
              *puVar15 = local_90;
              puVar15[3] = local_78;
              puVar15[4] = uStack_70;
              puVar15[1] = local_88;
              puVar15[2] = uStack_80;
            }
            else {
            }
            if ((char)local_e0 != '\0') {
              if ((char)local_d8 != '\0') {
                local_d8 = local_d8 & 0xffffff00;
              }
              local_e0 = local_e0 & 0xffffff00;
            }
          }
        }
        puVar15 = puVar15 + 0x14;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      uVar14 = 0;
      iVar11 = 0;
      lVar16 = 4;
      do {
        if (*(int *)(param_1 + lVar16) != -1) {
          FUN_010b3150(param_1,uVar14 & 0xffffffff,iVar11,0);
          iVar11 = iVar11 + 1;
        }
        uVar14 = uVar14 + 1;
        lVar16 = lVar16 + 0xa0;
      } while (uVar14 != 0x32);
      *(int *)(param_1 + 0x119e4) = iVar11;
      return;
    }
  } while( true );
}


