/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a0c6a0; name: FUN_00a0c6a0
 */


undefined8 FUN_00a0c6a0(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  code *pcVar6;
  int local_38;
  int iStack_34;
  
  iVar1 = param_3[2];
  uVar3 = (**(code **)(*(long *)*param_2 + 0x858))
                    ((long *)*param_2,*(undefined1 *)((long)param_2 + 0x29),iVar1);
  uVar4 = FUN_00935550();
  local_38 = 0;
  iStack_34 = 0;
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  iVar2 = param_3[1];
  if (iVar2 != 1) {
    if (iVar2 == 3) {
      iStack_34 = FUN_00935560(uVar3);
    }
    else {
      if (iVar2 != 4) {
        return 0;
      }
      if (iVar1 == 0) {
        plVar5 = (long *)*param_2;
        pcVar6 = *(code **)(*plVar5 + 0x7a8);
      }
      else if (iVar1 == 0x11) {
        plVar5 = (long *)*param_2;
        pcVar6 = *(code **)(*plVar5 + 0x7b0);
      }
      else {
        if (iVar1 != 1) {
          iVar1 = FUN_00935570(uVar3);
          _local_38 = CONCAT44(iStack_34,iVar1);
          iVar2 = FUN_00935580(uVar3);
          iStack_34 = iVar1 - iVar2;
          goto joined_r0x00a0c7c0;
        }
        plVar5 = (long *)*param_2;
        pcVar6 = *(code **)(*plVar5 + 0x7a0);
      }
      (*pcVar6)(plVar5,&iStack_34,&local_38,*(undefined1 *)((long)param_2 + 0x29));
    }
  }
joined_r0x00a0c7c0:
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = *(undefined8 *)(param_3 + 4);
    param_1[1] = *(undefined8 *)(param_3 + 6);
    *(undefined4 *)(param_1 + 2) = *param_3;
    *(undefined4 *)((long)param_1 + 0x14) = param_3[1];
    *(int *)(param_1 + 3) = iStack_34;
    *(int *)((long)param_1 + 0x1c) = local_38;
  }
  return 1;
}


