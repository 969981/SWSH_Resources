/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01216890; name: FUN_01216890
 */


void FUN_01216890(ulong *param_1,long param_2)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  char local_88 [4];
  undefined8 local_84;
  undefined8 local_7c;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_88[0] = *(char *)(param_2 + 0x3c) != '\0';
  if ((bool)local_88[0]) {
    local_84 = *(undefined8 *)(param_2 + 0x40);
    local_7c = *(undefined8 *)(param_2 + 0x48);
  }
  if (*(char *)(param_2 + 0x1f0) != '\0') {
    local_68 = *(undefined8 *)(param_2 + 0x1f8);
    local_60 = *(undefined8 *)(param_2 + 0x200);
    uStack_58 = *(undefined8 *)(param_2 + 0x208);
    local_50 = *(undefined8 *)(param_2 + 0x210);
    uStack_48 = *(undefined8 *)(param_2 + 0x218);
    local_70 = 1;
    if (!(bool)local_88[0]) {
      return;
    }
    uVar7 = param_1[1];
    uVar9 = param_1[2];
    if (uVar7 != uVar9) {
      uVar2 = FUN_012182a0(uVar7);
      uVar3 = FUN_0121b130(&local_68,uVar2);
      if ((uVar3 & 1) == 0) {
        do {
          uVar7 = uVar7 + 0x40;
          if (uVar9 == uVar7) {
            uVar3 = param_1[2];
            if (uVar9 != uVar3) goto LAB_01216970;
            goto LAB_01216998;
          }
          uVar2 = FUN_012182a0(uVar7);
          uVar3 = FUN_0121b130(&local_68,uVar2);
        } while ((uVar3 & 1) == 0);
      }
    }
    uVar3 = param_1[2];
    uVar9 = uVar7;
    if (uVar7 == uVar3) {
LAB_01216998:
      uVar7 = param_1[1];
      if ((ulong)((long)(uVar3 - uVar7) >> 6) < *param_1) {
        if (uVar9 < param_1[3]) {
          uVar7 = param_1[4];
          lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
          if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_01216b84;
          *(ulong *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar7;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
          FUN_01218250(uVar9,&local_68,(ulong)local_88 | 4);
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
          param_1[2] = param_1[2] + 0x40;
        }
        else {
          FUN_01213670(param_1 + 1,&local_68,(ulong)local_88 | 4);
        }
      }
      else {
        if (uVar9 == uVar7) {
          return;
        }
        uVar3 = 0;
        bVar1 = true;
        do {
          if (bVar1) {
LAB_01216a5c:
            uVar3 = uVar7;
          }
          else {
            plVar4 = (long *)FUN_012182c0(uVar7);
            plVar5 = (long *)FUN_012182c0(uVar3);
            if (*plVar4 < *plVar5) goto LAB_01216a5c;
          }
          uVar7 = uVar7 + 0x40;
          bVar1 = uVar3 == 0;
        } while (uVar9 != uVar7);
        if (uVar3 == 0) {
          return;
        }
        FUN_01218330(uVar3,&local_68,(ulong)local_88 | 4);
      }
    }
    else {
LAB_01216970:
      uVar9 = FUN_012182d0(uVar9,(ulong)local_88 | 4);
      if ((uVar9 & 1) == 0) {
        return;
      }
    }
    puVar8 = (undefined8 *)param_1[8];
    if ((ulong)(((long)((long)puVar8 - param_1[7]) >> 3) * -0x3333333333333333) < *param_1) {
      if ((undefined8 *)param_1[9] == puVar8) {
        FUN_00fc0c60(param_1 + 7,&local_68);
      }
      else {
        uVar9 = param_1[10];
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar6 + 0x80)) {
LAB_01216b84:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(ulong *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar9;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        *puVar8 = local_68;
        puVar8[3] = local_50;
        puVar8[4] = uStack_48;
        puVar8[1] = local_60;
        puVar8[2] = uStack_58;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        param_1[8] = param_1[8] + 0x28;
      }
    }
  }
  return;
}


