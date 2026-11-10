/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c84cc0; name: FUN_00c84cc0
 */


void FUN_00c84cc0(long *param_1,long *param_2,undefined4 param_3,int param_4,long *param_5)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  undefined1 local_60;
  undefined8 local_5c;
  
  *(undefined4 *)(param_1 + 1) = param_3;
  puVar1 = PTR_DAT_0271c3f8;
  *(int *)((long)param_1 + 0xc) = param_4;
  *param_1 = (long)(puVar1 + 0x10);
  lVar2 = *param_5;
  param_1[2] = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    param_4 = *(int *)((long)param_1 + 0xc);
  }
  plVar4 = param_1 + 3;
  *plVar4 = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  if ((param_4 < 1) && (param_4 != *(int *)PTR_DAT_0271c3d0)) {
    *(undefined4 *)((long)param_1 + 0xc) = 1;
  }
  plVar3 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x40,0x10);
  puVar1 = PTR_DAT_02710860;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) goto LAB_00c850a8;
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  *plVar3 = (long)param_2;
  plVar3[1] = 0x666666666666666;
  plVar3[6] = 0;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  lVar2 = *plVar4;
  *plVar4 = (long)plVar3;
  if (lVar2 != 0) {
    plVar4 = *(long **)(lVar2 + 0x30);
    if ((long *)(lVar2 + 0x10) == plVar4) {
      pcVar9 = *(code **)(*plVar4 + 0x20);
LAB_00c84dfc:
      (*pcVar9)();
    }
    else if (plVar4 != (long *)0x0) {
      pcVar9 = *(code **)(*plVar4 + 0x28);
      goto LAB_00c84dfc;
    }
    (**(code **)(*(long *)param_1[4] + 0x18))((long *)param_1[4],lVar2,param_1[5],param_1[6]);
    plVar3 = (long *)param_1[3];
  }
  param_1[4] = (long)param_2;
  param_1[5] = 0x40;
  param_1[6] = 0x10;
  plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x60,0x10);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
LAB_00c850a8:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  lVar8 = param_1[1];
  uVar11 = (ulong)(int)lVar8;
  *plVar4 = *plVar3;
  plVar4[1] = plVar3[1];
  plVar5 = (long *)plVar3[6];
  if (plVar5 == (long *)0x0) {
    plVar4[6] = 0;
    plVar4[9] = 0;
    plVar4[10] = 0;
    plVar4[8] = 0;
  }
  else if (plVar3 + 2 == plVar5) {
    plVar4[6] = (long)(plVar4 + 2);
    (**(code **)(*(long *)plVar3[6] + 0x18))();
    plVar4[9] = 0;
    plVar4[10] = 0;
    plVar4[8] = 0;
  }
  else {
    lVar6 = (**(code **)(*plVar5 + 0x10))();
    plVar4[6] = lVar6;
    plVar4[9] = 0;
    plVar4[10] = 0;
    plVar4[8] = 0;
  }
  if ((int)lVar8 != 0) {
    if ((ulong)plVar4[1] < uVar11) goto LAB_00c850a8;
    uVar7 = (**(code **)(*(long *)*plVar4 + 0x10))((long *)*plVar4,uVar11 * 0x28,8);
    FUN_00c850b0(plVar4,uVar7,uVar11,plVar4[8] + plVar4[9] * 0x28,0,0);
  }
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  puVar10 = (undefined8 *)param_1[7];
  param_1[7] = (long)plVar4;
  if (puVar10 == (undefined8 *)0x0) goto LAB_00c85008;
  lVar2 = puVar10[9];
  if (lVar2 != 0) {
    plVar4 = (long *)(puVar10[8] + 0x10);
    do {
      lVar2 = lVar2 + -1;
      if (*plVar4 != 0) {
        (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
        *plVar4 = 0;
      }
      plVar4 = plVar4 + 5;
    } while (lVar2 != 0);
  }
  if (puVar10[10] != 0) {
    (**(code **)(*(long *)*puVar10 + 0x18))((long *)*puVar10,puVar10[8],puVar10[10] * 0x28,8);
  }
  plVar4 = (long *)puVar10[6];
  if (puVar10 + 2 == plVar4) {
    pcVar9 = *(code **)(*plVar4 + 0x20);
LAB_00c84fec:
    (*pcVar9)();
  }
  else if (plVar4 != (long *)0x0) {
    pcVar9 = *(code **)(*plVar4 + 0x28);
    goto LAB_00c84fec;
  }
  (**(code **)(*(long *)param_1[8] + 0x18))((long *)param_1[8],puVar10,param_1[9],param_1[10]);
LAB_00c85008:
  param_1[8] = (long)param_2;
  param_1[9] = 0x60;
  param_1[10] = 0x10;
  local_5c = 0;
  local_60 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  lVar2 = param_1[2];
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar8 = param_1[7];
  local_68 = lVar2;
  if (*(long *)(lVar8 + 0x50) != 0) {
    uVar11 = 0;
    do {
      FUN_00c85330(lVar8,&local_78);
      lVar8 = param_1[7];
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(ulong *)(lVar8 + 0x50));
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))((long *)(local_68 + 0x48));
  }
  return;
}


