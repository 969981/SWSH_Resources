/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00431060; name: FUN_00431060
 */


undefined4
FUN_00431060(uint param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 *param_6,undefined4 param_7)

{
  MutexType *pMVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  undefined *puVar7;
  undefined2 uVar8;
  int iVar9;
  undefined4 uVar10;
  long lVar11;
  long *plVar12;
  
  lVar11 = *(long *)PTR_DAT_02712ae8;
  pMVar1 = (MutexType *)(lVar11 + 0xa8);
  nn::os::LockMutex(pMVar1);
  uVar3 = *(uint *)(lVar11 + 0xd0);
  if (uVar3 != 0) {
    uVar6 = 0;
    if (uVar3 != 0) {
      uVar6 = param_1 / uVar3;
    }
    for (plVar12 = *(long **)(*(long *)(lVar11 + 200) + (ulong)(param_1 - uVar6 * uVar3) * 8);
        plVar12 != (long *)0x0; plVar12 = (long *)plVar12[1]) {
      if (*(uint *)(plVar12 + 2) == param_1) {
        *(int *)((long)plVar12 + 0x14) = *(int *)((long)plVar12 + 0x14) + 1;
        nn::os::UnlockMutex(pMVar1);
        uVar8 = FUN_00435870();
        puVar7 = PTR_DAT_02712de0;
        lVar11 = FUN_004361b0(*(undefined8 *)PTR_DAT_02712de0,1,uVar8);
        *(long **)(lVar11 + 0x28) = plVar12;
        *(uint *)(lVar11 + 0x30) = param_1;
        if (param_6 == (undefined8 *)0x0) {
          *(undefined4 *)(lVar11 + 0x24) = 0;
          *(undefined8 *)(lVar11 + 0x14) = 0;
          *(undefined8 *)(lVar11 + 0x1c) = 0;
          piVar2 = (int *)PTR_DAT_02712e08;
        }
        else {
          *(undefined4 *)(lVar11 + 0x24) = *(undefined4 *)(param_6 + 2);
          *(undefined8 *)(lVar11 + 0x1c) = param_6[1];
          *(undefined8 *)(lVar11 + 0x14) = *param_6;
          piVar2 = (int *)PTR_DAT_02712e08;
        }
        do {
          iVar9 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(undefined8 *)(lVar11 + 4) = param_2;
        *(int *)(lVar11 + 0xc) = iVar9 + 1;
        *(undefined4 *)(lVar11 + 0x10) = param_7;
        iVar9 = FUN_0048ecc0(*(undefined8 *)PTR_DAT_02712ad0,(undefined8 *)(lVar11 + 4),param_4,
                             param_5,param_3,*(undefined4 *)(*(long *)(lVar11 + 0x28) + 0x10));
        if (iVar9 == 1) {
          uVar10 = *(undefined4 *)(lVar11 + 0xc);
        }
        else {
          (**(code **)(*plVar12 + 0x18))(plVar12);
          uVar10 = 0;
          *(undefined2 *)(lVar11 + 2) = 0x38;
        }
        piVar2 = (int *)(*(long *)puVar7 + 0x94);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = *piVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        return uVar10;
      }
    }
  }
  nn::os::UnlockMutex(pMVar1);
  return 0;
}


