/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01167e60; name: FUN_01167e60
 */


void FUN_01167e60(undefined1 *param_1,long param_2)

{
  bool bVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  undefined1 auVar18 [16];
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  char local_a0 [8];
  long local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  if ((*(long *)(param_2 + 0x80) == 0) ||
     (puVar3 = *(undefined8 **)(*(long *)(param_2 + 0x80) + 0x60), puVar3 == (undefined8 *)0x0)) {
    FUN_011537b0(param_2 + 0x88);
  }
  else {
    puVar13 = puVar3 + -10;
    (**(code **)*puVar3)();
    uVar4 = FUN_01168be0();
    if ((uVar4 & 1) == 0) {
      puVar13 = (undefined8 *)0x0;
    }
    lVar5 = FUN_011537b0(param_2 + 0x88);
    if (((puVar13 != (undefined8 *)0x0) && (lVar5 != 0)) &&
       (lVar15 = *(long *)PTR_DAT_02718f20, lVar15 != 0)) {
      plVar6 = (long *)FUN_011644e0(*(undefined8 *)(param_2 + 0x98));
      local_88 = (long *)0x0;
      local_80 = (long *)0x0;
      local_90 = (long *)0x0;
      local_68 = 0;
      uStack_70 = 0;
      local_78 = plVar6;
      uVar4 = FUN_01164670(*(undefined8 *)(param_2 + 0x98));
      uVar12 = 4;
      if ((uVar4 & 1) == 0) {
        uVar12 = 2;
      }
      uVar16 = 0;
      do {
        auVar18 = FUN_0119d110(puVar13,uVar16);
        if ((auVar18._0_8_ & 0xff) == 0) {
          *param_1 = 0;
          plVar14 = local_90;
          goto joined_r0x011683d4;
        }
        FUN_011f2690(local_a0,lVar5);
        if (local_a0[0] == '\0') {
          *param_1 = 0;
          plVar14 = local_90;
          goto joined_r0x011683d4;
        }
        FUN_011ffbe0(&local_a8,lVar15,auVar18._8_8_);
        if ((local_a8 == 0) || (lVar17 = *(long *)(local_a8 + 8), lVar17 == 0)) {
          *param_1 = 0;
          bVar1 = true;
          if (local_a0[0] == '\0') goto LAB_011682c8;
LAB_011682ec:
          if (local_98 != 0) {
            (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
            local_98 = 0;
          }
          local_a0[0] = '\0';
          plVar14 = local_90;
          if (bVar1) goto joined_r0x011683d4;
        }
        else {
          plVar14 = (long *)(lVar17 + 0x48);
          (**(code **)(*plVar14 + 0x10))(plVar14);
          lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
          if (0xf < *(ulong *)(lVar7 + 0x80)) {
LAB_01168454:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar6;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
          lVar8 = (**(code **)(*plVar6 + 0x10))(plVar6,0x80,8);
          if (lVar8 == 0) {
            (**(code **)(*plVar6 + 0xb8))(plVar6);
          }
          FUN_0077d050(lVar8,4);
          *(undefined8 *)(lVar8 + 0x18) = 0x80;
          *(long **)(lVar8 + 8) = plVar6;
          *(long *)(lVar8 + 0x10) = lVar8;
          *(undefined8 *)(lVar8 + 0x20) = 8;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
          if (lVar8 != 0) {
            (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
          }
          uVar9 = FUN_01524df0(lVar17);
          FUN_00cc1290(uVar9,lVar8);
          lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
          if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_01168454;
          *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar6;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
          lVar10 = (**(code **)(*plVar6 + 0x10))(plVar6,0x80,8);
          if (lVar10 == 0) {
            (**(code **)(*plVar6 + 0xb8))(plVar6);
          }
          FUN_0077d050(lVar10,0x2d);
          *(undefined8 *)(lVar10 + 0x18) = 0x80;
          *(long **)(lVar10 + 8) = plVar6;
          *(long *)(lVar10 + 0x10) = lVar10;
          *(undefined8 *)(lVar10 + 0x20) = 8;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
          if (lVar10 != 0) {
            (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
          }
          FUN_014c9030(*(undefined8 *)(param_2 + 0xa8),0,lVar17);
          FUN_014c62d0(*(undefined8 *)(param_2 + 0xa8),lVar10,*(undefined8 *)(param_2 + 0xa0));
          lVar17 = local_98;
          local_b8 = 0;
          local_b0 = 0;
          local_c0 = 0;
          if (local_98 == 0) {
            local_c0 = lVar17;
          }
          else {
            (**(code **)(*(long *)(local_98 + 0x48) + 0x10))();
            lVar7 = local_c0;
            local_c0 = lVar17;
            if (lVar7 != 0) {
              (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
            }
          }
          if (lVar10 != 0) {
            (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
          }
          lVar17 = lVar10;
          if (local_b8 != 0) {
            plVar11 = (long *)(local_b8 + 0x48);
            local_b8 = lVar10;
            (**(code **)(*plVar11 + 0x18))();
            lVar17 = local_b8;
          }
          local_b8 = lVar17;
          if (lVar8 != 0) {
            (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
          }
          lVar17 = lVar8;
          if (local_b0 != 0) {
            plVar11 = (long *)(local_b0 + 0x48);
            local_b0 = lVar8;
            (**(code **)(*plVar11 + 0x18))();
            lVar17 = local_b0;
          }
          local_b0 = lVar17;
          plVar2 = local_78;
          plVar11 = local_88;
          if (local_88 == local_80) {
            FUN_00bdf4a0(&local_90,&local_c0);
          }
          else {
            lVar17 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
            if (0xf < *(ulong *)(lVar17 + 0x80)) goto LAB_01168454;
            *(long **)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = plVar2;
            *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
            *plVar11 = local_c0;
            if (local_c0 != 0) {
              (**(code **)(*(long *)(local_c0 + 0x48) + 0x10))();
            }
            plVar11[1] = local_b8;
            if (local_b8 != 0) {
              (**(code **)(*(long *)(local_b8 + 0x48) + 0x10))();
            }
            plVar11[2] = local_b0;
            if (local_b0 != 0) {
              (**(code **)(*(long *)(local_b0 + 0x48) + 0x10))();
            }
            *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
            local_88 = local_88 + 3;
          }
          if (local_b0 != 0) {
            (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
            local_b0 = 0;
          }
          if (local_b8 != 0) {
            (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
            local_b8 = 0;
          }
          if (local_c0 != 0) {
            (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
            local_c0 = 0;
          }
          if (lVar10 != 0) {
            (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
          }
          if (lVar8 != 0) {
            (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
          }
          (**(code **)(*plVar14 + 0x18))(plVar14);
          bVar1 = false;
          if (local_a0[0] != '\0') goto LAB_011682ec;
LAB_011682c8:
          plVar14 = local_90;
          if (bVar1) {
joined_r0x011683d4:
            local_90 = plVar14;
            plVar6 = local_88;
            if (plVar14 == (long *)0x0) {
              return;
            }
            while (plVar11 = plVar6, plVar11 != plVar14) {
              if (plVar11[-1] != 0) {
                (**(code **)(*(long *)(plVar11[-1] + 0x48) + 0x18))();
                plVar11[-1] = 0;
              }
              if (plVar11[-2] != 0) {
                (**(code **)(*(long *)(plVar11[-2] + 0x48) + 0x18))();
                plVar11[-2] = 0;
              }
              plVar6 = plVar11 + -3;
              if (plVar11[-3] != 0) {
                (**(code **)(*(long *)(plVar11[-3] + 0x48) + 0x18))();
                plVar11[-3] = 0;
              }
            }
            local_88 = plVar14;
            (**(code **)(*local_78 + 0x18))(local_78,local_90,(long)local_80 - (long)local_90,8);
            return;
          }
        }
        uVar16 = uVar16 + 1;
        if (uVar12 <= uVar16) {
          *(long **)(param_1 + 0x20) = local_78;
          *(undefined8 *)(param_1 + 0x28) = 0;
          *(undefined4 *)(param_1 + 0x30) = 0;
          *(long **)(param_1 + 0x10) = local_88;
          *(long **)(param_1 + 0x18) = local_80;
          *(long **)(param_1 + 8) = local_90;
          *param_1 = 1;
          return;
        }
      } while( true );
    }
  }
  *param_1 = 0;
  return;
}


