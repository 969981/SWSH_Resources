/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010f2730; name: FUN_010f2730
 */


/* WARNING: Removing unreachable block (ram,0x010f2b3c) */

void FUN_010f2730(long param_1,uint param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  char cVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 uVar16;
  long *plVar17;
  long lVar18;
  bool bVar19;
  long local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined1 local_2b8;
  
  plVar15 = *(long **)(param_1 + 8);
  puVar6 = (undefined8 *)(**(code **)(*plVar15 + 0x10))(plVar15,0x30,8);
  puVar4 = PTR_DAT_02710860;
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar7 + 0x80) < 0x10) {
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar15;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    puVar6[4] = 0;
    *puVar6 = 0;
    puVar6[1] = 0;
    *(undefined4 *)(puVar6 + 5) = 0;
    puVar6[2] = 0;
    puVar6[3] = plVar15;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    plVar17 = *(long **)(param_1 + 0xc0);
    *(undefined8 **)(param_1 + 0xc0) = puVar6;
    if (plVar17 != (long *)0x0) {
      lVar7 = *plVar17;
      if (lVar7 != 0) {
        plVar17[1] = lVar7;
        (**(code **)(*(long *)plVar17[3] + 0x18))((long *)plVar17[3],lVar7,plVar17[2] - lVar7,2);
      }
      (**(code **)(**(long **)(param_1 + 200) + 0x18))
                (*(long **)(param_1 + 200),plVar17,*(undefined8 *)(param_1 + 0xd0),
                 *(undefined8 *)(param_1 + 0xd8));
    }
    *(long **)(param_1 + 200) = plVar15;
    *(undefined8 *)(param_1 + 0xd0) = 0x30;
    plVar17 = *(long **)(param_1 + 8);
    *(undefined8 *)(param_1 + 0xd8) = 8;
    plVar15 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x30,8);
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
    if (*(ulong *)(lVar7 + 0x80) < 0x10) {
      *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar17;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      plVar15[4] = 0;
      *plVar15 = 0;
      plVar15[1] = 0;
      *(undefined4 *)(plVar15 + 5) = 0;
      plVar15[2] = 0;
      plVar15[3] = (long)plVar17;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      plVar11 = *(long **)(param_1 + 0x80);
      if (plVar11 != (long *)0x0) {
        plVar9 = (long *)*plVar11;
        plVar11 = (long *)plVar11[1];
        if (plVar9 != plVar11) {
          do {
            lVar7 = *plVar9;
            if (lVar7 != 0) {
              (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
            }
            uVar2 = *(uint *)(lVar7 + 0xe0);
            plVar13 = *(long **)(param_1 + 0xc0);
            if (plVar13 != (long *)0x0) {
              lVar18 = plVar13[1] - *plVar13;
              if (lVar18 != 0) {
                uVar14 = 0;
                do {
                  if ((uint)*(ushort *)(*plVar13 + uVar14 * 2) == (uVar2 & 0xffff))
                  goto joined_r0x010f28b0;
                  uVar14 = uVar14 + 1;
                } while (uVar14 < (ulong)(lVar18 >> 1));
              }
            }
            FUN_010f2f20(param_1,uVar2);
            plVar13 = *(long **)(param_1 + 0xa0);
            if ((plVar13 != (long *)0x0) && (uVar14 = plVar13[1] - *plVar13 >> 3, uVar14 != 0)) {
              if (uVar14 == 1) {
                uVar12 = 0;
              }
              else {
                uVar12 = FUN_010f3150(param_1);
                uVar12 = uVar12 & 0xffffffff;
                plVar13 = *(long **)(param_1 + 0xa0);
                if ((plVar13 == (long *)0x0) || (uVar14 <= uVar12)) goto LAB_010f2d0c;
              }
              if ((ulong)(plVar13[1] - *plVar13 >> 3) <= uVar12) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_out_of_range();
              }
              local_2d8 = *(long *)(*plVar13 + uVar12 * 8);
              (**(code **)(*(long *)(local_2d8 + 0x48) + 0x10))();
              if ((*(char *)(local_2d8 + 0x68) == '\0') || (*(char *)(local_2d8 + 0x60) == '\0')) {
LAB_010f2bac:
                plVar13 = (long *)plVar15[1];
                if (plVar13 == (long *)plVar15[2]) {
                  FUN_010f3fa0(plVar15,&local_2d8);
                  goto joined_r0x010f2c18;
                }
                lVar8 = plVar15[3];
                lVar18 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
                if (0xf < *(ulong *)(lVar18 + 0x80)) goto LAB_010f2f0c;
                *(long *)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = lVar8;
                *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
                *plVar13 = local_2d8;
                if (local_2d8 != 0) {
                  (**(code **)(*(long *)(local_2d8 + 0x48) + 0x10))();
                }
                *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
                plVar15[1] = plVar15[1] + 8;
              }
              else {
                iVar5 = FUN_010f1750(local_2d8,*(undefined4 *)(local_2d8 + 100),local_2d8 + 0x70);
                lVar18 = local_2d8;
                if (iVar5 != 0) goto LAB_010f2bac;
                if (local_2d8 != 0) {
                  (**(code **)(*(long *)(local_2d8 + 0x48) + 0x10))();
                }
                if ((*(char *)(lVar18 + 0x60) == '\0') || (*(char *)(lVar18 + 0x68) == '\0')) {
LAB_010f2ce4:
                  (**(code **)(*(long *)(lVar18 + 0x48) + 0x18))((long *)(lVar18 + 0x48));
                  goto joined_r0x010f2c18;
                }
                uVar3 = *(undefined1 *)(lVar18 + 0xe9);
                if (*(int *)(lVar18 + 100) == 4) {
                  local_2b8 = 0;
                  local_2d0 = 0;
                  local_2c8 = 0;
                  uStack_2c0 = 0;
                  FUN_01544f50(&local_2d0);
                  switch(uVar3) {
                  case 1:
                    cVar10 = local_2d0._4_1_;
                    if ((int)local_2d0 != *(int *)(lVar18 + 0xf0)) goto switchD_010f28e8_default;
                    goto LAB_010f2998;
                  case 2:
                    iVar5 = *(int *)(lVar18 + 0xf0);
                    cVar10 = local_2d0._5_1_;
                    break;
                  case 3:
                    iVar5 = *(int *)(lVar18 + 0xf0);
                    cVar10 = local_2d0._6_1_;
                    break;
                  case 4:
                    iVar5 = *(int *)(lVar18 + 0xf0);
                    cVar10 = local_2d0._7_1_;
                    break;
                  case 5:
                    iVar5 = *(int *)(lVar18 + 0xf0);
                    cVar10 = (char)local_2c8;
                    break;
                  default:
                    goto switchD_010f28e8_default;
                  }
                  if ((int)local_2d0 == iVar5) {
LAB_010f2998:
                    if ((cVar10 != '\x04') && (cVar10 != '\x02')) goto switchD_010f28e8_default;
                    bVar19 = true;
                  }
                  else {
switchD_010f28e8_default:
                    bVar19 = false;
                  }
                  (**(code **)(*(long *)(lVar18 + 0x48) + 0x18))((long *)(lVar18 + 0x48));
                  if (bVar19) {
                    lVar18 = *(long *)(param_1 + 0x60);
                    plVar13 = *(long **)(lVar18 + 8);
                    if (plVar13 != *(long **)(lVar18 + 0x10)) goto LAB_010f2a40;
LAB_010f2924:
                    FUN_010f3fa0(lVar18,&local_2d8);
                  }
                }
                else {
                  if (*(int *)(lVar18 + 100) == 3) {
                    if (*(byte *)(lVar18 + 0xf4) < 0x30) {
                    /* WARNING: Subroutine does not return */
                      memset(&local_2d0,0,0x268);
                    }
                    goto LAB_010f2ce4;
                  }
                  (**(code **)(*(long *)(lVar18 + 0x48) + 0x18))((long *)(lVar18 + 0x48));
                  lVar18 = *(long *)(param_1 + 0x60);
                  plVar13 = *(long **)(lVar18 + 8);
                  if (plVar13 == *(long **)(lVar18 + 0x10)) goto LAB_010f2924;
LAB_010f2a40:
                  uVar16 = *(undefined8 *)(lVar18 + 0x18);
                  lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
                  if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_010f2f0c;
                  *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar16;
                  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
                  *plVar13 = local_2d8;
                  if (local_2d8 != 0) {
                    (**(code **)(*(long *)(local_2d8 + 0x48) + 0x10))();
                  }
                  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
                  *(long *)(lVar18 + 8) = *(long *)(lVar18 + 8) + 8;
                }
              }
joined_r0x010f2c18:
              if (local_2d8 != 0) {
                (**(code **)(*(long *)(local_2d8 + 0x48) + 0x18))();
                local_2d8 = 0;
              }
            }
LAB_010f2d0c:
            lVar18 = *(long *)(param_1 + 0xc0);
            local_2d0 = CONCAT62(local_2d0._2_6_,(short)uVar2);
            puVar1 = *(undefined2 **)(lVar18 + 8);
            if (puVar1 < *(undefined2 **)(lVar18 + 0x10)) {
              uVar16 = *(undefined8 *)(lVar18 + 0x18);
              lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
              if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_010f2f0c;
              *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar16;
              *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
              *puVar1 = (undefined2)local_2d0;
              *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
              *(long *)(lVar18 + 8) = *(long *)(lVar18 + 8) + 2;
            }
            else {
              FUN_010906d0(lVar18,&local_2d0);
            }
joined_r0x010f28b0:
            if (lVar7 != 0) {
              (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
            }
            plVar9 = plVar9 + 1;
          } while (plVar9 != plVar11);
        }
      }
      if ((param_2 < 3) && (plVar15 != (long *)0x0)) {
        plVar9 = (long *)plVar15[1];
        for (plVar11 = (long *)*plVar15; plVar11 != plVar9; plVar11 = plVar11 + 1) {
          local_2d0 = *plVar11;
          if (local_2d0 != 0) {
            (**(code **)(*(long *)(local_2d0 + 0x48) + 0x10))();
          }
          lVar7 = *(long *)(param_1 + 0x60);
          plVar13 = *(long **)(lVar7 + 8);
          if (plVar13 == *(long **)(lVar7 + 0x10)) {
            FUN_010f3fa0(lVar7,&local_2d0);
          }
          else {
            uVar16 = *(undefined8 *)(lVar7 + 0x18);
            lVar18 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
            if (0xf < *(ulong *)(lVar18 + 0x80)) goto LAB_010f2f0c;
            *(undefined8 *)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = uVar16;
            *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
            *plVar13 = local_2d0;
            if (local_2d0 != 0) {
              (**(code **)(*(long *)(local_2d0 + 0x48) + 0x10))();
            }
            *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
            *(long *)(lVar7 + 8) = *(long *)(lVar7 + 8) + 8;
          }
          if (local_2d0 != 0) {
            (**(code **)(*(long *)(local_2d0 + 0x48) + 0x18))();
            local_2d0 = 0;
          }
        }
      }
      if (plVar15 != (long *)0x0) {
        plVar11 = (long *)*plVar15;
        if (plVar11 != (long *)0x0) {
          if ((long *)plVar15[1] == plVar11) {
            plVar9 = plVar11;
          }
          else {
            plVar9 = (long *)plVar15[1];
            do {
              plVar13 = plVar9 + -1;
              if (*plVar13 != 0) {
                (**(code **)(*(long *)(*plVar13 + 0x48) + 0x18))();
                plVar9[-1] = 0;
              }
              plVar9 = plVar13;
            } while (plVar11 != plVar13);
            plVar9 = (long *)*plVar15;
          }
          plVar15[1] = (long)plVar11;
          (**(code **)(*(long *)plVar15[3] + 0x18))
                    ((long *)plVar15[3],plVar9,plVar15[2] - (long)plVar9,8);
        }
        (**(code **)(*plVar17 + 0x18))(plVar17,plVar15,0x30,8);
      }
      return;
    }
  }
LAB_010f2f0c:
                    /* WARNING: Subroutine does not return */
  abort();
}


