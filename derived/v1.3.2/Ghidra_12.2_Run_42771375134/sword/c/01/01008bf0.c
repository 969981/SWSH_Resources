/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01008bf0; name: FUN_01008bf0
 */


void FUN_01008bf0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong unaff_x28;
  float fVar17;
  undefined8 local_2b8;
  long local_2b0;
  long local_2a8;
  ulong local_2a0 [2];
  undefined *local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined *local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  
  if (*(long *)(param_1 + 0x578) != 0) {
    plVar1 = (long *)(param_1 + 0x3b0);
    plVar2 = (long *)(param_1 + 0x3d8);
    uVar16 = 0;
    puVar3 = (undefined8 *)(param_1 + 0x3e0);
    puVar4 = PTR_DAT_02710ac8 + 0x10;
    puVar15 = (undefined8 *)PTR_PTR_02710928;
    do {
      uVar8 = FUN_006e72a0();
      if (uVar8 <= uVar16) {
        return;
      }
      local_2a0[0] = 0;
      local_1f0 = 0;
      uStack_1e8 = 0;
      local_200 = 0;
      uStack_1f8 = 0;
      local_270 = 0;
      uStack_268 = 0;
      local_288 = 0;
      local_280 = 0;
      uStack_278 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_178 = 0;
      local_160 = 0;
      uStack_158 = 0;
      local_170 = 0;
      uStack_168 = 0;
      local_290 = puVar4;
      local_180 = puVar4;
      if (*(long *)(param_1 + 0x578) == 0) {
        if (((*PTR_DAT_02715558 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_02715558), iVar7 != 0)) {
          lVar9 = FUN_006e5e60();
          *(long *)PTR_DAT_02715560 = lVar9;
          if (lVar9 != 0) {
            (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
          }
          FUN_001001c0(PTR_LAB_02715568,PTR_DAT_02715560,&PTR_LOOP_025db000);
          __cxa_guard_release(PTR_DAT_02715558);
        }
        local_2a8 = *(long *)PTR_DAT_02715560;
        if (local_2a8 != 0) {
          (**(code **)(*(long *)(local_2a8 + 0x48) + 0x10))();
        }
      }
      else {
        FUN_006e7280(&local_2a8,*(long *)(param_1 + 0x578),uVar16);
      }
      puVar5 = (ulong *)PTR_DAT_02710920;
      if (local_2a8 != 0) {
        puVar5 = (ulong *)(local_2a8 + 0x58);
      }
      local_2a0[0] = *puVar5;
      puVar6 = puVar15;
      if (local_2a8 != 0) {
        puVar6 = (undefined8 *)(local_2a8 + 0x60);
      }
      local_2b8 = *puVar6;
      FUN_01009120(&local_2b0,"bin/field/param/placement/",&local_2b8,&DAT_01cfd905);
      puVar6 = puVar15;
      if (local_2b0 != 0) {
        puVar6 = (undefined8 *)(local_2b0 + 0x60);
      }
      FUN_010087b0(&local_290,*puVar6,param_2,param_3);
      if (local_2b0 != 0) {
        (**(code **)(*(long *)(local_2b0 + 0x48) + 0x18))();
        local_2b0 = 0;
      }
      puVar6 = puVar15;
      if (local_2a8 != 0) {
        puVar6 = (undefined8 *)(local_2a8 + 0x60);
      }
      local_2b8 = *puVar6;
      FUN_01009210(&local_2b0,"bin/field/param/terrain/",&local_2b8,&DAT_01cfd905);
      puVar6 = puVar15;
      if (local_2b0 != 0) {
        puVar6 = (undefined8 *)(local_2b0 + 0x60);
      }
      FUN_010087b0(&local_180,*puVar6,param_2,param_4);
      if (local_2b0 != 0) {
        (**(code **)(*(long *)(local_2b0 + 0x48) + 0x18))();
        local_2b0 = 0;
      }
      uVar12 = local_2a0[0];
      uVar8 = *(ulong *)(param_1 + 0x3b8);
      if (uVar8 == 0) {
LAB_01008ec8:
        plVar10 = (long *)(**(code **)(*(long *)*puVar3 + 0x10))((long *)*puVar3,0x250,0x10);
        if (plVar10 == (long *)0x0) {
          (**(code **)(*(long *)*puVar3 + 0xb8))();
        }
        FUN_01017d70(puVar3,plVar10 + 2,local_2a0,local_2a0);
        *plVar10 = 0;
        plVar10[1] = uVar12;
        fVar17 = (float)(*(long *)(param_1 + 0x3f8) + 1);
        if ((uVar8 == 0) || (*(float *)(param_1 + 0x400) * (float)uVar8 < fVar17)) {
          if (uVar8 < 3) {
            uVar13 = 1;
          }
          else {
            uVar13 = (ulong)((uVar8 - 1 & uVar8) != 0);
          }
          uVar14 = (ulong)(fVar17 / *(float *)(param_1 + 0x400));
          uVar13 = uVar13 | uVar8 << 1;
          if (uVar14 <= uVar13) {
            uVar14 = uVar13;
          }
          FUN_01017c60(plVar1,uVar14);
          uVar8 = *(ulong *)(param_1 + 0x3b8);
          if ((uVar8 - 1 & uVar8) == 0) {
            unaff_x28 = uVar8 - 1 & uVar12;
            plVar11 = *(long **)(*plVar1 + unaff_x28 * 8);
          }
          else {
            if (uVar8 <= uVar12) {
              uVar13 = 0;
              if (uVar8 != 0) {
                uVar13 = uVar12 / uVar8;
              }
              unaff_x28 = uVar12 - uVar13 * uVar8;
              plVar11 = *(long **)(*plVar1 + unaff_x28 * 8);
              goto joined_r0x01008fec;
            }
            plVar11 = *(long **)(*plVar1 + uVar12 * 8);
            unaff_x28 = uVar12;
          }
          if (plVar11 == (long *)0x0) goto LAB_01008ff0;
LAB_01008f4c:
          *plVar10 = *plVar11;
LAB_01009040:
          *plVar11 = (long)plVar10;
        }
        else {
          plVar11 = *(long **)(*plVar1 + unaff_x28 * 8);
joined_r0x01008fec:
          if (plVar11 != (long *)0x0) goto LAB_01008f4c;
LAB_01008ff0:
          *plVar10 = *plVar2;
          *plVar2 = (long)plVar10;
          *(long **)(*plVar1 + unaff_x28 * 8) = plVar2;
          if (*plVar10 != 0) {
            uVar12 = *(ulong *)(*plVar10 + 8);
            if ((uVar8 - 1 & uVar8) == 0) {
              uVar12 = uVar12 & uVar8 - 1;
            }
            else if (uVar8 <= uVar12) {
              uVar13 = 0;
              if (uVar8 != 0) {
                uVar13 = uVar12 / uVar8;
              }
              uVar12 = uVar12 - uVar13 * uVar8;
            }
            plVar11 = (long *)(*plVar1 + uVar12 * 8);
            goto LAB_01009040;
          }
        }
        *(long *)(param_1 + 0x3f8) = *(long *)(param_1 + 0x3f8) + 1;
        puVar15 = (undefined8 *)PTR_PTR_02710928;
      }
      else {
        uVar13 = uVar8 - 1;
        if ((uVar13 & uVar8) == 0) {
          unaff_x28 = uVar13 & local_2a0[0];
          plVar10 = *(long **)(*plVar1 + unaff_x28 * 8);
          if (plVar10 != (long *)0x0) goto LAB_01008e48;
          goto LAB_01008ec8;
        }
        unaff_x28 = local_2a0[0];
        if (uVar8 <= local_2a0[0]) {
          uVar14 = 0;
          if (uVar8 != 0) {
            uVar14 = local_2a0[0] / uVar8;
          }
          unaff_x28 = local_2a0[0] - uVar14 * uVar8;
        }
        plVar10 = *(long **)(*plVar1 + unaff_x28 * 8);
        if (plVar10 == (long *)0x0) goto LAB_01008ec8;
LAB_01008e48:
        if ((uVar13 & uVar8) == 0) {
          do {
            plVar10 = (long *)*plVar10;
            if ((plVar10 == (long *)0x0) ||
               (plVar10[1] != local_2a0[0] && (plVar10[1] & uVar13) != unaff_x28))
            goto LAB_01008ec8;
          } while (plVar10[2] != local_2a0[0]);
        }
        else {
          do {
            plVar10 = (long *)*plVar10;
            if (plVar10 == (long *)0x0) goto LAB_01008ec8;
            uVar13 = plVar10[1];
            if (uVar13 != local_2a0[0]) {
              if (uVar8 <= uVar13) {
                uVar14 = 0;
                if (uVar8 != 0) {
                  uVar14 = uVar13 / uVar8;
                }
                uVar13 = uVar13 - uVar14 * uVar8;
              }
              if (uVar13 != unaff_x28) goto LAB_01008ec8;
            }
          } while (plVar10[2] != local_2a0[0]);
        }
      }
      if (local_2a8 != 0) {
        (**(code **)(*(long *)(local_2a8 + 0x48) + 0x18))();
        local_2a8 = 0;
      }
      FUN_01009300(local_2a0);
      uVar16 = uVar16 + 1;
    } while (*(long *)(param_1 + 0x578) != 0);
  }
  return;
}


