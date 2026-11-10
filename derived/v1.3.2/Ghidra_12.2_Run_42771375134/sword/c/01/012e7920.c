/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e7920; name: FUN_012e7920
 */


void FUN_012e7920(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte *pbVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  long local_40;
  long local_38;
  undefined8 uStack_30;
  long local_28;
  
  local_28 = param_1;
  if (param_1 != 0) {
    (**(code **)(*(long *)(param_1 + 0x48) + 0x10))();
  }
  uVar6 = FUN_012f2890(&local_28);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  if ((uVar6 & 1) != 0) {
    return;
  }
  local_38 = 0x5d4ac55afe52e7c7;
  uStack_30 = 0;
  uVar6 = FUN_0130fad0(param_1,&local_38,0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if ((*(long *)(param_1 + 0x4f8) == 0) || (uVar6 = FUN_0130e360(), (uVar6 & 1) == 0)) {
    local_38 = 0;
  }
  else {
    FUN_0130e3b0(&local_38,*(undefined8 *)(param_1 + 0x4f8));
    lVar10 = local_38;
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      uVar7 = FUN_012d5170(lVar10,&local_38);
      puVar4 = PTR_DAT_02715080;
      lVar10 = *(long *)(param_1 + 0x68);
      if ((lVar10 != 0) && (*(int *)(lVar10 + 0x54) != 0)) {
        piVar1 = (int *)(lVar10 + 0x54);
        pbVar9 = PTR_DAT_02715078;
        iVar11 = *(int *)(lVar10 + 0x54);
        do {
          plVar12 = *(long **)(lVar10 + 0x58);
          if (((*pbVar9 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(pbVar9), pbVar9 = PTR_DAT_02715078, iVar5 != 0)) {
            uVar8 = FUN_00a87090();
            *(undefined8 *)puVar4 = uVar8;
            __cxa_guard_release(PTR_DAT_02715078);
            pbVar9 = PTR_DAT_02715078;
          }
          while( true ) {
            if (plVar12 == (long *)0x0) goto LAB_012e7ab8;
            if (plVar12 == (long *)puVar4) break;
            plVar12 = (long *)*plVar12;
          }
          iVar5 = *piVar1;
          if (iVar5 == iVar11) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar11 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              local_40 = 0;
              if (*(long *)(lVar10 + 0x60) != 0) {
                local_40 = *(long *)(lVar10 + 0x60) + -0x50;
              }
              FUN_01309ee0(uVar7,&local_40);
              goto joined_r0x012e7b84;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar11 = iVar5;
        } while (iVar5 != 0);
      }
LAB_012e7ab8:
      local_40 = 0;
      FUN_01309ee0(uVar7,&local_40);
joined_r0x012e7b84:
      if (local_40 != 0) {
        (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
        local_40 = 0;
        iVar11 = *(int *)(param_1 + 0x500);
        goto joined_r0x012e7af8;
      }
    }
  }
  iVar11 = *(int *)(param_1 + 0x500);
joined_r0x012e7af8:
  if (iVar11 == 2) {
    lVar10 = *(long *)(param_1 + 0x838);
    *(undefined8 *)(param_1 + 0x838) = 0;
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))();
    }
    *(undefined4 *)(param_1 + 0x844) = 0;
  }
  *(undefined4 *)(param_1 + 0x500) = 0;
  if ((((*(long *)(param_1 + 0x4f8) != 0) && (uVar6 = FUN_0130e360(), (uVar6 & 1) != 0)) &&
      (*(uint *)(param_1 + 0x500) < 5)) &&
     ((1 << (ulong)(*(uint *)(param_1 + 0x500) & 0x1f) & 0x1aU) != 0)) {
    *(undefined4 *)(param_1 + 0x844) = 0x41f00000;
  }
  return;
}


