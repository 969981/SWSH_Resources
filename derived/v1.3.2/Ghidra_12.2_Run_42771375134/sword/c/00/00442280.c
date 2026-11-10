/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00442280; name: FUN_00442280
 */


void FUN_00442280(long *param_1,ulong param_2)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  nn::os::LockMutex((MutexType *)PTR_DAT_02712fb8);
  plVar1 = param_1 + 0xe;
  do {
    iVar5 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (0 < iVar5) {
    nn::os::UnlockMutex((MutexType *)PTR_DAT_02712fb8);
    return;
  }
  if (param_1[5] != 0) {
    uVar9 = FUN_00404660((int)param_1[8]);
    if ((uVar9 >> 3 & 1) == 0) {
      FUN_00404870();
      cVar3 = *(char *)((long)param_1 + 0x44);
      param_1[5] = 0;
    }
    else {
      FUN_00404950((int)param_1[8],param_1[5]);
      cVar3 = *(char *)((long)param_1 + 0x44);
      param_1[5] = 0;
    }
    if (cVar3 != '\0') {
      FUN_00405710((int)param_1[8]);
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
    }
  }
  puVar8 = PTR_DAT_02712ae0;
  FUN_00442430(*(undefined8 *)PTR_DAT_02712ae0,param_1);
  iVar5 = *(int *)((long)param_1 + 0x74);
  nn::os::UnlockMutex((MutexType *)PTR_DAT_02712fb8);
  if (0 < iVar5) {
    if (((param_2 & 1) == 0) && (lVar10 = param_1[10], lVar10 != 0)) {
      lVar13 = *(long *)puVar8;
      lVar6 = param_1[2];
      lVar11 = param_1[3];
      lVar7 = param_1[8];
      lVar12 = param_1[0xb];
      *(undefined4 *)(lVar13 + 0xd4) = 1;
      FUN_0044d500(lVar13 + 0xd8,lVar10,(int)lVar6,lVar11,1,(int)lVar7,lVar12);
      param_1[10] = 0;
    }
    return;
  }
  if (((param_2 & 1) == 0) && (lVar10 = param_1[10], lVar10 != 0)) {
    lVar13 = *(long *)puVar8;
    lVar6 = param_1[2];
    lVar11 = param_1[3];
    lVar7 = param_1[8];
    lVar12 = param_1[0xb];
    *(undefined4 *)(lVar13 + 0xd4) = 1;
    FUN_0044d500(lVar13 + 0xd8,lVar10,(int)lVar6,lVar11,1,(int)lVar7,lVar12);
    param_1[10] = 0;
  }
  puVar8 = PTR_DAT_02712a90;
  uVar2 = *(undefined4 *)PTR_DAT_02712a90;
  *param_1 = (long)(PTR_DAT_02712fc0 + 0x10);
  if ((*(byte *)(param_1 + 0xf) >> 1 & 1) != 0) {
    FUN_00404870(*(undefined4 *)puVar8,param_1[6]);
    *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 0xf) & 0xfd;
  }
  param_1[6] = 0;
  FUN_00404870(uVar2,param_1);
  return;
}


