/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00439080; name: FUN_00439080
 */


void FUN_00439080(undefined8 param_1,long param_2,long param_3,long param_4)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  
  puVar5 = PTR_DAT_02712ae8;
  lVar8 = *(long *)(param_2 + 0x18);
  if (lVar8 != 0) {
    if (param_4 != 0) {
      do {
        while (*(short *)(lVar8 + 0x34) != 0x403) {
          if (*(short *)(lVar8 + 0x34) != 0x2103) goto LAB_004391c8;
          lVar9 = *(long *)puVar5;
          uVar2 = *(uint *)(lVar8 + 0x30);
          pMVar1 = (MutexType *)(lVar9 + 0xa8);
          nn::os::LockMutex(pMVar1);
          uVar3 = *(uint *)(lVar9 + 0xd0);
          if (uVar3 != 0) {
            uVar4 = 0;
            if (uVar3 != 0) {
              uVar4 = uVar2 / uVar3;
            }
            for (plVar10 = *(long **)(*(long *)(lVar9 + 200) + (ulong)(uVar2 - uVar4 * uVar3) * 8);
                plVar10 != (long *)0x0; plVar10 = (long *)plVar10[1]) {
              if (*(uint *)(plVar10 + 2) == uVar2) {
                *(int *)((long)plVar10 + 0x14) = *(int *)((long)plVar10 + 0x14) + 1;
                nn::os::UnlockMutex(pMVar1);
                FUN_00439080(param_1,plVar10,param_3,param_4);
                pcVar7 = *(code **)(*plVar10 + 0x18);
                goto LAB_004391c4;
              }
            }
          }
          nn::os::UnlockMutex(pMVar1);
          lVar8 = *(long *)(lVar8 + 0x18);
          if (lVar8 == 0) {
            return;
          }
        }
        plVar10 = (long *)FUN_0043e8c0(lVar8);
        if (plVar10 != (long *)0x0) {
          iVar6 = (**(code **)(*plVar10 + 0x88))(plVar10);
          if ((iVar6 - 2U < 4) && (*(long *)PTR_DAT_02712de8 != 0)) {
            FUN_004c27a0(*(long *)PTR_DAT_02712de8,(int)plVar10[2],*(undefined8 *)(param_4 + 0x48),
                         param_3 + 0x18,*(undefined4 *)(param_3 + 0x14));
          }
          pcVar7 = *(code **)(*plVar10 + 0x18);
LAB_004391c4:
          (*pcVar7)(plVar10);
        }
LAB_004391c8:
        lVar8 = *(long *)(lVar8 + 0x18);
        if (lVar8 == 0) {
          return;
        }
      } while( true );
    }
    do {
      while (*(short *)(lVar8 + 0x34) != 0x2103) {
        if ((*(short *)(lVar8 + 0x34) != 0x403) ||
           (plVar10 = (long *)FUN_0043e8c0(lVar8), plVar10 == (long *)0x0)) goto LAB_0043927c;
        (**(code **)(*plVar10 + 0x88))(plVar10);
        (**(code **)(*plVar10 + 0x18))(plVar10);
        lVar8 = *(long *)(lVar8 + 0x18);
        if (lVar8 == 0) {
          return;
        }
      }
      lVar9 = *(long *)puVar5;
      uVar2 = *(uint *)(lVar8 + 0x30);
      pMVar1 = (MutexType *)(lVar9 + 0xa8);
      nn::os::LockMutex(pMVar1);
      uVar3 = *(uint *)(lVar9 + 0xd0);
      if (uVar3 != 0) {
        uVar4 = 0;
        if (uVar3 != 0) {
          uVar4 = uVar2 / uVar3;
        }
        for (plVar10 = *(long **)(*(long *)(lVar9 + 200) + (ulong)(uVar2 - uVar4 * uVar3) * 8);
            plVar10 != (long *)0x0; plVar10 = (long *)plVar10[1]) {
          if (*(uint *)(plVar10 + 2) == uVar2) {
            *(int *)((long)plVar10 + 0x14) = *(int *)((long)plVar10 + 0x14) + 1;
            nn::os::UnlockMutex(pMVar1);
            FUN_00439080(param_1,plVar10,param_3,0);
            (**(code **)(*plVar10 + 0x18))(plVar10);
            lVar8 = *(long *)(lVar8 + 0x18);
            goto joined_r0x004392c4;
          }
        }
      }
      nn::os::UnlockMutex(pMVar1);
LAB_0043927c:
      lVar8 = *(long *)(lVar8 + 0x18);
joined_r0x004392c4:
    } while (lVar8 != 0);
  }
  return;
}


