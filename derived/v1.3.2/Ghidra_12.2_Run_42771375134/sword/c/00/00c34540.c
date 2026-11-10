/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c34540; name: FUN_00c34540
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c34540(long param_1,long *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  
  plVar9 = *(long **)(param_1 + 8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar3 + 0x80) < 0x10) {
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar9;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    lVar4 = (**(code **)(*plVar9 + 0x10))(plVar9,400,0x10);
    if (lVar4 == 0) {
      (**(code **)(*plVar9 + 0xb8))(plVar9);
    }
    FUN_009fe380(lVar4,plVar9);
    *(long **)(lVar4 + 8) = plVar9;
    *(long *)(lVar4 + 0x10) = lVar4;
    *(undefined8 *)(lVar4 + 0x18) = 400;
    *(undefined8 *)(lVar4 + 0x20) = 0x10;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (*(ulong *)(lVar3 + 0x80) < 0x10) {
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar9;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      lVar5 = (**(code **)(*plVar9 + 0x10))(plVar9,0x80,8);
      if (lVar5 == 0) {
        (**(code **)(*plVar9 + 0xb8))(plVar9);
      }
      FUN_0077d050(lVar5,0x49);
      *(long **)(lVar5 + 8) = plVar9;
      *(long *)(lVar5 + 0x10) = lVar5;
      *(undefined8 *)(lVar5 + 0x18) = 0x80;
      *(undefined8 *)(lVar5 + 0x20) = 8;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      if ((*(long *)(param_1 + 0x68) != 0) &&
         (puVar12 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar12 != (undefined8 *)0x0
         )) {
        plVar6 = (long *)(**(code **)*puVar12)(puVar12);
        lVar3 = FUN_00be66c0();
        for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
          if (plVar6 == (long *)lVar3) {
            puVar12 = puVar12 + -10;
            goto LAB_00c346e4;
          }
        }
      }
      puVar12 = (undefined8 *)0x0;
LAB_00c346e4:
      FUN_00c1cc60(&local_68,puVar12);
      lVar3 = local_68;
      plVar6 = *(long **)(local_68 + 0xbc0);
      if (*(long **)(local_68 + 0xbc8) != plVar6) {
        plVar13 = *(long **)(local_68 + 0xbc8);
        do {
          plVar14 = plVar13 + -1;
          if (*plVar14 != 0) {
            (**(code **)(*(long *)(*plVar14 + 0x48) + 0x18))();
            plVar13[-1] = 0;
          }
          plVar13 = plVar14;
        } while (plVar6 != plVar14);
      }
      *(long **)(lVar3 + 0xbc8) = plVar6;
      if (param_2[1] != *param_2) {
        uVar15 = 0;
        plVar6 = (long *)(lVar4 + 0x48);
        lVar3 = 0x848;
        do {
          local_70 = FUN_00c36080(&local_b8,plVar9);
          if (local_70 == 0) {
            _DAT_00000060 = (int)uVar15 + 1;
          }
          else {
            (**(code **)(*(long *)(local_70 + 0x48) + 0x10))();
            *(int *)(local_70 + 0x60) = (int)uVar15 + 1;
          }
          if (lVar4 != 0) {
            lVar10 = *param_2;
            (**(code **)(*plVar6 + 0x10))(plVar6);
            if (*(long *)(lVar10 + lVar3) == 0x644) {
              uVar7 = FUN_009fe850(lVar4,lVar10 + lVar3 + -0x800);
              (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))(plVar6);
              if ((uVar7 & 1) != 0) {
                uVar7 = FUN_009fe1a0(lVar4,0x1b);
                uVar2 = FUN_008d3fc0(uVar7,0);
                *(undefined4 *)(local_70 + 0x188) = uVar2;
                FUN_0077d660(lVar5);
                local_78 = lVar5;
                if (lVar5 != 0) {
                  (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
                }
                FUN_009fee40(lVar4,2,uVar7 & 0xffffffff,&local_78);
                if (local_78 != 0) {
                  (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
                  local_78 = 0;
                }
                lVar10 = local_70 + 100;
                uVar11 = FUN_0077d470(lVar5);
                FUN_0077d7e0(lVar10,uVar11,0x49);
                FUN_0077d660(lVar5);
                local_80 = lVar5;
                if (lVar5 != 0) {
                  (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
                }
                FUN_009fee40(lVar4,3,uVar7 & 0xffffffff,&local_80);
                if (local_80 != 0) {
                  (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
                  local_80 = 0;
                }
                lVar10 = local_70 + 0xf6;
                uVar11 = FUN_0077d470(lVar5);
                FUN_0077d7e0(lVar10,uVar11,0x49);
                FUN_00be04d0(&local_b8,*param_2 + lVar3 + -0x810);
                *(undefined8 *)(local_70 + 0x198) = uStack_b0;
                *(undefined8 *)(local_70 + 0x1a0) = local_a8;
                *(long *)(local_70 + 400) = local_b8;
                *(undefined8 *)(local_70 + 0x1b8) = local_90;
                *(undefined8 *)(local_70 + 0x1c0) = uStack_88;
                *(undefined8 *)(local_70 + 0x1a8) = local_a0;
                *(undefined8 *)(local_70 + 0x1b0) = uStack_98;
                FUN_00be04d0(&local_b8,*param_2 + lVar3 + -0x808);
                *(undefined8 *)(local_70 + 0x1d0) = uStack_b0;
                *(undefined8 *)(local_70 + 0x1d8) = local_a8;
                *(long *)(local_70 + 0x1c8) = local_b8;
                *(undefined8 *)(local_70 + 0x1f0) = local_90;
                *(undefined8 *)(local_70 + 0x1f8) = uStack_88;
                *(undefined8 *)(local_70 + 0x1e0) = local_a0;
                *(undefined8 *)(local_70 + 0x1e8) = uStack_98;
                *(short *)(local_70 + 0x18c) = (short)*(undefined4 *)(*param_2 + lVar3 + -0x83c);
                uVar2 = FUN_009fe1a0(lVar4,0x19);
                *(undefined4 *)(local_70 + 0x200) = uVar2;
                uVar2 = FUN_008d3750();
                FUN_009fef60(&local_b8,lVar4,4,uVar2);
                lVar10 = local_70 + 0x204;
                uVar11 = FUN_0077d470(local_b8);
                FUN_0077d7e0(lVar10,uVar11,0xd);
                uVar1 = FUN_009fe1a0(lVar4,0x1a);
                *(undefined1 *)(local_70 + 0x236) = uVar1;
                uVar1 = FUN_009fe1a0(lVar4,0x1b);
                *(undefined1 *)(local_70 + 0x237) = uVar1;
                if (local_b8 != 0) {
                  (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
                  local_b8 = 0;
                }
              }
            }
            else {
              (**(code **)(*plVar6 + 0x18))(plVar6);
            }
          }
          lVar10 = local_68;
          uVar15 = uVar15 + 1;
          plVar13 = *(long **)(local_68 + 0xbc8);
          if (plVar13 == *(long **)(local_68 + 0xbd0)) {
            FUN_00c36450(local_68 + 0xbc0,&local_70);
          }
          else {
            uVar11 = *(undefined8 *)(local_68 + 0xbe0);
            lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
            if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_00c34b3c;
            *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar11;
            *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
            *plVar13 = local_70;
            if (local_70 != 0) {
              (**(code **)(*(long *)(local_70 + 0x48) + 0x10))();
            }
            *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
            *(long *)(lVar10 + 0xbc8) = *(long *)(lVar10 + 0xbc8) + 8;
          }
          if (local_70 != 0) {
            (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
            local_70 = 0;
          }
          lVar3 = lVar3 + 0x850;
        } while (uVar15 < (ulong)((param_2[1] - *param_2 >> 4) * 0x133f84cfe133f84d));
      }
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
        local_68 = 0;
      }
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
      }
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      }
      return;
    }
  }
LAB_00c34b3c:
                    /* WARNING: Subroutine does not return */
  abort();
}


