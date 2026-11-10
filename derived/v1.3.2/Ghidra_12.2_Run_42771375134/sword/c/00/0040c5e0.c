/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040c5e0; name: FUN_0040c5e0
 */


void FUN_0040c5e0(long param_1,int param_2,ulong param_3)

{
  long lVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_1c0 [12];
  undefined4 local_1b4;
  undefined8 local_1b0;
  int local_1a4;
  long local_1a0;
  ulong local_198;
  undefined1 auStack_190 [264];
  long local_88;
  char local_68;
  long local_58;
  
  lVar1 = *(long *)(param_1 + 8);
  lVar9 = *(long *)(*(long *)(param_1 + 0x10) + 0x68);
  FUN_00418860(auStack_190,*(long *)(param_1 + 0x10),0);
  if (local_88 == 0) {
LAB_0040c854:
    FUN_004188d0(auStack_190);
    return;
  }
  if ((param_3 & 1) == 0) {
    bVar2 = false;
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x10) + 0x98))(*(long **)(param_1 + 0x10),auStack_190,0);
    if (local_88 == 0) goto LAB_0040c854;
    bVar2 = true;
  }
  puVar3 = PTR_DAT_02712a90;
  iVar5 = 2;
LAB_0040c6ac:
  lVar6 = FUN_004188e0(auStack_190,&local_58);
  lVar8 = local_58;
  if (lVar6 != 0) {
    lVar8 = lVar6;
  }
  local_1a0 = 0;
  local_198 = 0;
  FUN_0040a9d0(lVar8,&local_1a0);
  if ((int)local_198 != 0) {
    lVar8 = 0;
    do {
      if (*(int *)(local_1a0 + lVar8) == param_2) {
        plVar7 = *(long **)(param_1 + 0x40);
        lVar8 = local_1a0 + lVar8;
        if (plVar7 == (long *)0x0) goto LAB_0040c754;
        goto LAB_0040c728;
      }
      lVar8 = lVar8 + 0x18;
    } while ((local_198 & 0xffffffff) * 0x18 != lVar8);
  }
  lVar8 = 0;
  goto joined_r0x0040c808;
  while (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0) {
LAB_0040c728:
    if (((int)plVar7[2] == param_2) &&
       (*(long *)(param_1 + 8) - *(long *)(*(long *)(param_1 + 0x10) + 0x68) <=
        (long)(plVar7[3] + (ulong)*(uint *)(plVar7 + 4)))) goto LAB_0040c83c;
  }
  if (lVar8 != 0) {
LAB_0040c754:
    lVar6 = FUN_0040c8a0(param_1,*(undefined4 *)(lVar8 + 4),&local_1a4);
    if ((lVar6 == 0) && (*(int *)(lVar8 + 4) != 0)) {
LAB_0040c83c:
      if (local_1a0 != 0) {
        local_198 = local_198 & 0xffffffff00000000;
        FUN_00404870(*(undefined4 *)puVar3);
        local_1a0 = 0;
        local_198 = local_198 & 0xffffffff;
      }
      goto LAB_0040c854;
    }
    local_1b4 = *(undefined4 *)(lVar8 + 0xc);
    iVar4 = FUN_00418a30(auStack_190,(lVar1 - lVar9) + (long)local_1a4,*(undefined4 *)(lVar8 + 8),
                         &local_1b4,0,0,&local_1b0);
    if (iVar4 == 1) {
      iVar5 = FUN_0040c990(param_1,auStack_190,lVar6,lVar8,local_1b0,local_1a4,!bVar2);
      if (iVar5 != 1) goto LAB_0040c83c;
      if (lVar6 != 0) {
        FUN_0040b030(lVar6,auStack_1c0);
      }
    }
    else {
      if (lVar6 != 0) {
        FUN_00409430(lVar6);
      }
      if (local_68 == '\0') {
        iVar5 = 1;
        if ((!bVar2) && (*(int *)(lVar8 + 0x14) == 1)) {
          (**(code **)(**(long **)(param_1 + 0x10) + 0x98))
                    (*(long **)(param_1 + 0x10),auStack_190,0);
          bVar2 = true;
          iVar5 = iVar4;
        }
        goto joined_r0x0040c808;
      }
    }
    iVar5 = 1;
  }
joined_r0x0040c808:
  if (local_1a0 != 0) {
    local_198 = local_198 & 0xffffffff00000000;
    FUN_00404870(*(undefined4 *)puVar3);
    local_1a0 = 0;
    local_198 = local_198 & 0xffffffff;
  }
  if (((lVar8 == 0) || (iVar5 == 1)) || (local_88 == 0)) goto LAB_0040c854;
  goto LAB_0040c6ac;
}


