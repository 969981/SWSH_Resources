/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01560eb0; name: FUN_01560eb0
 */


void FUN_01560eb0(long *param_1,undefined8 param_2,int param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  size_t sVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  char acStack_40 [16];
  long local_28;
  
  if (param_3 == 0) {
    if ((param_4 & 1) == 0) {
      uVar5 = FUN_006e5c90(param_2);
      snprintf(acStack_40,0x10,PTR_s_save_d___02710ba8,uVar5 & 0xffffffff);
      sVar6 = strlen(acStack_40);
      iVar3 = strncmp("main",acStack_40,sVar6);
      if (iVar3 != 0) {
        uVar4 = FUN_006e5c90(param_2);
        if (uVar4 == 0xffffffff) {
          *(undefined4 *)(param_1 + 5) = 0;
          *param_1 = 0;
          param_1[1] = -0x340d631b7bddd9bb;
          param_1[3] = 0;
          param_1[4] = 0;
          param_1[2] = (long)&DAT_01d38550;
        }
        else {
          snprintf(acStack_40,0x10,PTR_s_save_d___02710ba8,(ulong)uVar4);
          FUN_01561480(&local_28,acStack_40,&DAT_01d21c18);
          FUN_006e5870(param_1,&local_28,4);
          if (local_28 != 0) {
            (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
          }
        }
        return;
      }
      FUN_0010d170(param_1,&DAT_01d21c18);
      lVar9 = *param_1;
      plVar1 = (long *)PTR_DAT_02710920;
      if (lVar9 != 0) {
        plVar1 = (long *)(lVar9 + 0x58);
      }
      plVar2 = (long *)PTR_PTR_02710928;
      if (lVar9 != 0) {
        plVar2 = (long *)(lVar9 + 0x60);
      }
      lVar7 = *plVar2;
      if (lVar9 == 0) {
        param_1[1] = *plVar1;
        param_1[2] = lVar7;
        param_1[3] = 0;
        param_1[4] = 0;
      }
      else {
        lVar8 = *(long *)(lVar9 + 0x68);
        param_1[1] = *plVar1;
        param_1[2] = lVar7;
        param_1[3] = lVar8;
        param_1[4] = 0;
        if (lVar9 != 0) {
          (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
          lVar7 = param_1[4];
          param_1[4] = lVar9;
          if (lVar7 != 0) {
            (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
          }
          goto LAB_0156122c;
        }
      }
      param_1[4] = lVar9;
LAB_0156122c:
      *(undefined4 *)(param_1 + 5) = 4;
      FUN_00110660(param_1);
      return;
    }
    uVar5 = FUN_006e5c90(param_2);
    snprintf(acStack_40,0x10,PTR_s_save_d___02710ba8,uVar5 & 0xffffffff);
    sVar6 = strlen(acStack_40);
    iVar3 = strncmp("backup",acStack_40,sVar6);
    if (iVar3 != 0) {
      uVar4 = FUN_006e5c90(param_2);
      if (uVar4 == 0xffffffff) {
        *(undefined4 *)(param_1 + 5) = 0;
        *param_1 = 0;
        param_1[1] = -0x340d631b7bddd9bb;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[2] = (long)&DAT_01d38550;
      }
      else {
        snprintf(acStack_40,0x10,PTR_s_save_d___02710ba8,(ulong)uVar4);
        FUN_01561400(&local_28,acStack_40,"backup");
        FUN_006e5870(param_1,&local_28,4);
        if (local_28 != 0) {
          (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
        }
      }
      return;
    }
    FUN_0010d170(param_1,"backup");
    lVar9 = *param_1;
    plVar1 = (long *)PTR_DAT_02710920;
    if (lVar9 != 0) {
      plVar1 = (long *)(lVar9 + 0x58);
    }
    plVar2 = (long *)PTR_PTR_02710928;
    if (lVar9 != 0) {
      plVar2 = (long *)(lVar9 + 0x60);
    }
    lVar7 = *plVar2;
    if (lVar9 == 0) {
      param_1[1] = *plVar1;
      param_1[2] = lVar7;
      param_1[3] = 0;
      param_1[4] = 0;
    }
    else {
      lVar8 = *(long *)(lVar9 + 0x68);
      param_1[1] = *plVar1;
      param_1[2] = lVar7;
      param_1[3] = lVar8;
      param_1[4] = 0;
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
        lVar7 = param_1[4];
        param_1[4] = lVar9;
        if (lVar7 != 0) {
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
        }
        goto LAB_0156107c;
      }
    }
    param_1[4] = lVar9;
LAB_0156107c:
    *(undefined4 *)(param_1 + 5) = 4;
    FUN_00110660(param_1);
    return;
  }
  uVar5 = FUN_006e5c90(param_2);
  snprintf(acStack_40,0x10,PTR_s_save_d___02710ba8,uVar5 & 0xffffffff);
  sVar6 = strlen(acStack_40);
  iVar3 = strncmp("poke_trade",acStack_40,sVar6);
  if (iVar3 != 0) {
    uVar4 = FUN_006e5c90(param_2);
    if (uVar4 == 0xffffffff) {
      *(undefined4 *)(param_1 + 5) = 0;
      *param_1 = 0;
      param_1[1] = -0x340d631b7bddd9bb;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[2] = (long)&DAT_01d38550;
    }
    else {
      snprintf(acStack_40,0x10,PTR_s_save_d___02710ba8,(ulong)uVar4);
      FUN_01561500(&local_28,acStack_40,"poke_trade");
      FUN_006e5870(param_1,&local_28,4);
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      }
    }
    return;
  }
  FUN_0010d170(param_1,"poke_trade");
  lVar9 = *param_1;
  plVar1 = (long *)PTR_DAT_02710920;
  if (lVar9 != 0) {
    plVar1 = (long *)(lVar9 + 0x58);
  }
  plVar2 = (long *)PTR_PTR_02710928;
  if (lVar9 != 0) {
    plVar2 = (long *)(lVar9 + 0x60);
  }
  lVar7 = *plVar2;
  if (lVar9 == 0) {
    param_1[1] = *plVar1;
    param_1[2] = lVar7;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  else {
    lVar8 = *(long *)(lVar9 + 0x68);
    param_1[1] = *plVar1;
    param_1[2] = lVar7;
    param_1[3] = lVar8;
    param_1[4] = 0;
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
      lVar7 = param_1[4];
      param_1[4] = lVar9;
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
      }
      goto LAB_015613dc;
    }
  }
  param_1[4] = lVar9;
LAB_015613dc:
  *(undefined4 *)(param_1 + 5) = 4;
  FUN_00110660(param_1);
  return;
}


