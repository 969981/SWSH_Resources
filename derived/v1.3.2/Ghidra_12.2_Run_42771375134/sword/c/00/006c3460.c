/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006c3460; name: FUN_006c3460
 */


void FUN_006c3460(long param_1,long *param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  void *__dest;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  byte *pbVar15;
  void *__src;
  code *pcVar16;
  ulong uVar17;
  byte *pbVar18;
  undefined8 *puVar19;
  long lVar20;
  uint uVar21;
  byte local_1d8 [8];
  long *local_1d0;
  long *local_1c8;
  byte *pbStack_1c0;
  size_t local_1b8;
  long local_1b0;
  undefined2 local_1a8 [4];
  undefined2 local_1a0 [4];
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined *local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 uStack_108;
  undefined4 local_104;
  undefined4 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  
  if (*(long *)(param_1 + 0x150) != 0) {
    FUN_006c3c30(param_1);
  }
  lVar20 = *(long *)(param_4 + 8);
  if (lVar20 != 0) {
    (**(code **)(*(long *)(lVar20 + 0x48) + 0x10))();
  }
  lVar8 = *(long *)(param_1 + 8);
  *(long *)(param_1 + 8) = lVar20;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
  }
  pcVar16 = *(code **)(param_1 + 0x18);
  if (pcVar16 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    (*pcVar16)(param_1 + 0x30);
  }
  if (*(code **)(param_4 + 0x20) != (code *)0x0) {
    (**(code **)(param_4 + 0x20))(param_4 + 0x30,param_1 + 0x30);
    uVar10 = *(undefined8 *)(param_4 + 0x10);
    uVar9 = *(undefined8 *)(param_4 + 0x18);
    uVar2 = *(undefined8 *)(param_4 + 0x28);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_4 + 0x20);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    *(undefined8 *)(param_1 + 0x10) = uVar10;
    *(undefined8 *)(param_1 + 0x18) = uVar9;
  }
  pcVar16 = *(code **)(param_1 + 0x98);
  if (pcVar16 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    (*pcVar16)(param_1 + 0xb0);
  }
  if (*(code **)(param_4 + 0xa0) != (code *)0x0) {
    (**(code **)(param_4 + 0xa0))(param_4 + 0xb0,param_1 + 0xb0);
    uVar10 = *(undefined8 *)(param_4 + 0x90);
    uVar9 = *(undefined8 *)(param_4 + 0x98);
    uVar2 = *(undefined8 *)(param_4 + 0xa8);
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_4 + 0xa0);
    *(undefined8 *)(param_1 + 0xa8) = uVar2;
    *(undefined8 *)(param_1 + 0x90) = uVar10;
    *(undefined8 *)(param_1 + 0x98) = uVar9;
  }
  plVar12 = *(long **)(*(long *)PTR_DAT_027108e8 + 0x70);
  uVar10 = *(undefined8 *)(*(long *)PTR_DAT_027108e8 + 0x78);
  uVar9 = (**(code **)(*param_2 + 0x10))(param_2,0x20000,0x10);
  lVar20 = *(long *)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x130) = uVar9;
  if (lVar20 != 0) {
    (**(code **)(**(long **)(param_1 + 0x138) + 0x18))
              (*(long **)(param_1 + 0x138),lVar20,*(undefined8 *)(param_1 + 0x140),
               *(undefined8 *)(param_1 + 0x148));
  }
  *(long **)(param_1 + 0x138) = param_2;
  *(undefined8 *)(param_1 + 0x140) = 0x20000;
  *(undefined8 *)(param_1 + 0x148) = 0x10;
  local_158 = 0;
  uStack_150 = 0x300000003;
  local_10c = 0x40800000;
  uStack_108 = 0x40800000;
  local_104 = 0;
  uStack_100 = 0x200;
  local_e8 = 1;
  local_e4 = 1;
  local_bc = 1;
  local_b8 = 0x3ecccccc;
  local_b4 = 0xfe7fffff;
  local_b0 = 0xfe7fffff;
  local_ac = 0xfe7fffff;
  local_a8 = 0x7e7fffff;
  local_a4 = 0x7e7fffff;
  local_a0 = 0x7e7fffff;
  local_9c = 0x2000000;
  local_98 = 0x1800000;
  local_94 = 0x1000000;
  local_90 = 0x80000;
  local_8c = 0x14000;
  local_88 = 0x100000;
  local_84 = 0x4000000;
  local_80 = 0x40000;
  local_e0 = 100;
  local_7c = 8;
  local_d0 = 0x80;
  local_74 = 0x42c80000;
  local_c8 = 0x10000;
  local_70 = 0x447a0000;
  local_c4 = 0x7f7fffff;
  local_6c = 0x41200000;
  local_168 = 0;
  local_148 = 0;
  local_f0 = 0;
  local_dc = 0;
  local_d8 = 0;
  local_cc = 0;
  local_c0 = 0x2000;
  local_78 = 0;
  local_198 = 0xc475400100000000;
  local_190 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_110 = 0x43443334;
  local_160 = PTR_LAB_02715260;
  local_f8 = uVar10;
  uVar10 = (**(code **)(*plVar12 + 0x98))(plVar12,&local_198);
  plVar11 = *(long **)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x150) = uVar10;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x10))();
  }
  uVar10 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x180);
  __dest = (void *)(**(code **)(*param_2 + 0x10))(param_2,uVar10,0x80);
  lVar20 = *(long *)(param_1 + 0x110);
  *(void **)(param_1 + 0x110) = __dest;
  if (lVar20 != 0) {
    (**(code **)(**(long **)(param_1 + 0x118) + 0x18))
              (*(long **)(param_1 + 0x118),lVar20,*(undefined8 *)(param_1 + 0x120),
               *(undefined8 *)(param_1 + 0x128));
    __dest = *(void **)(param_1 + 0x110);
  }
  lVar20 = *(long *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x128) = 0x80;
  *(long **)(param_1 + 0x118) = param_2;
  *(undefined8 *)(param_1 + 0x120) = uVar10;
  if ((lVar20 == 0) || (*(char *)(lVar20 + 0x170) == '\0')) {
    __src = (void *)0x0;
  }
  else {
    __src = *(void **)(lVar20 + 400);
  }
  memcpy(__dest,__src,*(size_t *)(lVar20 + 0x180));
  plVar12 = (long *)FUN_002f6610(plVar12);
  plVar11 = (long *)FUN_002f4b10(*(undefined8 *)(param_1 + 0x110),plVar12,0);
  uVar6 = (**(code **)(*plVar11 + 0x38))();
  FUN_006c3d30(param_1 + 0x158,uVar6);
  puVar5 = PTR_DAT_02710860;
  if (uVar6 != 0) {
    uVar21 = 0;
    do {
      while( true ) {
        plVar13 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11,uVar21);
        uVar14 = (**(code **)(*plVar13 + 0x10))();
        if ((uVar14 & 1) != 0) break;
LAB_006c3868:
        uVar21 = uVar21 + 1;
        if (uVar6 <= uVar21) goto LAB_006c3890;
      }
      puVar1 = *(undefined8 **)(param_1 + 0x160);
      local_1c8 = plVar13;
      if (puVar1 < *(undefined8 **)(param_1 + 0x168)) {
        uVar10 = *(undefined8 *)(param_1 + 0x170);
        lVar20 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
        if (*(ulong *)(lVar20 + 0x80) < 0x10) {
          *(undefined8 *)(lVar20 + *(ulong *)(lVar20 + 0x80) * 8) = uVar10;
          *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + 1;
          *puVar1 = local_1c8;
          *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + -1;
          *(long *)(param_1 + 0x160) = *(long *)(param_1 + 0x160) + 8;
          goto LAB_006c3868;
        }
        goto LAB_006c3c24;
      }
      FUN_006c4c40(param_1 + 0x158,&local_1c8);
      uVar21 = uVar21 + 1;
    } while (uVar21 < uVar6);
  }
LAB_006c3890:
  (**(code **)(**(long **)(param_1 + 0x150) + 0x90))(*(long **)(param_1 + 0x150),plVar11);
  (**(code **)(*plVar11 + 0x70))(plVar11);
  (**(code **)(*plVar12 + 0x38))(plVar12);
  local_1a0[0] = 2;
  uVar14 = (**(code **)(**(long **)(param_1 + 0x150) + 0x98))(*(long **)(param_1 + 0x150),local_1a0)
  ;
  lVar8 = *(long *)(param_1 + 0x188);
  lVar20 = *(long *)(param_1 + 400);
  uVar14 = uVar14 & 0xffffffff;
  uVar17 = lVar20 - lVar8 >> 3;
  if (uVar17 < uVar14) {
    FUN_006c4e30(param_1 + 0x188,uVar14 - uVar17);
    lVar8 = *(long *)(param_1 + 0x188);
    lVar20 = *(long *)(param_1 + 400);
  }
  else if (uVar17 != uVar14) {
    lVar20 = lVar8 + uVar14 * 8;
    *(long *)(param_1 + 400) = lVar20;
  }
  local_1a8[0] = 2;
  (**(code **)(**(long **)(param_1 + 0x150) + 0xa0))
            (*(long **)(param_1 + 0x150),local_1a8,lVar8,(ulong)(lVar20 - lVar8) >> 3,0);
  FUN_006c3ec0(param_1 + 0x1b8,uVar14);
  FUN_006c3ec0(param_1 + 0x1e8,uVar14);
  puVar1 = *(undefined8 **)(param_1 + 0x188);
  puVar3 = *(undefined8 **)(param_1 + 400);
  do {
    if (puVar1 == puVar3) {
      *(undefined1 *)(param_1 + 0x220) = 1;
      return;
    }
    plVar12 = (long *)*puVar1;
    pbVar15 = (byte *)(**(code **)(*plVar12 + 0x48))(plVar12);
    local_1b8 = strlen((char *)pbVar15);
    bVar4 = *pbVar15;
    local_1c8 = (long *)0xcbf29ce484222645;
    if (bVar4 != 0) {
      local_1c8 = (long *)0xcbf29ce484222645;
      pbVar18 = pbVar15;
      do {
        pbVar18 = pbVar18 + 1;
        local_1c8 = (long *)(((ulong)local_1c8 ^ (ulong)bVar4) * 0x100000001b3);
        bVar4 = *pbVar18;
      } while (bVar4 != 0);
    }
    local_1b0 = 0;
    pbStack_1c0 = pbVar15;
    iVar7 = FUN_00722fb0(param_3,&local_1c8);
    if (-1 < iVar7) {
      lVar20 = *(long *)(param_3 + 0x1b8);
      lVar8 = lVar20 + (long)iVar7 * 0x130;
      if (lVar8 != 0) {
        if ((short)plVar12[1] != 6) {
          plVar12 = (long *)0x0;
        }
        local_1d0 = plVar12;
        (**(code **)(*plVar12 + 0x180))(local_1d8);
        plVar12 = local_1d0;
        if ((local_1d8[0] & 1) == 0) {
          lVar20 = lVar20 + (long)iVar7 * 0x130;
          *(undefined4 *)(local_1d0 + 2) = *(undefined4 *)(*(long *)(lVar20 + 0x128) + 0x40);
          *(undefined4 *)((long)local_1d0 + 0x14) = 0xffffffff;
          iVar7 = *(int *)(*(long *)(lVar20 + 0x128) + 0x44);
          if ((-1 < iVar7) &&
             (lVar20 = *(long *)(param_1 + 0x188), *(long *)(param_1 + 400) != lVar20)) {
            lVar8 = *(long *)(param_3 + 0x1b8);
            uVar14 = 0;
            do {
              pbVar15 = (byte *)(**(code **)(**(long **)(lVar20 + uVar14 * 8) + 0x48))();
              bVar4 = *pbVar15;
              uVar17 = 0xcbf29ce484222645;
              if (bVar4 != 0) {
                uVar17 = 0xcbf29ce484222645;
                do {
                  pbVar15 = pbVar15 + 1;
                  uVar17 = (uVar17 ^ bVar4) * 0x100000001b3;
                  bVar4 = *pbVar15;
                } while (bVar4 != 0);
              }
              if (**(ulong **)(lVar8 + (long)iVar7 * 0x130 + 0x128) == uVar17) {
                *(int *)((long)plVar12 + 0x14) = (int)uVar14;
                puVar19 = *(undefined8 **)(param_1 + 0x1f0);
                if (puVar19 != *(undefined8 **)(param_1 + 0x1f8)) goto LAB_006c3b88;
                goto LAB_006c3a1c;
              }
              lVar20 = *(long *)(param_1 + 0x188);
              uVar14 = uVar14 + 1;
            } while (uVar14 < (ulong)(*(long *)(param_1 + 400) - lVar20 >> 3));
          }
          puVar19 = *(undefined8 **)(param_1 + 0x1f0);
          if (puVar19 == *(undefined8 **)(param_1 + 0x1f8)) {
LAB_006c3a1c:
            FUN_006c5050(param_1 + 0x1e8,&local_1d0);
          }
          else {
LAB_006c3b88:
            uVar10 = *(undefined8 *)(param_1 + 0x200);
            lVar20 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
            if (0xf < *(ulong *)(lVar20 + 0x80)) {
LAB_006c3c24:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(undefined8 *)(lVar20 + *(ulong *)(lVar20 + 0x80) * 8) = uVar10;
            *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + 1;
            *puVar19 = local_1d0;
            *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + -1;
            *(long *)(param_1 + 0x1f0) = *(long *)(param_1 + 0x1f0) + 8;
          }
        }
        else {
          local_1d0[2] = lVar8;
          puVar19 = *(undefined8 **)(param_1 + 0x1c0);
          if (puVar19 == *(undefined8 **)(param_1 + 0x1c8)) {
            FUN_006c5050(param_1 + 0x1b8,&local_1d0);
          }
          else {
            uVar10 = *(undefined8 *)(param_1 + 0x1d0);
            lVar20 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
            if (0xf < *(ulong *)(lVar20 + 0x80)) goto LAB_006c3c24;
            *(undefined8 *)(lVar20 + *(ulong *)(lVar20 + 0x80) * 8) = uVar10;
            *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + 1;
            *puVar19 = local_1d0;
            *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + -1;
            *(long *)(param_1 + 0x1c0) = *(long *)(param_1 + 0x1c0) + 8;
          }
        }
      }
    }
    if (local_1b0 != 0) {
      (**(code **)(*(long *)(local_1b0 + 0x48) + 0x18))();
      local_1b0 = 0;
    }
    puVar1 = puVar1 + 1;
  } while( true );
}


