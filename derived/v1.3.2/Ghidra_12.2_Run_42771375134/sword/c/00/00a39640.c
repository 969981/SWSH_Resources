/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a39640; name: FUN_00a39640
 */


/* WARNING: Removing unreachable block (ram,0x00a398c0) */
/* WARNING: Removing unreachable block (ram,0x00a39804) */
/* WARNING: Removing unreachable block (ram,0x00a39808) */
/* WARNING: Removing unreachable block (ram,0x00a39780) */

undefined8 FUN_00a39640(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  int iVar10;
  bool bVar11;
  long *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  int local_48;
  char local_44 [4];
  
  local_48 = 1;
  plVar9 = (long *)*param_1;
  iVar5 = (**(code **)(*plVar9 + 0x870))(plVar9);
  cVar3 = *(char *)(param_1 + 2);
  uVar1 = *(undefined4 *)(param_1 + 1);
  uVar2 = *(undefined4 *)((long)param_1 + 0xc);
  local_60 = plVar9;
  local_58 = uVar1;
  uStack_54 = uVar2;
  if (iVar5 == 2) {
    if (cVar3 == '\0') {
      lVar7 = (**(code **)(*plVar9 + 0x7f8))(plVar9,0);
      local_44[0] = '\0';
      if ((lVar7 == 0) || (uVar8 = FUN_008e1600(), (uVar8 & 1) != 0)) {
LAB_00a398d4:
        iVar10 = 0;
        bVar11 = false;
LAB_00a398dc:
        lVar7 = (**(code **)(*plVar9 + 0x7f8))(plVar9,2);
        local_44[0] = '\0';
        if ((lVar7 != 0) && (uVar8 = FUN_008e1600(), (uVar8 & 1) == 0)) {
          uVar6 = FUN_008e0a00(lVar7);
          iVar5 = (**(code **)(*plVar9 + 0x780))(plVar9,uVar1,uVar6,uVar2,local_44);
          if (local_44[0] != '\0') {
            iVar4 = iVar10;
            if (((iVar10 != 2) && (iVar4 = iVar5, iVar5 != 2)) && (iVar4 = iVar10, iVar10 != 1)) {
              if (iVar5 == 1) {
                iVar4 = 1;
              }
              else if (((iVar10 != 3) && (iVar4 = iVar5, iVar5 != 3)) &&
                      (iVar4 = iVar10, iVar10 != 0)) {
                iVar4 = 0;
                if (iVar5 != 0) {
                  iVar4 = iVar10;
                }
              }
            }
            iVar10 = iVar4;
            if (iVar10 == 2) goto LAB_00a39a9c;
            bVar11 = true;
          }
        }
        lVar7 = (**(code **)(*plVar9 + 0x7f8))(plVar9,4);
        local_44[0] = '\0';
        if ((lVar7 != 0) && (uVar8 = FUN_008e1600(), (uVar8 & 1) == 0)) {
          uVar6 = FUN_008e0a00(lVar7);
          iVar5 = (**(code **)(*plVar9 + 0x780))(plVar9,uVar1,uVar6,uVar2,local_44);
          if (local_44[0] != '\0') {
            iVar4 = iVar10;
            if (((iVar10 != 2) && (iVar4 = iVar5, iVar5 != 2)) && (iVar4 = iVar10, iVar10 != 1)) {
              if (iVar5 == 1) {
                iVar4 = 1;
              }
              else if (((iVar10 != 3) && (iVar4 = iVar5, iVar5 != 3)) &&
                      (iVar4 = iVar10, iVar10 != 0)) {
                iVar4 = 0;
                if (iVar5 != 0) {
                  iVar4 = iVar10;
                }
              }
            }
            iVar10 = iVar4;
            if (iVar10 == 2) goto LAB_00a39a9c;
            bVar11 = true;
          }
        }
        lVar7 = (**(code **)(*plVar9 + 0x7f8))(plVar9,6);
        local_44[0] = '\0';
        if ((lVar7 != 0) && (uVar8 = FUN_008e1600(), (uVar8 & 1) == 0)) {
          uVar6 = FUN_008e0a00(lVar7);
          iVar5 = (**(code **)(*plVar9 + 0x780))(plVar9,uVar1,uVar6,uVar2,local_44);
          if (local_44[0] != '\0') {
            local_48 = iVar10;
            if (((iVar10 != 2) && (local_48 = iVar5, iVar5 != 2)) &&
               (local_48 = iVar10, iVar10 != 1)) {
              if (iVar5 == 1) {
                local_48 = 1;
              }
              else if (((iVar10 != 3) && (local_48 = iVar5, iVar5 != 3)) &&
                      ((local_48 = iVar10, iVar10 != 0 && (local_48 = 0, iVar5 != 0)))) {
                local_48 = iVar10;
              }
            }
            if (local_48 != 2) {
              goto LAB_00a39aa4;
            }
            goto LAB_00a39a9c;
          }
        }
        local_48 = iVar10;
        if (!bVar11) {
          return 0;
        }
        goto LAB_00a39aa4;
      }
      uVar6 = FUN_008e0a00(lVar7);
      iVar5 = (**(code **)(*plVar9 + 0x780))(plVar9,uVar1,uVar6,uVar2,local_44);
      if (local_44[0] == '\0') goto LAB_00a398d4;
      iVar4 = (uint)(iVar5 == 2) << 1;
      iVar10 = iVar4;
      if (iVar5 != 2) {
        if (iVar5 == 1) {
          iVar10 = 1;
        }
        else {
          iVar10 = iVar5;
          if (iVar5 != 3) {
            iVar10 = iVar4;
          }
        }
      }
      if (iVar10 != 2) {
        bVar11 = true;
        goto LAB_00a398dc;
      }
LAB_00a39a9c:
      local_48 = 2;
    }
    else {
      lVar7 = (**(code **)(*plVar9 + 0x7f8))(plVar9,1);
      local_44[0] = '\0';
      if (lVar7 == 0) {
        return 0;
      }
      uVar8 = FUN_008e1600();
      if ((uVar8 & 1) != 0) {
        return 0;
      }
      uVar6 = FUN_008e0a00(lVar7);
      iVar5 = (**(code **)(*plVar9 + 0x780))(plVar9,uVar1,uVar6,uVar2,local_44);
      if (local_44[0] == '\0') {
        return 0;
      }
      iVar10 = (uint)(iVar5 == 2) << 1;
      local_48 = iVar10;
      if (iVar5 != 2) {
        if (iVar5 == 1) {
          local_48 = 1;
        }
        else {
          local_48 = iVar5;
          if (iVar5 != 3) {
            local_48 = iVar10;
          }
        }
      }
    }
  }
  else {
    if (iVar5 == 1) {
      if (cVar3 == '\0') {
        uVar8 = FUN_00a39b50(&local_60,&local_48,&DAT_02154894);
      }
      else {
        uVar8 = FUN_00a39b50(&local_60,&local_48,&DAT_0215488c);
      }
      if ((uVar8 & 1) == 0) {
        return 0;
      }
      goto LAB_00a39aa4;
    }
    if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (cVar3 == '\0') {
      lVar7 = (**(code **)(*plVar9 + 0x7f8))(plVar9,0);
      local_44[0] = '\0';
      if (lVar7 == 0) {
        return 0;
      }
      uVar8 = FUN_008e1600();
    }
    else {
      lVar7 = (**(code **)(*plVar9 + 0x7f8))(plVar9,1);
      local_44[0] = '\0';
      if (lVar7 == 0) {
        return 0;
      }
      uVar8 = FUN_008e1600();
    }
    if ((uVar8 & 1) != 0) {
      return 0;
    }
    uVar6 = FUN_008e0a00(lVar7);
    iVar5 = (**(code **)(*plVar9 + 0x780))(plVar9,uVar1,uVar6,uVar2,local_44);
    if (local_44[0] == '\0') {
      return 0;
    }
    iVar10 = (uint)(iVar5 == 2) << 1;
    local_48 = iVar10;
    if (iVar5 != 2) {
      if (iVar5 == 1) {
        local_48 = 1;
      }
      else {
        local_48 = iVar5;
        if (iVar5 != 3) {
          local_48 = iVar10;
        }
      }
    }
  }
LAB_00a39aa4:
  *(int *)((long)param_1 + 0x14) = local_48;
  return 1;
}


