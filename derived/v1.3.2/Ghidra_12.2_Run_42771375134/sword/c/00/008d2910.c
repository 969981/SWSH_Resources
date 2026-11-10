/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008d2910; name: FUN_008d2910
 */


void FUN_008d2910(long param_1)

{
  long *plVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  uint *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong unaff_x26;
  ulong uVar14;
  ulong uVar15;
  float fVar16;
  undefined *local_1b0;
  long local_1a8;
  long local_1a0;
  code *local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [96];
  long local_120;
  code *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [96];
  long local_a0 [2];
  undefined1 *local_90;
  long local_88;
  long local_80;
  long local_70 [2];
  
  FUN_00a9d760(local_a0,"bin/pml/item/item_hash_to_index.dat");
  local_110 = 0;
  uStack_108 = 0;
  local_120 = 0;
  local_118 = (code *)0x0;
  local_198 = (code *)0x0;
  local_190 = 0;
  uStack_188 = 0;
  local_1b0 = PTR_DAT_02710ac8 + 0x10;
  local_1a0 = 0;
  lVar4 = FUN_00866030();
  FUN_006dccd0(local_70,*(undefined8 *)PTR_DAT_02710788,0,local_a0,0,*(undefined8 *)(lVar4 + 0x290),
               0);
  local_1a8 = local_70[0];
  if (local_70[0] != 0) {
    plVar10 = (long *)(local_70[0] + 0x48);
    (**(code **)(*plVar10 + 0x10))(plVar10);
    if ((local_1a0 != 0) || (local_120 != 0)) {
      FUN_006e1e70(local_70[0],&local_1b0,1);
    }
    FUN_006e1be0(local_70[0]);
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  puVar11 = *(uint **)(local_1a8 + 400);
  uVar5 = *puVar11;
  if (uVar5 != 0) {
    uVar12 = 0;
    plVar10 = (long *)(param_1 + 0xb0);
    plVar1 = (long *)(param_1 + 0xd8);
    do {
      while( true ) {
        uVar15 = *(ulong *)(puVar11 + uVar12 * 4 + 1);
        uVar7 = *(ulong *)((long)(puVar11 + uVar12 * 4 + 1) + 8);
        uVar14 = *(ulong *)(param_1 + 0xb8);
        if (uVar14 != 0) break;
LAB_008d2ad8:
        plVar8 = (long *)(**(code **)(**(long **)(param_1 + 0xe0) + 0x10))
                                   (*(long **)(param_1 + 0xe0),0x20,8);
        if (plVar8 == (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0xe0) + 0xb8))();
        }
        uVar13 = *(undefined8 *)(param_1 + 0xe0);
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar13;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
        plVar8[2] = uVar15;
        *(short *)(plVar8 + 3) = (short)uVar7;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
        *plVar8 = 0;
        plVar8[1] = uVar15;
        fVar16 = (float)(*(long *)(param_1 + 0xf8) + 1);
        if ((uVar14 == 0) || (*(float *)(param_1 + 0x100) * (float)uVar14 < fVar16)) {
          if (uVar14 < 3) {
            uVar7 = 1;
          }
          else {
            uVar7 = (ulong)((uVar14 - 1 & uVar14) != 0);
          }
          uVar9 = (ulong)(fVar16 / *(float *)(param_1 + 0x100));
          uVar7 = uVar7 | uVar14 << 1;
          if (uVar9 <= uVar7) {
            uVar9 = uVar7;
          }
          FUN_008d3210(plVar10,uVar9);
          uVar14 = *(ulong *)(param_1 + 0xb8);
          if ((uVar14 - 1 & uVar14) == 0) {
            unaff_x26 = uVar14 - 1 & uVar15;
            plVar6 = *(long **)(*plVar10 + unaff_x26 * 8);
            goto joined_r0x008d2bec;
          }
          if (uVar15 < uVar14) {
            plVar6 = *(long **)(*plVar10 + uVar15 * 8);
            unaff_x26 = uVar15;
            goto joined_r0x008d2bec;
          }
          uVar7 = 0;
          if (uVar14 != 0) {
            uVar7 = uVar15 / uVar14;
          }
          unaff_x26 = uVar15 - uVar7 * uVar14;
          plVar6 = *(long **)(*plVar10 + unaff_x26 * 8);
          if (plVar6 == (long *)0x0) goto LAB_008d2c04;
LAB_008d2b80:
          *plVar8 = *plVar6;
LAB_008d2c6c:
          *plVar6 = (long)plVar8;
        }
        else {
          plVar6 = *(long **)(*plVar10 + unaff_x26 * 8);
joined_r0x008d2bec:
          if (plVar6 != (long *)0x0) goto LAB_008d2b80;
LAB_008d2c04:
          *plVar8 = *plVar1;
          *plVar1 = (long)plVar8;
          *(long **)(*plVar10 + unaff_x26 * 8) = plVar1;
          if (*plVar8 != 0) {
            uVar7 = *(ulong *)(*plVar8 + 8);
            if ((uVar14 - 1 & uVar14) == 0) {
              uVar7 = uVar7 & uVar14 - 1;
            }
            else if (uVar14 <= uVar7) {
              uVar15 = 0;
              if (uVar14 != 0) {
                uVar15 = uVar7 / uVar14;
              }
              uVar7 = uVar7 - uVar15 * uVar14;
            }
            plVar6 = (long *)(*plVar10 + uVar7 * 8);
            goto LAB_008d2c6c;
          }
        }
        *(long *)(param_1 + 0xf8) = *(long *)(param_1 + 0xf8) + 1;
        uVar5 = *puVar11;
        uVar12 = uVar12 + 1;
        if (uVar5 <= uVar12) goto LAB_008d2c94;
      }
      uVar9 = uVar14 - 1;
      if ((uVar9 & uVar14) == 0) {
        unaff_x26 = uVar9 & uVar15;
        plVar8 = *(long **)(*plVar10 + unaff_x26 * 8);
      }
      else {
        unaff_x26 = uVar15;
        if (uVar14 <= uVar15) {
          uVar2 = 0;
          if (uVar14 != 0) {
            uVar2 = uVar15 / uVar14;
          }
          unaff_x26 = uVar15 - uVar2 * uVar14;
        }
        plVar8 = *(long **)(*plVar10 + unaff_x26 * 8);
      }
      if (plVar8 == (long *)0x0) goto LAB_008d2ad8;
      if ((uVar9 & uVar14) == 0) {
        do {
          plVar8 = (long *)*plVar8;
          if ((plVar8 == (long *)0x0) || (plVar8[1] != uVar15 && (plVar8[1] & uVar9) != unaff_x26))
          goto LAB_008d2ad8;
        } while (plVar8[2] != uVar15);
      }
      else {
        do {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_008d2ad8;
          uVar9 = plVar8[1];
          if (uVar9 != uVar15) {
            if (uVar14 <= uVar9) {
              uVar2 = 0;
              if (uVar14 != 0) {
                uVar2 = uVar9 / uVar14;
              }
              uVar9 = uVar9 - uVar2 * uVar14;
            }
            if (uVar9 != unaff_x26) goto LAB_008d2ad8;
          }
        } while (plVar8[2] != uVar15);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar5);
  }
LAB_008d2c94:
  local_1b0 = PTR_DAT_02710a48 + 0x10;
  if (local_1a8 == 0) {
    local_1a8 = 0;
    pcVar3 = local_118;
  }
  else {
    FUN_006e2100(local_1a8,&local_1b0);
    lVar4 = local_1a8;
    local_1a8 = 0;
    pcVar3 = local_118;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
      pcVar3 = local_118;
    }
  }
  local_118 = pcVar3;
  if (pcVar3 != (code *)0x0) {
    local_110 = 0;
    uStack_108 = 0;
    local_120 = 0;
    local_118 = (code *)0x0;
    (*pcVar3)(auStack_100);
  }
  pcVar3 = local_198;
  if (local_198 != (code *)0x0) {
    local_190 = 0;
    uStack_188 = 0;
    local_1a0 = 0;
    local_198 = (code *)0x0;
    (*pcVar3)(auStack_180);
  }
  if (local_1a8 != 0) {
    (**(code **)(*(long *)(local_1a8 + 0x48) + 0x18))();
    local_1a8 = 0;
  }
  if ((local_88 != 0) && (local_a0[0] != 0)) {
    (**(code **)(*(long *)(local_a0[0] + 0x48) + 0x18))();
  }
  local_a0[0] = 0;
  local_a0[1] = 0xcbf29ce484222645;
  local_90 = &DAT_01d38550;
  local_88 = 0;
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
  }
  return;
}


