/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00448fc0; name: FUN_00448fc0
 */


/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_00448fc0(long param_1,uint param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  bool bVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined1 auVar14 [16];
  
  nn::os::LockMutex((MutexType *)PTR_DAT_02712fb8);
  nn::os::LockMutex((MutexType *)(param_1 + 0x48));
  uVar8 = *(uint *)(param_1 + 0x78);
  if (uVar8 == 0) {
LAB_00449028:
    lVar12 = 0;
    uVar11 = 0;
  }
  else {
    uVar4 = 0;
    if (uVar8 != 0) {
      uVar4 = param_2 / uVar8;
    }
    plVar13 = *(long **)(*(long *)(param_1 + 0x70) + (ulong)(param_2 - uVar4 * uVar8) * 8);
    while( true ) {
      if (plVar13 == (long *)0x0) goto LAB_00449028;
      if (*(uint *)(plVar13 + 1) == param_2) break;
      plVar13 = (long *)*plVar13;
    }
    iVar2 = *(int *)(plVar13 + 6);
    lVar12 = plVar13[2];
    *(int *)(plVar13 + 6) = iVar2 + 1;
    if (lVar12 != 0) {
      uVar11 = (ulong)*(uint *)(plVar13 + 3);
      goto LAB_00449030;
    }
    uVar8 = *(uint *)(plVar13 + 5);
    if (uVar8 == 0) {
      *(int *)(plVar13 + 6) = iVar2;
      goto joined_r0x00449128;
    }
    lVar7 = plVar13[4];
    lVar5 = 0;
    lVar12 = 0;
    uVar11 = 0;
    uVar6 = 0;
    bVar10 = false;
    uVar9 = 0xffffffff;
    do {
      if (((*(byte *)(*(long *)(lVar7 + lVar5) + 8) & 1) == 0) &&
         ((int)uVar9 < *(int *)(lVar7 + lVar5 + 0x10))) {
        *param_3 = *(long *)(lVar7 + lVar5);
        lVar7 = plVar13[4];
        uVar9 = (ulong)*(uint *)(lVar7 + lVar5 + 0x10);
        lVar12 = *(long *)(lVar7 + lVar5 + 8);
        uVar8 = *(uint *)(plVar13 + 5);
        bVar10 = true;
        uVar11 = uVar9;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x18;
    } while (uVar6 < uVar8);
    if (!bVar10) {
      iVar2 = *(int *)(plVar13 + 6) + -1;
      *(int *)(plVar13 + 6) = iVar2;
joined_r0x00449128:
      if ((iVar2 == 0) && (uVar11 = 0, plVar13[2] != 0)) {
        FUN_004047f0(*(undefined4 *)(PTR_DAT_02712b90 + 0x18));
        lVar12 = 0;
        plVar13[2] = 0;
        *(undefined4 *)(plVar13 + 3) = 0;
      }
      else {
        uVar11 = 0;
        lVar12 = 0;
      }
      goto LAB_00449030;
    }
    if ((*(byte *)(*param_3 + 8) >> 1 & 1) != 0) {
      piVar1 = (int *)(*param_3 + 0x70);
      do {
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar10) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
LAB_00449030:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x48));
  nn::os::UnlockMutex((MutexType *)PTR_DAT_02712fb8);
  auVar14._8_8_ = uVar11;
  auVar14._0_8_ = lVar12;
  return auVar14;
}


