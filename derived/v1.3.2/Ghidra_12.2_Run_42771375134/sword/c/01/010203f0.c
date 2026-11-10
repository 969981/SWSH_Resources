/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010203f0; name: FUN_010203f0
 */


void FUN_010203f0(undefined1 param_1 [16],float param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  byte bVar4;
  undefined4 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  code *pcVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  code *local_130;
  code *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [96];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  ulong local_88;
  undefined8 local_80 [2];
  
  iVar12 = 0;
  lVar14 = 0x40;
  local_88 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_b0 = 0;
  do {
    if ((*(long **)(param_3 + lVar14) != (long *)0x0) &&
       (uVar6 = (**(code **)(**(long **)(param_3 + lVar14) + 0x58))(), (uVar6 & 1) != 0)) {
      *(undefined4 *)(*(long *)(param_3 + lVar14) + 0x38) = *(undefined4 *)(param_3 + 0xe0);
      (**(code **)(**(long **)(param_3 + lVar14) + 0x10))();
      if ((iVar12 == 0) || (pcVar15 = *(code **)(param_3 + 0x80), pcVar15 == (code *)0x0)) {
        local_88 = (**(code **)(**(long **)(param_3 + lVar14) + 0x18))();
        plVar7 = *(long **)(param_3 + lVar14);
        if (iVar12 != 0) goto LAB_010204cc;
LAB_010205d8:
        puVar9 = (undefined8 *)(**(code **)(*plVar7 + 0x20))();
        local_a0 = *puVar9;
        puVar9 = (undefined8 *)(**(code **)(**(long **)(param_3 + lVar14) + 0x28))();
        local_98 = *puVar9;
        puVar9 = (undefined8 *)(**(code **)(**(long **)(param_3 + lVar14) + 0x38))();
        local_b0 = *puVar9;
        puVar9 = (undefined8 *)(**(code **)(**(long **)(param_3 + lVar14) + 0x30))();
        local_a8 = *puVar9;
        fVar17 = (float)local_a8;
        param_2 = (float)((ulong)local_a8 >> 0x20);
      }
      else {
        uVar5 = (**(code **)(**(long **)(param_3 + lVar14) + 0x40))();
        local_130 = (code *)(**(code **)(**(long **)(param_3 + lVar14) + 0x18))();
        local_88 = (*pcVar15)(&local_88,uVar5,&local_130);
        plVar7 = *(long **)(param_3 + lVar14);
        if (iVar12 == 0) goto LAB_010205d8;
LAB_010204cc:
        pcVar15 = *(code **)(param_3 + 0x88);
        if (pcVar15 == (code *)0x0) goto LAB_010205d8;
        uVar5 = (**(code **)(*plVar7 + 0x40))();
        uVar8 = (**(code **)(**(long **)(param_3 + lVar14) + 0x20))();
        uVar5 = (*pcVar15)(&local_a0,uVar5,uVar8);
        local_a0 = CONCAT44(param_2,uVar5);
        pcVar15 = *(code **)(param_3 + 0x88);
        uVar5 = (**(code **)(**(long **)(param_3 + lVar14) + 0x40))();
        uVar8 = (**(code **)(**(long **)(param_3 + lVar14) + 0x28))();
        uVar5 = (*pcVar15)(&local_98,uVar5,uVar8);
        local_98 = CONCAT44(param_2,uVar5);
        pcVar15 = *(code **)(param_3 + 0x88);
        uVar5 = (**(code **)(**(long **)(param_3 + lVar14) + 0x40))();
        uVar8 = (**(code **)(**(long **)(param_3 + lVar14) + 0x38))();
        uVar5 = (*pcVar15)(&local_b0,uVar5,uVar8);
        local_b0 = CONCAT44(param_2,uVar5);
        pcVar15 = *(code **)(param_3 + 0x88);
        uVar5 = (**(code **)(**(long **)(param_3 + lVar14) + 0x40))();
        uVar8 = (**(code **)(**(long **)(param_3 + lVar14) + 0x30))();
        fVar17 = (float)(*pcVar15)(&local_a8,uVar5,uVar8);
        local_a8 = CONCAT44(param_2,fVar17);
      }
      fVar17 = (float)local_a0 + fVar17;
      fVar19 = fVar17;
      if (1.0 < fVar17) {
        fVar19 = 1.0;
      }
      fVar18 = -1.0;
      if (-1.0 <= fVar17) {
        fVar18 = fVar19;
      }
      fVar19 = local_a0._4_4_ + param_2;
      fVar17 = fVar19;
      if (1.0 < fVar19) {
        fVar17 = 1.0;
      }
      param_2 = -1.0;
      if (-1.0 <= fVar19) {
        param_2 = fVar17;
      }
      iVar12 = iVar12 + 1;
      local_90 = CONCAT44(param_2,fVar18);
    }
    lVar14 = lVar14 + -0x20;
    if (lVar14 == 0) {
      if ((local_88 == 0) || (local_88 != *(ulong *)(param_3 + 0xd8))) {
        FUN_01021890(param_3 + 8);
      }
      FUN_010218b0(param_3 + 8);
      uVar6 = 0;
      puVar10 = (ulong *)(param_3 + 0x90);
      *puVar10 = 0;
      *(undefined8 *)(param_3 + 0xa0) = 0;
      *(undefined8 *)(param_3 + 0xa8) = 0;
      *(undefined8 *)(param_3 + 0x98) = 0;
      do {
        uVar11 = *(ulong *)(param_3 + 0xd8);
        uVar16 = 1L << (uVar6 & 0x3f);
        uVar13 = local_88 & uVar16;
        uVar2 = local_88 & uVar16;
        uVar1 = local_88 ^ 0xffffffffffffffff;
        bVar4 = FUN_010218a0(param_3 + 8);
        if (uVar13 != 0) {
          *puVar10 = *puVar10 | uVar16;
        }
        if ((uVar13 & (uVar11 ^ 0xffffffffffffffff)) != 0) {
          *(ulong *)(param_3 + 0x98) = *(ulong *)(param_3 + 0x98) | uVar16;
        }
        if ((uVar16 & uVar1 & uVar11) != 0) {
          *(ulong *)(param_3 + 0xa0) = *(ulong *)(param_3 + 0xa0) | uVar16;
        }
        if ((bVar4 & uVar2 != 0) != 0) {
          *(ulong *)(param_3 + 0xa8) = *(ulong *)(param_3 + 0xa8) | uVar16;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != 0x40);
      if (*(long *)(param_3 + 0x60) != 0) {
        if ((*(long **)(param_3 + 0x40) == (long *)0x0) ||
           (uVar6 = (**(code **)(**(long **)(param_3 + 0x40) + 0x58))(), (uVar6 & 1) == 0)) {
          bVar3 = false;
          lVar14 = *(long *)(param_3 + 0x60);
        }
        else {
          uVar8 = *(undefined8 *)(param_3 + 0x60);
          uVar5 = (**(code **)(**(long **)(param_3 + 0x40) + 0x40))();
          FUN_010254f0(&local_130,uVar8,uVar5);
          local_80[0] = *(undefined8 *)(param_3 + 0x90);
          uVar8 = (*local_130)(auStack_110,local_80);
          local_80[0] = *(undefined8 *)(param_3 + 0xa0);
          *(undefined8 *)(param_3 + 0x90) = uVar8;
          uVar8 = (*local_130)(auStack_110,local_80);
          local_80[0] = *(undefined8 *)(param_3 + 0xa8);
          *(undefined8 *)(param_3 + 0xa0) = uVar8;
          uVar8 = (*local_130)(auStack_110,local_80);
          local_80[0] = *(undefined8 *)(param_3 + 0x98);
          *(undefined8 *)(param_3 + 0xa8) = uVar8;
          uVar8 = (*local_130)(auStack_110,local_80);
          pcVar15 = local_128;
          *(undefined8 *)(param_3 + 0x98) = uVar8;
          if (local_128 != (code *)0x0) {
            local_120 = 0;
            uStack_118 = 0;
            local_130 = (code *)0x0;
            local_128 = (code *)0x0;
            (*pcVar15)(auStack_110);
          }
          bVar3 = true;
          lVar14 = *(long *)(param_3 + 0x60);
        }
        if (((lVar14 != 0) && (*(long **)(param_3 + 0x20) != (long *)0x0)) &&
           (uVar6 = (**(code **)(**(long **)(param_3 + 0x20) + 0x58))(), (uVar6 & 1) != 0)) {
          uVar8 = *(undefined8 *)(param_3 + 0x60);
          uVar5 = (**(code **)(**(long **)(param_3 + 0x20) + 0x40))();
          FUN_010254f0(&local_130,uVar8,uVar5);
          if ((bVar3) && (pcVar15 = *(code **)(param_3 + 0x80), pcVar15 != (code *)0x0)) {
            uVar5 = (**(code **)(**(long **)(param_3 + 0x20) + 0x40))();
            local_80[0] = *(undefined8 *)(param_3 + 0x90);
            local_80[0] = (*local_130)(auStack_110,local_80);
            uVar8 = (*pcVar15)(puVar10,uVar5,local_80);
            *(undefined8 *)(param_3 + 0x90) = uVar8;
            pcVar15 = *(code **)(param_3 + 0x80);
            uVar5 = (**(code **)(**(long **)(param_3 + 0x20) + 0x40))();
            local_80[0] = *(undefined8 *)(param_3 + 0xa0);
            local_80[0] = (*local_130)(auStack_110,local_80);
            uVar8 = (*pcVar15)((undefined8 *)(param_3 + 0xa0),uVar5,local_80);
            *(undefined8 *)(param_3 + 0xa0) = uVar8;
            pcVar15 = *(code **)(param_3 + 0x80);
            uVar5 = (**(code **)(**(long **)(param_3 + 0x20) + 0x40))();
            local_80[0] = *(undefined8 *)(param_3 + 0xa8);
            local_80[0] = (*local_130)(auStack_110,local_80);
            uVar8 = (*pcVar15)((undefined8 *)(param_3 + 0xa8),uVar5,local_80);
            *(undefined8 *)(param_3 + 0xa8) = uVar8;
            pcVar15 = *(code **)(param_3 + 0x80);
            uVar5 = (**(code **)(**(long **)(param_3 + 0x20) + 0x40))();
            local_80[0] = *(undefined8 *)(param_3 + 0x98);
            local_80[0] = (*local_130)(auStack_110,local_80);
            uVar8 = (*pcVar15)((undefined8 *)(param_3 + 0x98),uVar5,local_80);
            *(undefined8 *)(param_3 + 0x98) = uVar8;
            pcVar15 = local_128;
          }
          else {
            local_80[0] = *(undefined8 *)(param_3 + 0x90);
            uVar8 = (*local_130)(auStack_110,local_80);
            local_80[0] = *(undefined8 *)(param_3 + 0xa0);
            *(undefined8 *)(param_3 + 0x90) = uVar8;
            uVar8 = (*local_130)(auStack_110,local_80);
            local_80[0] = *(undefined8 *)(param_3 + 0xa8);
            *(undefined8 *)(param_3 + 0xa0) = uVar8;
            uVar8 = (*local_130)(auStack_110,local_80);
            local_80[0] = *(undefined8 *)(param_3 + 0x98);
            *(undefined8 *)(param_3 + 0xa8) = uVar8;
            uVar8 = (*local_130)(auStack_110,local_80);
            *(undefined8 *)(param_3 + 0x98) = uVar8;
            pcVar15 = local_128;
          }
          if (pcVar15 != (code *)0x0) {
            local_120 = 0;
            uStack_118 = 0;
            local_130 = (code *)0x0;
            local_128 = (code *)0x0;
            (*pcVar15)(auStack_110);
          }
        }
      }
      *(ulong *)(param_3 + 0xd8) = local_88;
      *(undefined8 *)(param_3 + 0xb0) = local_b0;
      *(undefined8 *)(param_3 + 200) = local_98;
      *(undefined8 *)(param_3 + 0xd0) = local_90;
      *(undefined8 *)(param_3 + 0xb8) = local_a8;
      *(undefined8 *)(param_3 + 0xc0) = local_a0;
      return;
    }
  } while( true );
}


