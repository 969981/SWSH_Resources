/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008abf60; name: FUN_008abf60
 */


void FUN_008abf60(long param_1,undefined8 *param_2,long param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  char cVar4;
  ushort uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 uVar16;
  uint local_54;
  
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  plVar15 = *(long **)(param_1 + 8);
  local_54 = FUN_0087b990(*param_2,0);
  if (local_54 != 0) {
    puVar1 = *(uint **)(param_3 + 8);
    if (puVar1 == *(uint **)(param_3 + 0x10)) {
      FUN_008ac820(param_3,&local_54);
    }
    else {
      uVar16 = *(undefined8 *)(param_3 + 0x18);
      lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_008ac648;
      *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar16;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
      *puVar1 = local_54;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
      *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + 4;
    }
  }
  local_54 = FUN_0087b990(*param_2,1);
  if (local_54 != 0) {
    puVar1 = *(uint **)(param_3 + 8);
    if (puVar1 == *(uint **)(param_3 + 0x10)) {
      FUN_008ac820(param_3,&local_54);
    }
    else {
      uVar16 = *(undefined8 *)(param_3 + 0x18);
      lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_008ac648;
      *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar16;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
      *puVar1 = local_54;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
      *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + 4;
    }
  }
  local_54 = FUN_0087b990(*param_2,2);
  if (local_54 != 0) {
    puVar1 = *(uint **)(param_3 + 8);
    if (puVar1 == *(uint **)(param_3 + 0x10)) {
      FUN_008ac820(param_3,&local_54);
    }
    else {
      uVar16 = *(undefined8 *)(param_3 + 0x18);
      lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_008ac648;
      *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar16;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
      *puVar1 = local_54;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
      *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + 4;
    }
  }
  local_54 = FUN_0087b990(*param_2,3);
  if (local_54 == 0) {
LAB_008ac17c:
    uVar6 = FUN_00888ed0();
    puVar2 = (undefined4 *)PTR_DAT_02710860;
  }
  else {
    puVar1 = *(uint **)(param_3 + 8);
    if (puVar1 != *(uint **)(param_3 + 0x10)) {
      uVar16 = *(undefined8 *)(param_3 + 0x18);
      lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_008ac648;
      *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar16;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
      *puVar1 = local_54;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
      *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + 4;
      goto LAB_008ac17c;
    }
    FUN_008ac820(param_3,&local_54);
    uVar6 = FUN_00888ed0();
    puVar2 = (undefined4 *)PTR_DAT_02710860;
  }
  PTR_DAT_02710860 = (undefined *)puVar2;
  if (uVar6 != 0) {
    uVar11 = 0;
    do {
      while( true ) {
        FUN_00888f00(uVar11);
        uVar13 = FUN_00888f20();
        if ((uVar13 & 1) == 0) break;
        uVar13 = FUN_0087c4a0(*param_2,uVar11 - 100);
        if ((uVar13 & 1) != 0) goto LAB_008ac1d4;
joined_r0x008ac240:
        uVar11 = uVar11 + 1;
        if (uVar6 <= uVar11) goto LAB_008ac278;
      }
      uVar13 = FUN_0087c450(*param_2,uVar11);
      if ((uVar13 & 1) == 0) goto joined_r0x008ac240;
LAB_008ac1d4:
      local_54 = FUN_00888ee0(uVar11);
      local_54 = local_54 & 0xffff;
      puVar1 = *(uint **)(param_3 + 8);
      if (puVar1 != *(uint **)(param_3 + 0x10)) {
        uVar16 = *(undefined8 *)(param_3 + 0x18);
        lVar12 = nn::os::GetTlsValue(*puVar2);
        if (*(ulong *)(lVar12 + 0x80) < 0x10) {
          *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar16;
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
          *puVar1 = local_54;
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
          *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + 4;
          goto joined_r0x008ac240;
        }
        goto LAB_008ac648;
      }
      FUN_008ac820(param_3,&local_54);
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar6);
  }
LAB_008ac278:
  puVar14 = (undefined8 *)(**(code **)(*plVar15 + 0x10))(plVar15,0x118,8);
  puVar3 = PTR_DAT_02710860;
  lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar12 + 0x80) < 0x10) {
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar15;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    FUN_00885da0(puVar14);
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    uVar7 = FUN_008783b0(*param_2);
    uVar8 = FUN_008783c0(*param_2);
    FUN_00885df0(puVar14,uVar7,uVar8);
    uVar6 = 0;
    do {
      cVar4 = FUN_00885ed0(puVar14);
      if (cVar4 != '\0') {
        if (uVar6 == 2) {
          uVar11 = 0;
          do {
            uVar5 = FUN_00885f20(puVar14,uVar11);
            if (1 < uVar5) {
              uVar9 = FUN_00885f20(puVar14,uVar11);
              uVar10 = FUN_0087a5f0(*param_2);
              if ((uVar9 & 0xffff) <= uVar10) {
                local_54 = FUN_00885f40(puVar14,uVar11);
                puVar1 = *(uint **)(param_3 + 8);
                if (puVar1 == *(uint **)(param_3 + 0x10)) {
                  FUN_008ac820(param_3,&local_54);
                }
                else {
                  uVar16 = *(undefined8 *)(param_3 + 0x18);
                  lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
                  if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_008ac648;
                  *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar16;
                  *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
                  *puVar1 = local_54;
                  *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
                  *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + 4;
                }
              }
            }
            uVar11 = uVar11 + 1;
            uVar9 = FUN_00885ed0(puVar14);
          } while (uVar11 < (uVar9 & 0xff));
        }
        else {
          uVar11 = 0;
          do {
            uVar9 = FUN_00885f20(puVar14,uVar11);
            if (uVar6 == (uVar9 & 0xffff)) {
              uVar9 = FUN_00885f20(puVar14,uVar11);
              uVar10 = FUN_0087a5f0(*param_2);
              if ((uVar9 & 0xffff) <= uVar10) {
                local_54 = FUN_00885f40(puVar14,uVar11);
                puVar1 = *(uint **)(param_3 + 8);
                if (puVar1 == *(uint **)(param_3 + 0x10)) {
                  FUN_008ac820(param_3,&local_54);
                }
                else {
                  uVar16 = *(undefined8 *)(param_3 + 0x18);
                  lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
                  if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_008ac648;
                  *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar16;
                  *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
                  *puVar1 = local_54;
                  *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
                  *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + 4;
                }
              }
            }
            uVar11 = uVar11 + 1;
            uVar9 = FUN_00885ed0(puVar14);
          } while (uVar11 < (uVar9 & 0xff));
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 3);
    if (puVar14 != (undefined8 *)0x0) {
      (**(code **)*puVar14)(puVar14);
      (**(code **)(*plVar15 + 0x18))(plVar15,puVar14,0x118,8);
    }
    cVar4 = FUN_00864ca0();
    if (cVar4 != '\0') {
      uVar6 = 0;
      do {
        uVar13 = FUN_0087c4f0(*param_2,uVar6);
        if ((uVar13 & 1) != 0) {
          local_54 = FUN_00864cb0(uVar6);
          puVar1 = *(uint **)(param_3 + 8);
          if (puVar1 == *(uint **)(param_3 + 0x10)) {
            FUN_008ac820(param_3,&local_54);
          }
          else {
            uVar16 = *(undefined8 *)(param_3 + 0x18);
            lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
            if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_008ac648;
            *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar16;
            *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
            *puVar1 = local_54;
            *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
            *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + 4;
          }
        }
        uVar6 = uVar6 + 1;
        uVar11 = FUN_00864ca0();
      } while (uVar6 < (uVar11 & 0xff));
    }
    cVar4 = FUN_00864ce0();
    if (cVar4 != '\0') {
      uVar6 = 0;
      do {
        while (uVar13 = FUN_0087c5e0(*param_2,uVar6), (uVar13 & 1) != 0) {
          local_54 = FUN_00864cf0(uVar6);
          puVar1 = *(uint **)(param_3 + 8);
          if (puVar1 != *(uint **)(param_3 + 0x10)) {
            uVar16 = *(undefined8 *)(param_3 + 0x18);
            lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
            if (*(ulong *)(lVar12 + 0x80) < 0x10) {
              *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar16;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
              *puVar1 = local_54;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
              *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + 4;
              break;
            }
            goto LAB_008ac648;
          }
          FUN_008ac820(param_3,&local_54);
          uVar6 = uVar6 + 1;
          uVar11 = FUN_00864ce0();
          if ((uVar11 & 0xff) <= uVar6) {
            return;
          }
        }
        uVar6 = uVar6 + 1;
        uVar11 = FUN_00864ce0();
      } while (uVar6 < (uVar11 & 0xff));
    }
    return;
  }
LAB_008ac648:
                    /* WARNING: Subroutine does not return */
  abort();
}


