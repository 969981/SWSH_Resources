/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00b56f20; name: FUN_00b56f20
 */


long * FUN_00b56f20(undefined8 param_1,long *param_2,uint *param_3,long *param_4)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  ulong uVar13;
  long alStack_70 [4];
  long *local_50;
  
  puVar1 = PTR_DAT_02710860;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_00b571a8:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  plVar5 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0xc0,0x10);
  if (plVar5 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  lVar9 = *param_4;
  uVar2 = *param_3;
  uVar13 = (ulong)uVar2;
  lVar10 = param_4[1];
  plVar6 = (long *)param_4[6];
  if (plVar6 == (long *)0x0) {
    local_50 = (long *)0x0;
  }
  else if (param_4 + 2 == plVar6) {
    local_50 = alStack_70;
    (**(code **)(*plVar6 + 0x18))();
  }
  else {
    local_50 = (long *)(**(code **)(*plVar6 + 0x10))();
  }
  puVar3 = PTR_DAT_02710a18;
  plVar5[7] = 0;
  *(undefined4 *)(plVar5 + 8) = 0;
  *(undefined4 *)(plVar5 + 6) = 0;
  plVar5[4] = 0;
  plVar5[5] = 0;
  *plVar5 = (long)(puVar3 + 0x10);
  plVar5[2] = 0;
  plVar5[3] = 0;
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  puVar1 = PTR_DAT_02717868;
  if (lVar7 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = 0;
    if (*(long *)(lVar7 + 0x80) != 0) {
      lVar11 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(plVar5 + 10) = 0;
  *plVar5 = (long)(puVar1 + 0x10);
  plVar5[1] = lVar11;
  plVar5[9] = (long)(puVar1 + 0x48);
  plVar5[0xc] = lVar9;
  plVar5[0xd] = lVar10;
  if (local_50 == (long *)0x0) {
    plVar5[0x12] = 0;
    plVar5[0x15] = 0;
    plVar5[0x16] = 0;
    plVar5[0x14] = 0;
  }
  else if (alStack_70 == local_50) {
    plVar5[0x12] = (long)(plVar5 + 0xe);
    (**(code **)(*local_50 + 0x18))();
    plVar5[0x15] = 0;
    plVar5[0x16] = 0;
    plVar5[0x14] = 0;
  }
  else {
    lVar9 = (**(code **)(*local_50 + 0x10))();
    plVar5[0x12] = lVar9;
    plVar5[0x15] = 0;
    plVar5[0x16] = 0;
    plVar5[0x14] = 0;
  }
  if (uVar2 != 0) {
    if ((ulong)plVar5[0xd] < uVar13) goto LAB_00b571a8;
    uVar8 = (**(code **)(*(long *)plVar5[0xc] + 0x10))((long *)plVar5[0xc],uVar13 << 3,8);
    FUN_00b574b0(plVar5 + 0xc,uVar8,uVar13,plVar5[0x14] + plVar5[0x15] * 8,0,0);
  }
  puVar1 = PTR_DAT_0271b188 + 0x48;
  *plVar5 = (long)(PTR_DAT_0271b188 + 0x10);
  plVar5[9] = (long)puVar1;
  if (alStack_70 == local_50) {
    pcVar12 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00b5714c;
    pcVar12 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar12)();
LAB_00b5714c:
  plVar5[1] = (long)param_2;
  plVar5[2] = (long)plVar5;
  plVar5[3] = 0xc0;
  plVar5[4] = 0x10;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  return plVar5;
}


