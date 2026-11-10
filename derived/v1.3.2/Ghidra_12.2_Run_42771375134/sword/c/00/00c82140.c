/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c82140; name: FUN_00c82140
 */


void FUN_00c82140(long *param_1,long *param_2,int param_3)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 local_60;
  long local_58;
  
  *(undefined4 *)(param_1 + 10) = 0;
  puVar2 = PTR_DAT_0271c3e0;
  param_1[3] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  plVar5 = param_1 + 2;
  *plVar5 = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  if (1 < param_3 - 1U) {
    param_3 = 1;
  }
  param_1[6] = 0;
  param_1[7] = 0;
  *(int *)(param_1 + 1) = param_3;
  param_1[4] = 0;
  param_1[5] = 0;
  if (param_3 == 2) {
    *(undefined4 *)(param_1 + 10) = 1;
  }
  plVar3 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x40,0x10);
  puVar2 = PTR_DAT_02710860;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_00c824f0;
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  *plVar3 = (long)param_2;
  plVar3[1] = 0xfffffffffffffff;
  plVar3[6] = 0;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  lVar4 = *plVar5;
  *plVar5 = (long)plVar3;
  if (lVar4 != 0) {
    plVar5 = *(long **)(lVar4 + 0x30);
    if ((long *)(lVar4 + 0x10) == plVar5) {
      pcVar9 = *(code **)(*plVar5 + 0x20);
LAB_00c82254:
      (*pcVar9)();
    }
    else if (plVar5 != (long *)0x0) {
      pcVar9 = *(code **)(*plVar5 + 0x28);
      goto LAB_00c82254;
    }
    (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar4,param_1[4],param_1[5]);
    plVar3 = (long *)param_1[2];
  }
  param_1[3] = (long)param_2;
  param_1[4] = 0x40;
  param_1[5] = 0x10;
  plVar5 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x60,0x10);
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_00c824f0:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  lVar1 = param_1[1];
  uVar11 = (ulong)(int)lVar1;
  *plVar5 = *plVar3;
  plVar5[1] = plVar3[1];
  plVar6 = (long *)plVar3[6];
  if (plVar6 == (long *)0x0) {
    plVar5[6] = 0;
    plVar5[9] = 0;
    plVar5[10] = 0;
    plVar5[8] = 0;
  }
  else if (plVar3 + 2 == plVar6) {
    plVar5[6] = (long)(plVar5 + 2);
    (**(code **)(*(long *)plVar3[6] + 0x18))();
    plVar5[9] = 0;
    plVar5[10] = 0;
    plVar5[8] = 0;
  }
  else {
    lVar7 = (**(code **)(*plVar6 + 0x10))();
    plVar5[6] = lVar7;
    plVar5[9] = 0;
    plVar5[10] = 0;
    plVar5[8] = 0;
  }
  if ((int)lVar1 != 0) {
    if ((ulong)plVar5[1] < uVar11) goto LAB_00c824f0;
    uVar8 = (**(code **)(*(long *)*plVar5 + 0x10))((long *)*plVar5,uVar11 << 4,8);
    FUN_00c82940(plVar5,uVar8,uVar11,plVar5[8] + plVar5[9] * 0x10,0,0);
  }
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  puVar10 = (undefined8 *)param_1[6];
  param_1[6] = (long)plVar5;
  if (puVar10 == (undefined8 *)0x0) goto LAB_00c82478;
  lVar4 = puVar10[9];
  if (lVar4 != 0) {
    plVar5 = (long *)(puVar10[8] + 8);
    do {
      lVar4 = lVar4 + -1;
      if (*plVar5 != 0) {
        (**(code **)(*(long *)(*plVar5 + 0x48) + 0x18))();
        *plVar5 = 0;
      }
      plVar5 = plVar5 + 2;
    } while (lVar4 != 0);
  }
  if (puVar10[10] != 0) {
    (**(code **)(*(long *)*puVar10 + 0x18))((long *)*puVar10,puVar10[8],puVar10[10] << 4,8);
  }
  plVar5 = (long *)puVar10[6];
  if (puVar10 + 2 == plVar5) {
    pcVar9 = *(code **)(*plVar5 + 0x20);
LAB_00c82448:
    (*pcVar9)();
  }
  else if (plVar5 != (long *)0x0) {
    pcVar9 = *(code **)(*plVar5 + 0x28);
    goto LAB_00c82448;
  }
  (**(code **)(*(long *)param_1[7] + 0x18))((long *)param_1[7],puVar10,param_1[8],param_1[9]);
  plVar5 = (long *)param_1[6];
LAB_00c82478:
  param_1[7] = (long)param_2;
  param_1[8] = 0x60;
  param_1[9] = 0x10;
  local_60 = 0;
  local_58 = 0;
  if (plVar5[10] != 0) {
    uVar11 = 0;
    do {
      FUN_00c82b70(plVar5,&local_60);
      plVar5 = (long *)param_1[6];
      uVar11 = uVar11 + 1;
    } while (uVar11 < (ulong)plVar5[10]);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    }
  }
  return;
}


