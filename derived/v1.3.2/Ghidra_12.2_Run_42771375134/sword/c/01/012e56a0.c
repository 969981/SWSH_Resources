/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e56a0; name: FUN_012e56a0
 */


void FUN_012e56a0(long param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  byte *pbVar8;
  undefined *puVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  long local_40 [4];
  
  FUN_0131b240(param_1 + 0x370,2);
  uVar5 = FUN_012d5170(*param_2,local_40 + 1);
  lVar12 = *(long *)(param_1 + 0x68);
  if ((lVar12 != 0) && (*(int *)(lVar12 + 0x54) != 0)) {
    piVar1 = (int *)(lVar12 + 0x54);
    pbVar8 = PTR_DAT_02715078;
    puVar9 = PTR_DAT_02715080;
    iVar10 = *(int *)(lVar12 + 0x54);
    do {
      while( true ) {
        plVar11 = *(long **)(lVar12 + 0x58);
        if (((*pbVar8 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(pbVar8), pbVar8 = PTR_DAT_02715078,
           puVar9 = PTR_DAT_02715080, iVar4 != 0)) {
          uVar6 = FUN_00a87090();
          *(undefined8 *)PTR_DAT_02715080 = uVar6;
          __cxa_guard_release(PTR_DAT_02715078);
          pbVar8 = PTR_DAT_02715078;
          puVar9 = PTR_DAT_02715080;
        }
        while( true ) {
          if (plVar11 == (long *)0x0) goto LAB_012e57c0;
          if (plVar11 == (long *)puVar9) break;
          plVar11 = (long *)*plVar11;
        }
        iVar4 = *piVar1;
        if (iVar4 == iVar10) break;
        ClearExclusiveLocal();
        iVar10 = iVar4;
        if (iVar4 == 0) goto LAB_012e57c0;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        local_40[3] = 0;
        if (*(long *)(lVar12 + 0x60) != 0) {
          local_40[3] = *(long *)(lVar12 + 0x60) + -0x50;
        }
        FUN_013099c0(uVar5,local_40 + 3);
        goto joined_r0x012e58d4;
      }
      iVar10 = iVar4;
    } while (iVar4 != 0);
  }
LAB_012e57c0:
  local_40[3] = 0;
  FUN_013099c0(uVar5,local_40 + 3);
joined_r0x012e58d4:
  if (local_40[3] != 0) {
    (**(code **)(*(long *)(local_40[3] + 0x48) + 0x18))();
    local_40[3] = 0;
  }
  if (*(int *)(param_1 + 0x500) == 2) {
    lVar12 = *(long *)(param_1 + 0x838);
    *(undefined8 *)(param_1 + 0x838) = 0;
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))();
    }
    *(undefined4 *)(param_1 + 0x844) = 0;
  }
  *(undefined4 *)(param_1 + 0x500) = 3;
  if ((((*(long *)(param_1 + 0x4f8) != 0) && (uVar7 = FUN_0130e360(), (uVar7 & 1) != 0)) &&
      (*(uint *)(param_1 + 0x500) < 5)) &&
     ((1 << (ulong)(*(uint *)(param_1 + 0x500) & 0x1f) & 0x1aU) != 0)) {
    *(undefined4 *)(param_1 + 0x844) = 0x41f00000;
  }
  local_40[1] = 0x69ae793b87aefa81;
  local_40[2] = 0;
  FUN_0130fad0(param_1,local_40 + 1,2);
  local_40[0] = param_1;
  (**(code **)(*(long *)(param_1 + 0x48) + 0x10))((long *)(param_1 + 0x48));
  FUN_012f2e00(local_40);
  if (local_40[0] != 0) {
    (**(code **)(*(long *)(local_40[0] + 0x48) + 0x18))();
  }
  return;
}


