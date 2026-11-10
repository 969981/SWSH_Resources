/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0111c890; name: FUN_0111c890
 */


undefined4 FUN_0111c890(long param_1,long param_2,undefined8 *param_3,undefined4 *param_4)

{
  int *piVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  byte *pbVar10;
  uint uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  undefined4 local_74;
  long local_70;
  long local_68;
  
  puVar4 = PTR_DAT_02710848;
  lVar13 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
  }
  plVar12 = *(long **)(lVar13 + 0x58);
  if (plVar12 != (long *)0x0) {
    (**(code **)(plVar12[9] + 0x10))();
  }
  (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
  iVar6 = FUN_00884820(plVar12);
  if (iVar6 != 0) {
    uVar11 = 0;
    do {
      lVar13 = (**(code **)(*plVar12 + 0x50))(plVar12,uVar11);
      if (lVar13 != 0) {
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
      }
      iVar6 = FUN_0087d5f0(lVar13);
      bVar5 = iVar6 == *(int *)(param_2 + 0xc);
      if (bVar5) {
        FUN_00866390(*param_3,lVar13);
        *(short *)((long)param_4 + 6) = (short)uVar11;
        *param_4 = 1;
      }
      if (lVar13 != 0) {
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
      }
      if (bVar5) {
        local_74 = 1;
        goto joined_r0x0111cd84;
      }
      uVar11 = uVar11 + 1 & 0xff;
      uVar7 = FUN_00884820(plVar12);
    } while (uVar11 < uVar7);
  }
  lVar13 = *(long *)(*(long *)puVar4 + 0x90);
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
  }
  puVar3 = PTR_DAT_02710798;
  lVar14 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
  }
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
  }
  lVar13 = *(long *)(*(long *)puVar4 + 0x90);
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
  }
  lVar15 = *(long *)(*(long *)puVar3 + 0x220);
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
  }
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
  }
  plVar17 = *(long **)(param_1 + 8);
  lVar13 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar13 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar17;
  *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
  lVar8 = (**(code **)(*plVar17 + 0x10))(plVar17,0xb8,8);
  if (lVar8 == 0) {
    (**(code **)(*plVar17 + 0xb8))(plVar17);
  }
  FUN_00866110(lVar8,plVar17);
  *(long **)(lVar8 + 8) = plVar17;
  *(long *)(lVar8 + 0x10) = lVar8;
  *(undefined8 *)(lVar8 + 0x18) = 0xb8;
  *(undefined8 *)(lVar8 + 0x20) = 8;
  *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  iVar6 = FUN_01509eb0(lVar14);
  plVar17 = (long *)PTR_DAT_02710798;
  piVar1 = (int *)(param_2 + 0xc);
  if (iVar6 != 0) {
    uVar11 = 0;
    if (lVar8 == 0) {
      do {
        uVar7 = 0;
        do {
          local_68 = 0;
          FUN_01505e60(lVar15,&local_68,uVar11,uVar7);
          if (local_68 != 0) {
            (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
            local_68 = 0;
          }
          uVar9 = FUN_008787d0(0);
          if (((uVar9 & 1) == 0) && (iVar6 = FUN_0087d5f0(0), iVar6 == *piVar1)) goto LAB_0111cd60;
          uVar7 = uVar7 + 1;
        } while (uVar7 < 0x1e);
        uVar11 = uVar11 + 1 & 0xff;
        uVar7 = FUN_01509eb0(lVar14);
      } while (uVar11 < uVar7);
    }
    else {
      do {
        uVar7 = 0;
        do {
          local_68 = lVar8;
          (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))(lVar8 + 0x48);
          FUN_01505e60(lVar15,&local_68,uVar11,uVar7);
          if (local_68 != 0) {
            (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
            local_68 = 0;
          }
          uVar9 = FUN_008787d0(lVar8);
          if (((uVar9 & 1) == 0) && (iVar6 = FUN_0087d5f0(lVar8), iVar6 == *piVar1))
          goto LAB_0111cd60;
          uVar7 = uVar7 + 1;
        } while (uVar7 < 0x1e);
        uVar11 = uVar11 + 1 & 0xff;
        uVar7 = FUN_01509eb0(lVar14);
      } while (uVar11 < uVar7);
      plVar17 = (long *)PTR_DAT_02710798;
    }
  }
  uVar11 = 0;
  local_74 = 1;
  do {
    uVar11 = uVar11 & 0xff;
    lVar13 = *(long *)(*plVar17 + 0x270);
    if (lVar13 == 0) {
      uVar7 = FUN_01501130(0,0);
    }
    else {
      plVar16 = (long *)(lVar13 + 0x48);
      (**(code **)(*plVar16 + 0x10))(plVar16);
      uVar7 = FUN_01501130(lVar13,0);
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
    if (uVar7 <= uVar11) {
      uVar11 = 0;
      goto LAB_0111cdb8;
    }
    lVar13 = *(long *)(*plVar17 + 0x270);
    if (lVar13 == 0) {
      FUN_01501160(&local_70,0,*(undefined8 *)(param_1 + 8),0,uVar11);
      uVar9 = FUN_008787d0(local_70);
      if ((uVar9 & 1) == 0) goto LAB_0111cd10;
LAB_0111cd38:
      bVar5 = false;
    }
    else {
      plVar16 = (long *)(lVar13 + 0x48);
      (**(code **)(*plVar16 + 0x10))(plVar16);
      FUN_01501160(&local_70,lVar13,*(undefined8 *)(param_1 + 8),0,uVar11);
      (**(code **)(*plVar16 + 0x18))(plVar16);
      uVar9 = FUN_008787d0(local_70);
      if ((uVar9 & 1) != 0) goto LAB_0111cd38;
LAB_0111cd10:
      iVar6 = FUN_0087d5f0(local_70);
      if (iVar6 != *piVar1) goto LAB_0111cd38;
      local_74 = 2;
      bVar5 = true;
    }
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      local_70 = 0;
    }
    uVar11 = uVar11 + 1;
  } while (!bVar5);
  goto joined_r0x0111d060;
LAB_0111cd60:
  uVar9 = FUN_0150aef0(lVar14,uVar11,uVar7);
  if ((uVar9 & 1) != 0) {
    local_74 = 4;
    goto joined_r0x0111cd78;
  }
  FUN_00866390(*param_3,lVar8);
  *(short *)((long)param_4 + 6) = (short)uVar7;
  local_74 = 1;
  *(short *)(param_4 + 1) = (short)uVar11;
  *param_4 = 0;
  goto joined_r0x0111d060;
  while (uVar11 = uVar11 + 1, uVar11 < 0x20) {
LAB_0111cf64:
    lVar13 = *(long *)(*plVar17 + 0x268);
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
    }
    pbVar10 = (byte *)FUN_0152d910(lVar13,uVar11);
    bVar2 = *pbVar10;
    if (bVar2 != 0) {
      uVar7 = 0;
      do {
        FUN_0152da80(&local_70,lVar13,uVar11,uVar7,*(undefined8 *)(param_1 + 8));
        uVar9 = FUN_008787d0(local_70);
        if (((uVar9 & 1) == 0) && (iVar6 = FUN_0087d5f0(local_70), iVar6 == *piVar1)) {
          local_74 = 3;
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
        if (local_70 != 0) {
          (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
          local_70 = 0;
        }
        if (bVar5) {
          bVar5 = true;
          plVar17 = (long *)PTR_DAT_02710798;
          goto joined_r0x0111d054;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < bVar2);
    }
    bVar5 = false;
    plVar17 = (long *)PTR_DAT_02710798;
joined_r0x0111d054:
    PTR_DAT_02710798 = (undefined *)plVar17;
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
    }
    if (bVar5) goto joined_r0x0111d060;
  }
  local_74 = 0;
joined_r0x0111cd78:
  if (lVar8 == 0) goto LAB_0111cef8;
  goto LAB_0111cee8;
LAB_0111cdb8:
  do {
    uVar11 = uVar11 & 0xff;
    lVar13 = *(long *)(*plVar17 + 0x270);
    if (lVar13 == 0) {
      uVar7 = FUN_01501130(0,1);
    }
    else {
      plVar16 = (long *)(lVar13 + 0x48);
      (**(code **)(*plVar16 + 0x10))(plVar16);
      uVar7 = FUN_01501130(lVar13,1);
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
    if (uVar7 <= uVar11) {
      uVar11 = 0;
      goto LAB_0111cf64;
    }
    lVar13 = *(long *)(*plVar17 + 0x270);
    if (lVar13 == 0) {
      FUN_01501160(&local_70,0,*(undefined8 *)(param_1 + 8),1,uVar11);
      uVar9 = FUN_008787d0(local_70);
      if ((uVar9 & 1) == 0) goto LAB_0111ce98;
LAB_0111cec0:
      bVar5 = false;
    }
    else {
      plVar16 = (long *)(lVar13 + 0x48);
      (**(code **)(*plVar16 + 0x10))(plVar16);
      FUN_01501160(&local_70,lVar13,*(undefined8 *)(param_1 + 8),1,uVar11);
      (**(code **)(*plVar16 + 0x18))(plVar16);
      uVar9 = FUN_008787d0(local_70);
      if ((uVar9 & 1) != 0) goto LAB_0111cec0;
LAB_0111ce98:
      iVar6 = FUN_0087d5f0(local_70);
      if (iVar6 != *piVar1) goto LAB_0111cec0;
      local_74 = 2;
      bVar5 = true;
    }
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      local_70 = 0;
    }
    uVar11 = uVar11 + 1;
  } while (!bVar5);
joined_r0x0111d060:
  if (lVar8 != 0) {
LAB_0111cee8:
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
LAB_0111cef8:
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
  }
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
  }
joined_r0x0111cd84:
  if (plVar12 != (long *)0x0) {
    (**(code **)(plVar12[9] + 0x18))(plVar12 + 9);
  }
  return local_74;
}


