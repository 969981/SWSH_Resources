/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c82ee0; name: FUN_00c82ee0
 */


void FUN_00c82ee0(long *param_1,long *param_2,undefined4 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  code *pcVar10;
  ulong uVar11;
  undefined8 *local_70;
  long *local_68;
  long local_60;
  long local_58;
  
  puVar2 = PTR_DAT_0271c3e8;
  *(undefined4 *)(param_1 + 1) = param_3;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  plVar6 = param_1 + 2;
  *plVar6 = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x40,0x10);
  puVar2 = PTR_DAT_02710860;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_00c831f0;
  *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_2;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  *plVar4 = (long)param_2;
  plVar4[1] = 0x7ffffffffffffff;
  plVar4[6] = 0;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  lVar5 = *plVar6;
  *plVar6 = (long)plVar4;
  if (lVar5 != 0) {
    plVar4 = *(long **)(lVar5 + 0x30);
    if ((long *)(lVar5 + 0x10) == plVar4) {
      pcVar10 = *(code **)(*plVar4 + 0x20);
LAB_00c82fd8:
      (*pcVar10)();
    }
    else if (plVar4 != (long *)0x0) {
      pcVar10 = *(code **)(*plVar4 + 0x28);
      goto LAB_00c82fd8;
    }
    (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar5,param_1[4],param_1[5]);
    plVar4 = (long *)param_1[2];
  }
  param_1[3] = (long)param_2;
  param_1[4] = 0x40;
  param_1[5] = 0x10;
  plVar6 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x60,0x10);
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
  if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_00c831f0:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_2;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  lVar1 = param_1[1];
  uVar11 = (ulong)(int)lVar1;
  *plVar6 = *plVar4;
  plVar6[1] = plVar4[1];
  plVar7 = (long *)plVar4[6];
  if (plVar7 == (long *)0x0) {
    plVar6[6] = 0;
    plVar6[9] = 0;
    plVar6[10] = 0;
    plVar6[8] = 0;
  }
  else if (plVar4 + 2 == plVar7) {
    plVar6[6] = (long)(plVar6 + 2);
    (**(code **)(*(long *)plVar4[6] + 0x18))();
    plVar6[9] = 0;
    plVar6[10] = 0;
    plVar6[8] = 0;
  }
  else {
    lVar8 = (**(code **)(*plVar7 + 0x10))();
    plVar6[6] = lVar8;
    plVar6[9] = 0;
    plVar6[10] = 0;
    plVar6[8] = 0;
  }
  if ((int)lVar1 != 0) {
    if ((ulong)plVar6[1] < uVar11) goto LAB_00c831f0;
    uVar9 = (**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,uVar11 << 5,8);
    FUN_00c835f0(plVar6,uVar9,uVar11,plVar6[8] + plVar6[9] * 0x20,0,0);
  }
  local_60 = 0x60;
  local_58 = 0x10;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  local_70 = (undefined8 *)0x0;
  lVar5 = param_1[6];
  param_1[6] = (long)plVar6;
  local_68 = param_2;
  if (lVar5 != 0) {
    FUN_00c83510(param_1 + 7);
  }
  param_1[8] = local_60;
  param_1[9] = local_58;
  param_1[7] = (long)local_68;
  lVar5 = param_1[6];
  if (*(long *)(lVar5 + 0x50) != 0) {
    uVar11 = 0;
    do {
      local_60 = 0;
      local_58 = 0;
      local_70 = (undefined8 *)0x0;
      local_68 = (long *)0x0;
      FUN_00c83850(lVar5,&local_70);
      puVar3 = local_70;
      local_70 = (undefined8 *)0x0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3);
        (**(code **)(*local_68 + 0x18))(local_68,puVar3,local_60,local_58);
      }
      lVar5 = param_1[6];
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(ulong *)(lVar5 + 0x50));
  }
  return;
}


