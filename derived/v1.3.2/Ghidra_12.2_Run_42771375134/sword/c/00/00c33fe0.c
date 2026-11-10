/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c33fe0; name: FUN_00c33fe0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c33fe0(long param_1,long *param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 local_b8;
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
  
  plVar8 = *(long **)(param_1 + 8);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar2 + 0x80) < 0x10) {
    *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar8;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    lVar3 = (**(code **)(*plVar8 + 0x10))(plVar8,400,0x10);
    if (lVar3 == 0) {
      (**(code **)(*plVar8 + 0xb8))(plVar8);
    }
    FUN_009fe380(lVar3,plVar8);
    *(long **)(lVar3 + 8) = plVar8;
    *(long *)(lVar3 + 0x10) = lVar3;
    *(undefined8 *)(lVar3 + 0x18) = 400;
    *(undefined8 *)(lVar3 + 0x20) = 0x10;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (*(ulong *)(lVar2 + 0x80) < 0x10) {
      *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar8;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      lVar4 = (**(code **)(*plVar8 + 0x10))(plVar8,0x80,8);
      if (lVar4 == 0) {
        (**(code **)(*plVar8 + 0xb8))(plVar8);
      }
      FUN_0077d050(lVar4,0x49);
      *(long **)(lVar4 + 8) = plVar8;
      *(long *)(lVar4 + 0x10) = lVar4;
      *(undefined8 *)(lVar4 + 0x18) = 0x80;
      *(undefined8 *)(lVar4 + 0x20) = 8;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      if ((*(long *)(param_1 + 0x68) != 0) &&
         (puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar11 != (undefined8 *)0x0
         )) {
        plVar5 = (long *)(**(code **)*puVar11)(puVar11);
        lVar2 = FUN_00be66c0();
        for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
          if (plVar5 == (long *)lVar2) {
            puVar11 = puVar11 + -10;
            goto LAB_00c34184;
          }
        }
      }
      puVar11 = (undefined8 *)0x0;
LAB_00c34184:
      FUN_00c1cc60(&local_68,puVar11);
      lVar2 = local_68;
      plVar5 = *(long **)(local_68 + 0xb60);
      if (*(long **)(local_68 + 0xb68) != plVar5) {
        plVar12 = *(long **)(local_68 + 0xb68);
        do {
          plVar13 = plVar12 + -1;
          if (*plVar13 != 0) {
            (**(code **)(*(long *)(*plVar13 + 0x48) + 0x18))();
            plVar12[-1] = 0;
          }
          plVar12 = plVar13;
        } while (plVar5 != plVar13);
      }
      *(long **)(lVar2 + 0xb68) = plVar5;
      if (param_2[1] != *param_2) {
        uVar14 = 0;
        plVar5 = (long *)(lVar3 + 0x48);
        lVar2 = 0x848;
        do {
          local_70 = FUN_00c35ac0(&local_b8,plVar8);
          if (local_70 == 0) {
            _DAT_00000060 = (int)uVar14 + 1;
          }
          else {
            (**(code **)(*(long *)(local_70 + 0x48) + 0x10))();
            *(int *)(local_70 + 0x60) = (int)uVar14 + 1;
          }
          if (lVar3 != 0) {
            lVar9 = *param_2;
            (**(code **)(*plVar5 + 0x10))(plVar5);
            if (*(long *)(lVar9 + lVar2) == 0x644) {
              uVar6 = FUN_009fe850(lVar3,lVar9 + lVar2 + -0x800);
              (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))(plVar5);
              if ((uVar6 & 1) != 0) {
                uVar6 = FUN_009fe1a0(lVar3,0x1b);
                uVar1 = FUN_008d3fc0(uVar6,0);
                *(undefined4 *)(local_70 + 0x188) = uVar1;
                FUN_0077d660(lVar4);
                local_78 = lVar4;
                if (lVar4 != 0) {
                  (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
                }
                FUN_009fee40(lVar3,2,uVar6 & 0xffffffff,&local_78);
                if (local_78 != 0) {
                  (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
                  local_78 = 0;
                }
                lVar9 = local_70 + 100;
                uVar10 = FUN_0077d470(lVar4);
                FUN_0077d7e0(lVar9,uVar10,0x49);
                FUN_0077d660(lVar4);
                local_80 = lVar4;
                if (lVar4 != 0) {
                  (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
                }
                FUN_009fee40(lVar3,3,uVar6 & 0xffffffff,&local_80);
                if (local_80 != 0) {
                  (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
                  local_80 = 0;
                }
                lVar9 = local_70 + 0xf6;
                uVar10 = FUN_0077d470(lVar4);
                FUN_0077d7e0(lVar9,uVar10,0x49);
                FUN_00be04d0(&local_b8,*param_2 + lVar2 + -0x810);
                *(undefined8 *)(local_70 + 0x198) = uStack_b0;
                *(undefined8 *)(local_70 + 0x1a0) = local_a8;
                *(undefined8 *)(local_70 + 400) = local_b8;
                *(undefined8 *)(local_70 + 0x1b8) = local_90;
                *(undefined8 *)(local_70 + 0x1c0) = uStack_88;
                *(undefined8 *)(local_70 + 0x1a8) = local_a0;
                *(undefined8 *)(local_70 + 0x1b0) = uStack_98;
                FUN_00be04d0(&local_b8,*param_2 + lVar2 + -0x808);
                *(undefined8 *)(local_70 + 0x1d0) = uStack_b0;
                *(undefined8 *)(local_70 + 0x1d8) = local_a8;
                *(undefined8 *)(local_70 + 0x1c8) = local_b8;
                *(undefined8 *)(local_70 + 0x1f0) = local_90;
                *(undefined8 *)(local_70 + 0x1f8) = uStack_88;
                *(undefined8 *)(local_70 + 0x1e0) = local_a0;
                *(undefined8 *)(local_70 + 0x1e8) = uStack_98;
              }
            }
            else {
              (**(code **)(*plVar5 + 0x18))(plVar5);
            }
          }
          lVar9 = local_68;
          uVar14 = uVar14 + 1;
          plVar12 = *(long **)(local_68 + 0xb68);
          if (plVar12 == *(long **)(local_68 + 0xb70)) {
            FUN_00c35e60(local_68 + 0xb60,&local_70);
          }
          else {
            uVar10 = *(undefined8 *)(local_68 + 0xb80);
            lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
            if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_00c3453c;
            *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar10;
            *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
            *plVar12 = local_70;
            if (local_70 != 0) {
              (**(code **)(*(long *)(local_70 + 0x48) + 0x10))();
            }
            *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
            *(long *)(lVar9 + 0xb68) = *(long *)(lVar9 + 0xb68) + 8;
          }
          if (local_70 != 0) {
            (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
            local_70 = 0;
          }
          lVar2 = lVar2 + 0x850;
        } while (uVar14 < (ulong)((param_2[1] - *param_2 >> 4) * 0x133f84cfe133f84d));
      }
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
        local_68 = 0;
      }
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      }
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
      }
      return;
    }
  }
LAB_00c3453c:
                    /* WARNING: Subroutine does not return */
  abort();
}


