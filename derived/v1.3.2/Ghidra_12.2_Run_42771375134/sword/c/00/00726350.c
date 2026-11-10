/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00726350; name: FUN_00726350
 */


void FUN_00726350(long param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 local_48;
  long *local_38;
  
  local_38 = param_3;
  uVar1 = (**(code **)(*param_3 + 0x18))(param_3);
  if ((uVar1 & 1) == 0) {
    return;
  }
  local_48 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(ulong *)(param_1 + 0x370);
  if (uVar1 < *(ulong *)(param_1 + 0x378)) {
    uVar6 = *(undefined8 *)(param_1 + 0x380);
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar6;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    FUN_0072e8a0(uVar1,local_48,param_2,local_38);
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    plVar3 = (long *)(*(long *)(param_1 + 0x370) + 0x48);
    *(long **)(param_1 + 0x370) = plVar3;
    plVar5 = *(long **)(param_1 + 0x368);
    if (plVar5 == plVar3) goto LAB_00726450;
LAB_00726408:
    if ((long *)plVar5[1] == (long *)*plVar5) goto LAB_00726450;
    iVar4 = *(int *)(*(long *)*plVar5 + 0x1dc);
    plVar5 = (long *)plVar3[-9];
    plVar3 = (long *)plVar3[-8];
    if (plVar5 == plVar3) goto LAB_0072648c;
  }
  else {
    FUN_00728690(param_1 + 0x368,&local_48,param_2,&local_38);
    plVar3 = *(long **)(param_1 + 0x370);
    plVar5 = *(long **)(param_1 + 0x368);
    if (plVar5 != plVar3) goto LAB_00726408;
LAB_00726450:
    iVar4 = 0;
    plVar5 = (long *)plVar3[-9];
    plVar3 = (long *)plVar3[-8];
    if (plVar5 == plVar3) goto LAB_0072648c;
  }
  do {
    if (*(int *)(*plVar5 + 0x1dc) != iVar4) {
      *(int *)(*plVar5 + 0x1dc) = iVar4;
      *(undefined1 *)(*plVar5 + 0x1d8) = 1;
    }
    plVar5 = plVar5 + 1;
  } while (plVar3 != plVar5);
LAB_0072648c:
  *(ulong *)(param_1 + 0x4e0) = *(ulong *)(param_1 + 0x4e0) | 2;
  return;
}


