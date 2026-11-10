/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ecc920; name: FUN_00ecc920
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ecc920(long param_1)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 uVar24;
  ulong uVar25;
  long *plVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar28 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar28 != 0) {
    (**(code **)(*(long *)(lVar28 + 0x48) + 0x10))();
  }
  plVar2 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  plVar3 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
joined_r0x00ecc974:
  do {
    if (plVar2 == plVar3) {
      if ((*(char *)(param_1 + 0xb4) != '\0') &&
         (*(int *)(param_1 + 0x4c0) == *(int *)(param_1 + 0xb0))) {
        fVar32 = (float)*(undefined8 *)(param_1 + 0x98);
        fVar33 = (float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20);
        uVar24 = *(undefined8 *)(param_1 + 0x90);
        fVar30 = (float)uVar24;
        fVar31 = (float)((ulong)uVar24 >> 0x20);
        fVar30 = fVar30 * fVar30;
        fVar31 = fVar31 * fVar31;
        fVar32 = fVar32 * fVar32;
        fVar33 = fVar33 * fVar33;
        auVar34._4_4_ = fVar31;
        auVar34._0_4_ = fVar30;
        auVar34._8_4_ = fVar32;
        auVar34._12_4_ = fVar33;
        auVar5._4_4_ = fVar31;
        auVar5._0_4_ = fVar30;
        auVar5._8_4_ = fVar32;
        auVar5._12_4_ = fVar33;
        auVar34 = NEON_ext(auVar34,auVar5,8,1);
        if (DAT_01d4c708 < SQRT(auVar34._0_4_ + fVar30 + auVar34._4_4_ + fVar31)) {
          local_50 = _DAT_01d4b580;
          uStack_48 = _UNK_01d4b588;
          FUN_00895e30(*(undefined8 *)(param_1 + 0x58),param_1 + 0x80,(undefined8 *)(param_1 + 0x90)
                       ,&local_50);
        }
        *(undefined4 *)(param_1 + 0xa0) = 0x461c4000;
      }
      if ((*(char *)(param_1 + 0x124) != '\0') &&
         (*(int *)(param_1 + 0x4c0) == *(int *)(param_1 + 0x120))) {
        fVar32 = (float)*(undefined8 *)(param_1 + 0x108);
        fVar33 = (float)((ulong)*(undefined8 *)(param_1 + 0x108) >> 0x20);
        fVar30 = (float)*(undefined8 *)(param_1 + 0x100);
        fVar31 = (float)((ulong)*(undefined8 *)(param_1 + 0x100) >> 0x20);
        fVar30 = fVar30 * fVar30;
        fVar31 = fVar31 * fVar31;
        fVar32 = fVar32 * fVar32;
        fVar33 = fVar33 * fVar33;
        auVar6._4_4_ = fVar31;
        auVar6._0_4_ = fVar30;
        auVar6._8_4_ = fVar32;
        auVar6._12_4_ = fVar33;
        auVar7._4_4_ = fVar31;
        auVar7._0_4_ = fVar30;
        auVar7._8_4_ = fVar32;
        auVar7._12_4_ = fVar33;
        auVar34 = NEON_ext(auVar6,auVar7,8,1);
        if (DAT_01d4c708 < SQRT(auVar34._0_4_ + fVar30 + auVar34._4_4_ + fVar31)) {
          uStack_48 = _UNK_01d4b588;
          local_50 = _DAT_01d4b580;
          FUN_00895e30(*(undefined8 *)(param_1 + 200),param_1 + 0xf0,param_1 + 0x100,&local_50);
        }
        *(undefined4 *)(param_1 + 0x110) = 0x461c4000;
      }
      if ((*(char *)(param_1 + 0x194) != '\0') &&
         (*(int *)(param_1 + 0x4c0) == *(int *)(param_1 + 400))) {
        fVar32 = (float)*(undefined8 *)(param_1 + 0x178);
        fVar33 = (float)((ulong)*(undefined8 *)(param_1 + 0x178) >> 0x20);
        fVar30 = (float)*(undefined8 *)(param_1 + 0x170);
        fVar31 = (float)((ulong)*(undefined8 *)(param_1 + 0x170) >> 0x20);
        fVar30 = fVar30 * fVar30;
        fVar31 = fVar31 * fVar31;
        fVar32 = fVar32 * fVar32;
        fVar33 = fVar33 * fVar33;
        auVar8._4_4_ = fVar31;
        auVar8._0_4_ = fVar30;
        auVar8._8_4_ = fVar32;
        auVar8._12_4_ = fVar33;
        auVar9._4_4_ = fVar31;
        auVar9._0_4_ = fVar30;
        auVar9._8_4_ = fVar32;
        auVar9._12_4_ = fVar33;
        auVar34 = NEON_ext(auVar8,auVar9,8,1);
        if (DAT_01d4c708 < SQRT(auVar34._0_4_ + fVar30 + auVar34._4_4_ + fVar31)) {
          uStack_48 = _UNK_01d4b588;
          local_50 = _DAT_01d4b580;
          FUN_00895e30(*(undefined8 *)(param_1 + 0x138),param_1 + 0x160,param_1 + 0x170,&local_50);
        }
        *(undefined4 *)(param_1 + 0x180) = 0x461c4000;
      }
      if ((*(char *)(param_1 + 0x204) != '\0') &&
         (*(int *)(param_1 + 0x4c0) == *(int *)(param_1 + 0x200))) {
        fVar32 = (float)*(undefined8 *)(param_1 + 0x1e8);
        fVar33 = (float)((ulong)*(undefined8 *)(param_1 + 0x1e8) >> 0x20);
        fVar30 = (float)*(undefined8 *)(param_1 + 0x1e0);
        fVar31 = (float)((ulong)*(undefined8 *)(param_1 + 0x1e0) >> 0x20);
        fVar30 = fVar30 * fVar30;
        fVar31 = fVar31 * fVar31;
        fVar32 = fVar32 * fVar32;
        fVar33 = fVar33 * fVar33;
        auVar10._4_4_ = fVar31;
        auVar10._0_4_ = fVar30;
        auVar10._8_4_ = fVar32;
        auVar10._12_4_ = fVar33;
        auVar11._4_4_ = fVar31;
        auVar11._0_4_ = fVar30;
        auVar11._8_4_ = fVar32;
        auVar11._12_4_ = fVar33;
        auVar34 = NEON_ext(auVar10,auVar11,8,1);
        if (DAT_01d4c708 < SQRT(auVar34._0_4_ + fVar30 + auVar34._4_4_ + fVar31)) {
          uStack_48 = _UNK_01d4b588;
          local_50 = _DAT_01d4b580;
          FUN_00895e30(*(undefined8 *)(param_1 + 0x1a8),param_1 + 0x1d0,param_1 + 0x1e0,&local_50);
        }
        *(undefined4 *)(param_1 + 0x1f0) = 0x461c4000;
      }
      if ((*(char *)(param_1 + 0x274) != '\0') &&
         (*(int *)(param_1 + 0x4c0) == *(int *)(param_1 + 0x270))) {
        fVar32 = (float)*(undefined8 *)(param_1 + 600);
        fVar33 = (float)((ulong)*(undefined8 *)(param_1 + 600) >> 0x20);
        fVar30 = (float)*(undefined8 *)(param_1 + 0x250);
        fVar31 = (float)((ulong)*(undefined8 *)(param_1 + 0x250) >> 0x20);
        fVar30 = fVar30 * fVar30;
        fVar31 = fVar31 * fVar31;
        fVar32 = fVar32 * fVar32;
        fVar33 = fVar33 * fVar33;
        auVar12._4_4_ = fVar31;
        auVar12._0_4_ = fVar30;
        auVar12._8_4_ = fVar32;
        auVar12._12_4_ = fVar33;
        auVar13._4_4_ = fVar31;
        auVar13._0_4_ = fVar30;
        auVar13._8_4_ = fVar32;
        auVar13._12_4_ = fVar33;
        auVar34 = NEON_ext(auVar12,auVar13,8,1);
        if (DAT_01d4c708 < SQRT(auVar34._0_4_ + fVar30 + auVar34._4_4_ + fVar31)) {
          uStack_48 = _UNK_01d4b588;
          local_50 = _DAT_01d4b580;
          FUN_00895e30(*(undefined8 *)(param_1 + 0x218),param_1 + 0x240,param_1 + 0x250,&local_50);
        }
        *(undefined4 *)(param_1 + 0x260) = 0x461c4000;
      }
      if ((*(char *)(param_1 + 0x2e4) != '\0') &&
         (*(int *)(param_1 + 0x4c0) == *(int *)(param_1 + 0x2e0))) {
        fVar32 = (float)*(undefined8 *)(param_1 + 0x2c8);
        fVar33 = (float)((ulong)*(undefined8 *)(param_1 + 0x2c8) >> 0x20);
        fVar30 = (float)*(undefined8 *)(param_1 + 0x2c0);
        fVar31 = (float)((ulong)*(undefined8 *)(param_1 + 0x2c0) >> 0x20);
        fVar30 = fVar30 * fVar30;
        fVar31 = fVar31 * fVar31;
        fVar32 = fVar32 * fVar32;
        fVar33 = fVar33 * fVar33;
        auVar14._4_4_ = fVar31;
        auVar14._0_4_ = fVar30;
        auVar14._8_4_ = fVar32;
        auVar14._12_4_ = fVar33;
        auVar15._4_4_ = fVar31;
        auVar15._0_4_ = fVar30;
        auVar15._8_4_ = fVar32;
        auVar15._12_4_ = fVar33;
        auVar34 = NEON_ext(auVar14,auVar15,8,1);
        if (DAT_01d4c708 < SQRT(auVar34._0_4_ + fVar30 + auVar34._4_4_ + fVar31)) {
          uStack_48 = _UNK_01d4b588;
          local_50 = _DAT_01d4b580;
          FUN_00895e30(*(undefined8 *)(param_1 + 0x288),param_1 + 0x2b0,param_1 + 0x2c0,&local_50);
        }
        *(undefined4 *)(param_1 + 0x2d0) = 0x461c4000;
      }
      if ((*(char *)(param_1 + 0x354) != '\0') &&
         (*(int *)(param_1 + 0x4c0) == *(int *)(param_1 + 0x350))) {
        fVar32 = (float)*(undefined8 *)(param_1 + 0x338);
        fVar33 = (float)((ulong)*(undefined8 *)(param_1 + 0x338) >> 0x20);
        fVar30 = (float)*(undefined8 *)(param_1 + 0x330);
        fVar31 = (float)((ulong)*(undefined8 *)(param_1 + 0x330) >> 0x20);
        fVar30 = fVar30 * fVar30;
        fVar31 = fVar31 * fVar31;
        fVar32 = fVar32 * fVar32;
        fVar33 = fVar33 * fVar33;
        auVar16._4_4_ = fVar31;
        auVar16._0_4_ = fVar30;
        auVar16._8_4_ = fVar32;
        auVar16._12_4_ = fVar33;
        auVar17._4_4_ = fVar31;
        auVar17._0_4_ = fVar30;
        auVar17._8_4_ = fVar32;
        auVar17._12_4_ = fVar33;
        auVar34 = NEON_ext(auVar16,auVar17,8,1);
        if (DAT_01d4c708 < SQRT(auVar34._0_4_ + fVar30 + auVar34._4_4_ + fVar31)) {
          uStack_48 = _UNK_01d4b588;
          local_50 = _DAT_01d4b580;
          FUN_00895e30(*(undefined8 *)(param_1 + 0x2f8),param_1 + 800,param_1 + 0x330,&local_50);
        }
        *(undefined4 *)(param_1 + 0x340) = 0x461c4000;
      }
      if ((*(char *)(param_1 + 0x3c4) != '\0') &&
         (*(int *)(param_1 + 0x4c0) == *(int *)(param_1 + 0x3c0))) {
        fVar32 = (float)*(undefined8 *)(param_1 + 0x3a8);
        fVar33 = (float)((ulong)*(undefined8 *)(param_1 + 0x3a8) >> 0x20);
        fVar30 = (float)*(undefined8 *)(param_1 + 0x3a0);
        fVar31 = (float)((ulong)*(undefined8 *)(param_1 + 0x3a0) >> 0x20);
        fVar30 = fVar30 * fVar30;
        fVar31 = fVar31 * fVar31;
        fVar32 = fVar32 * fVar32;
        fVar33 = fVar33 * fVar33;
        auVar18._4_4_ = fVar31;
        auVar18._0_4_ = fVar30;
        auVar18._8_4_ = fVar32;
        auVar18._12_4_ = fVar33;
        auVar19._4_4_ = fVar31;
        auVar19._0_4_ = fVar30;
        auVar19._8_4_ = fVar32;
        auVar19._12_4_ = fVar33;
        auVar34 = NEON_ext(auVar18,auVar19,8,1);
        if (DAT_01d4c708 < SQRT(auVar34._0_4_ + fVar30 + auVar34._4_4_ + fVar31)) {
          uStack_48 = _UNK_01d4b588;
          local_50 = _DAT_01d4b580;
          FUN_00895e30(*(undefined8 *)(param_1 + 0x368),param_1 + 0x390,param_1 + 0x3a0,&local_50);
        }
        *(undefined4 *)(param_1 + 0x3b0) = 0x461c4000;
      }
      if ((*(char *)(param_1 + 0x434) != '\0') &&
         (*(int *)(param_1 + 0x4c0) == *(int *)(param_1 + 0x430))) {
        fVar32 = (float)*(undefined8 *)(param_1 + 0x418);
        fVar33 = (float)((ulong)*(undefined8 *)(param_1 + 0x418) >> 0x20);
        fVar30 = (float)*(undefined8 *)(param_1 + 0x410);
        fVar31 = (float)((ulong)*(undefined8 *)(param_1 + 0x410) >> 0x20);
        fVar30 = fVar30 * fVar30;
        fVar31 = fVar31 * fVar31;
        fVar32 = fVar32 * fVar32;
        fVar33 = fVar33 * fVar33;
        auVar20._4_4_ = fVar31;
        auVar20._0_4_ = fVar30;
        auVar20._8_4_ = fVar32;
        auVar20._12_4_ = fVar33;
        auVar21._4_4_ = fVar31;
        auVar21._0_4_ = fVar30;
        auVar21._8_4_ = fVar32;
        auVar21._12_4_ = fVar33;
        auVar34 = NEON_ext(auVar20,auVar21,8,1);
        if (DAT_01d4c708 < SQRT(auVar34._0_4_ + fVar30 + auVar34._4_4_ + fVar31)) {
          uStack_48 = _UNK_01d4b588;
          local_50 = _DAT_01d4b580;
          FUN_00895e30(*(undefined8 *)(param_1 + 0x3d8),param_1 + 0x400,param_1 + 0x410,&local_50);
        }
        *(undefined4 *)(param_1 + 0x420) = 0x461c4000;
      }
      if ((*(char *)(param_1 + 0x4a4) != '\0') &&
         (*(int *)(param_1 + 0x4c0) == *(int *)(param_1 + 0x4a0))) {
        fVar32 = (float)*(undefined8 *)(param_1 + 0x488);
        fVar33 = (float)((ulong)*(undefined8 *)(param_1 + 0x488) >> 0x20);
        fVar30 = (float)*(undefined8 *)(param_1 + 0x480);
        fVar31 = (float)((ulong)*(undefined8 *)(param_1 + 0x480) >> 0x20);
        fVar30 = fVar30 * fVar30;
        fVar31 = fVar31 * fVar31;
        fVar32 = fVar32 * fVar32;
        fVar33 = fVar33 * fVar33;
        auVar22._4_4_ = fVar31;
        auVar22._0_4_ = fVar30;
        auVar22._8_4_ = fVar32;
        auVar22._12_4_ = fVar33;
        auVar23._4_4_ = fVar31;
        auVar23._0_4_ = fVar30;
        auVar23._8_4_ = fVar32;
        auVar23._12_4_ = fVar33;
        auVar34 = NEON_ext(auVar22,auVar23,8,1);
        if (DAT_01d4c708 < SQRT(auVar34._0_4_ + fVar30 + auVar34._4_4_ + fVar31)) {
          uStack_48 = _UNK_01d4b588;
          local_50 = _DAT_01d4b580;
          FUN_00895e30(*(undefined8 *)(param_1 + 0x448),param_1 + 0x470,param_1 + 0x480,&local_50);
        }
        *(undefined4 *)(param_1 + 0x490) = 0x461c4000;
      }
      iVar4 = *(int *)(param_1 + 0x4c0);
      uVar1 = iVar4 + 4;
      if (-1 < iVar4 + 1) {
        uVar1 = iVar4 + 1;
      }
      *(uint *)(param_1 + 0x4c0) = (iVar4 + 1) - (uVar1 & 0xfffffffc);
      if (lVar28 != 0) {
        (**(code **)(*(long *)(lVar28 + 0x48) + 0x18))((long *)(lVar28 + 0x48));
      }
      return;
    }
    if (((*(byte *)(*plVar2 + 0x38f) >> 2 & 1) != 0) &&
       (uVar25 = (**(code **)(*(long *)*plVar2 + 0x88))(), (uVar25 & 1) == 0)) {
      lVar29 = *plVar2;
      plVar26 = (long *)(*(code *)**(undefined8 **)(lVar29 + 0x50))((undefined8 *)(lVar29 + 0x50));
      lVar27 = FUN_00ecd7b0();
      for (; plVar26 != (long *)0x0; plVar26 = (long *)*plVar26) {
        if (plVar26 == (long *)lVar27) {
          if (*(int *)(param_1 + 0x4c0) != *(int *)(lVar29 + 0x440)) break;
          iVar4 = *(int *)(lVar29 + 0x43c);
          if (iVar4 != 3) {
            if (iVar4 == 2) {
              if (*(int *)(lVar29 + 0x438) == -1) break;
            }
            else {
              if (iVar4 != 1) break;
              if (*(int *)(lVar29 + 0x438) == -1) {
                FUN_00eaaf60(lVar29);
                goto joined_r0x00ecca24;
              }
            }
            FUN_00ecd120(param_1);
            plVar2 = plVar2 + 1;
            goto joined_r0x00ecc974;
          }
          if (*(int *)(lVar29 + 0x438) != -1) {
            FUN_00ecd300(param_1,*(int *)(lVar29 + 0x438));
joined_r0x00ecca24:
            plVar2 = plVar2 + 1;
            goto joined_r0x00ecc974;
          }
          FUN_00eaaff0(lVar29);
          break;
        }
      }
    }
    plVar2 = plVar2 + 1;
  } while( true );
}


