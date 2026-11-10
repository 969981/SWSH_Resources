/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c83be0; name: FUN_00c83be0
 */


void FUN_00c83be0(long *param_1,long *param_2,long *param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  code *pcVar9;
  ulong uVar10;
  long local_70;
  long *local_68;
  long local_60;
  long local_58;
  
  *param_1 = (long)(PTR_DAT_0271c3f0 + 0x10);
  lVar3 = *param_3;
  param_1[1] = lVar3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  plVar5 = param_1 + 3;
  *plVar5 = 0;
  *(undefined4 *)(param_1 + 2) = param_4;
  *(undefined4 *)((long)param_1 + 0x14) = param_5;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[4] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x40,0x10);
  puVar2 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_00c83f08;
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  *plVar4 = (long)param_2;
  plVar4[1] = 0x7ffffffffffffff;
  plVar4[6] = 0;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  lVar3 = *plVar5;
  *plVar5 = (long)plVar4;
  if (lVar3 != 0) {
    plVar4 = *(long **)(lVar3 + 0x30);
    if ((long *)(lVar3 + 0x10) == plVar4) {
      pcVar9 = *(code **)(*plVar4 + 0x20);
LAB_00c83cf8:
      (*pcVar9)();
    }
    else if (plVar4 != (long *)0x0) {
      pcVar9 = *(code **)(*plVar4 + 0x28);
      goto LAB_00c83cf8;
    }
    (**(code **)(*(long *)param_1[4] + 0x18))((long *)param_1[4],lVar3,param_1[5],param_1[6]);
    plVar4 = (long *)param_1[3];
  }
  param_1[4] = (long)param_2;
  param_1[5] = 0x40;
  param_1[6] = 0x10;
  plVar5 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x60,0x10);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_00c83f08:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  iVar1 = *(int *)((long)param_1 + 0x14);
  uVar10 = (ulong)iVar1;
  *plVar5 = *plVar4;
  plVar5[1] = plVar4[1];
  plVar6 = (long *)plVar4[6];
  if (plVar6 == (long *)0x0) {
    plVar5[6] = 0;
    plVar5[9] = 0;
    plVar5[10] = 0;
    plVar5[8] = 0;
  }
  else if (plVar4 + 2 == plVar6) {
    plVar5[6] = (long)(plVar5 + 2);
    (**(code **)(*(long *)plVar4[6] + 0x18))();
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
  if (iVar1 != 0) {
    if ((ulong)plVar5[1] < uVar10) goto LAB_00c83f08;
    uVar8 = (**(code **)(*(long *)*plVar5 + 0x10))((long *)*plVar5,uVar10 << 5,8);
    FUN_00c84560(plVar5,uVar8,uVar10,plVar5[8] + plVar5[9] * 0x20,0,0);
  }
  local_60 = 0x60;
  local_58 = 0x10;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  local_70 = 0;
  lVar3 = param_1[7];
  param_1[7] = (long)plVar5;
  local_68 = param_2;
  if (lVar3 != 0) {
    FUN_00c84480(param_1 + 8);
  }
  param_1[9] = local_60;
  param_1[10] = local_58;
  param_1[8] = (long)local_68;
  lVar3 = param_1[7];
  if (*(long *)(lVar3 + 0x50) != 0) {
    uVar10 = 0;
    do {
      local_60 = 0;
      local_58 = 0;
      local_70 = 0;
      local_68 = (long *)0x0;
      FUN_00c847c0(lVar3,&local_70);
      lVar3 = local_70;
      local_70 = 0;
      if (lVar3 != 0) {
        FUN_00c84b40(lVar3);
        (**(code **)(*local_68 + 0x18))(local_68,lVar3,local_60,local_58);
      }
      lVar3 = param_1[7];
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(ulong *)(lVar3 + 0x50));
  }
  return;
}


