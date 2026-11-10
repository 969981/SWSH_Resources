/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00730d50; name: FUN_00730d50
 */


void FUN_00730d50(long *param_1,undefined8 param_2,long *param_3,undefined4 param_4,long *param_5)

{
  long *plVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long local_70;
  undefined8 local_68;
  
  FUN_00732c50(param_1,param_2,param_4);
  puVar2 = PTR_DAT_02715be0;
  *param_1 = (long)(PTR_DAT_02715be0 + 0x10);
  param_1[9] = (long)(puVar2 + 0xb0);
  param_1[10] = (long)(puVar2 + 0xf0);
  lVar5 = *param_3;
  *param_3 = 0;
  param_1[0x40] = lVar5;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  if ((code *)param_5[2] != (code *)0x0) {
    (*(code *)param_5[2])(param_5 + 4,param_1 + 0x46);
    lVar5 = *param_5;
    lVar4 = param_5[1];
    lVar7 = param_5[3];
    param_1[0x44] = param_5[2];
    param_1[0x45] = lVar7;
    param_1[0x42] = lVar5;
    param_1[0x43] = lVar4;
  }
  param_1[0x52] = 0;
  plVar9 = *(long **)(*(long *)(param_1[0x17] + 0x260) + (long)(int)param_1[0x3a] * 0x60 + 0x40);
  lVar5 = plVar9[1];
  lVar4 = plVar9[2];
  if (lVar5 == lVar4) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    do {
      local_68 = *(undefined8 *)(lVar5 + 0x10);
      uVar3 = (*(code *)param_1[0x42])(param_1 + 0x46,&local_68);
      lVar5 = lVar5 + 0x18;
      lVar7 = lVar7 + (uVar3 & 1);
    } while (lVar4 != lVar5);
  }
  plVar8 = (long *)param_1[1];
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar8;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  lVar4 = (**(code **)(*plVar8 + 0x10))(plVar8,0x118,8);
  if (lVar4 == 0) {
    (**(code **)(*plVar8 + 0xb8))(plVar8);
  }
  plVar1 = param_1 + 0x41;
  FUN_007340f0(lVar4,lVar7);
  *(long **)(lVar4 + 8) = plVar8;
  *(long *)(lVar4 + 0x10) = lVar4;
  *(undefined8 *)(lVar4 + 0x18) = 0x118;
  *(undefined8 *)(lVar4 + 0x20) = 8;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (*plVar1 != 0) {
    (**(code **)(*(long *)(*plVar1 + 0x48) + 0x18))();
    *plVar1 = 0;
  }
  *plVar1 = lVar4;
  lVar5 = plVar9[1];
  lVar7 = plVar9[2];
  if (lVar5 != lVar7) {
    iVar6 = 0;
    do {
      local_68 = *(undefined8 *)(lVar5 + 0x10);
      uVar3 = (*(code *)param_1[0x42])(param_1 + 0x46,&local_68);
      if ((uVar3 & 1) != 0) {
        lVar4 = param_1[0x41];
        local_70 = *(long *)(*(long *)(param_1[0x40] + 0x170) +
                            (ulong)*(uint *)(*(long *)(lVar5 + 0x10) + 0x4a0) * 0x10);
        if (local_70 != 0) {
          (**(code **)(*(long *)(local_70 + 0x48) + 0x10))();
        }
        FUN_00734610(lVar4,iVar6,&local_70);
        if (local_70 != 0) {
          (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
          local_70 = 0;
        }
        iVar6 = iVar6 + 1;
      }
      lVar5 = lVar5 + 0x18;
    } while (lVar7 != lVar5);
    lVar4 = *plVar1;
  }
  FUN_00734980(lVar4,param_2);
  lVar5 = *plVar9;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar4 = param_1[0x52];
  param_1[0x52] = lVar5;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  return;
}


