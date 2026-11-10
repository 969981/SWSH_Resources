/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00442640; name: FUN_00442640
 */


void FUN_00442640(long *param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  char cVar9;
  
  nn::os::LockMutex((MutexType *)PTR_DAT_02712fb8);
  piVar1 = (int *)((long)param_1 + 0x74);
  if ((param_2 & 1) == 0) {
    do {
      iVar2 = *piVar1;
      cVar9 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (0 < iVar2 + -1) goto LAB_004426ac;
  }
  else {
    *piVar1 = 0;
  }
  puVar5 = PTR_DAT_02712ae0;
  FUN_00442840(*(undefined8 *)PTR_DAT_02712ae0,param_1);
  if ((int)param_1[0xe] < 1) {
    FUN_0044aa40(*(long *)puVar5 + 0x88,(int)param_1[2],0);
    nn::os::UnlockMutex((MutexType *)PTR_DAT_02712fb8);
    puVar5 = PTR_DAT_02712af0;
    puVar7 = (undefined8 *)param_1[0xc];
    puVar8 = puVar7;
    if ((int)param_1[0xd] != 0) {
      do {
        nn::os::LockMutex((MutexType *)puVar5);
        if (puVar8 != (undefined8 *)(param_1[0xc] + (ulong)*(uint *)(param_1 + 0xd) * 8)) {
          cVar9 = '\x01';
          puVar7 = puVar8;
          do {
            puVar8 = puVar7 + 1;
            (**(code **)(*(long *)*puVar7 + 0x18))();
            cVar9 = cVar9 + '\x01';
            if (cVar9 == '\0') break;
            puVar7 = puVar8;
          } while (puVar8 != (undefined8 *)(param_1[0xc] + (ulong)*(uint *)(param_1 + 0xd) * 8));
        }
        nn::os::UnlockMutex((MutexType *)puVar5);
        puVar7 = (undefined8 *)param_1[0xc];
      } while (puVar8 != puVar7 + *(uint *)(param_1 + 0xd));
    }
    if (puVar7 != (undefined8 *)0x0) {
      *(undefined4 *)(param_1 + 0xd) = 0;
      FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,puVar7);
      param_1[0xc] = 0;
      *(undefined4 *)((long)param_1 + 0x6c) = 0;
    }
    if (param_1[5] != 0) {
      uVar6 = FUN_00404660((int)param_1[8]);
      if ((uVar6 >> 3 & 1) == 0) {
        FUN_00404870();
        cVar9 = *(char *)((long)param_1 + 0x44);
        param_1[5] = 0;
      }
      else {
        FUN_00404950((int)param_1[8],param_1[5]);
        cVar9 = *(char *)((long)param_1 + 0x44);
        param_1[5] = 0;
      }
      if (cVar9 != '\0') {
        FUN_00405710((int)param_1[8]);
        *(undefined4 *)(param_1 + 8) = 0xffffffff;
      }
    }
    puVar5 = PTR_DAT_02712a90;
    uVar3 = *(undefined4 *)PTR_DAT_02712a90;
    *param_1 = (long)(PTR_DAT_02712fc0 + 0x10);
    if ((*(byte *)(param_1 + 0xf) >> 1 & 1) != 0) {
      FUN_00404870(*(undefined4 *)puVar5,param_1[6]);
      *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 0xf) & 0xfd;
    }
    param_1[6] = 0;
    FUN_00404870(uVar3,param_1);
    return;
  }
LAB_004426ac:
  nn::os::UnlockMutex((MutexType *)PTR_DAT_02712fb8);
  return;
}


