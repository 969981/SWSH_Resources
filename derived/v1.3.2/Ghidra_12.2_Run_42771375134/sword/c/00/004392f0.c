/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004392f0; name: FUN_004392f0
 */


void FUN_004392f0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  code *pcVar10;
  long lVar11;
  
  puVar6 = PTR_DAT_02712de8;
  puVar5 = PTR_DAT_02712ae8;
  if (param_2 == 0) {
    if (*(long *)PTR_DAT_02712de8 != 0) {
      if (param_4 == 0) {
        uVar9 = 0xffffffffffffffff;
      }
      else {
        uVar9 = *(undefined8 *)(param_4 + 0x48);
      }
      FUN_004c2870(*(long *)PTR_DAT_02712de8,0,uVar9);
      return;
    }
  }
  else {
    lVar11 = *(long *)(param_2 + 0x18);
    if (lVar11 != 0) {
      if (param_4 == 0) {
        do {
          while (*(short *)(lVar11 + 0x34) != 0x403) {
            if (*(short *)(lVar11 + 0x34) != 0x2103) goto LAB_00439538;
            lVar8 = *(long *)puVar5;
            uVar2 = *(uint *)(lVar11 + 0x30);
            pMVar1 = (MutexType *)(lVar8 + 0xa8);
            nn::os::LockMutex(pMVar1);
            uVar3 = *(uint *)(lVar8 + 0xd0);
            if (uVar3 != 0) {
              uVar4 = 0;
              if (uVar3 != 0) {
                uVar4 = uVar2 / uVar3;
              }
              for (plVar7 = *(long **)(*(long *)(lVar8 + 200) + (ulong)(uVar2 - uVar4 * uVar3) * 8);
                  plVar7 != (long *)0x0; plVar7 = (long *)plVar7[1]) {
                if (*(uint *)(plVar7 + 2) == uVar2) {
                  *(int *)((long)plVar7 + 0x14) = *(int *)((long)plVar7 + 0x14) + 1;
                  nn::os::UnlockMutex(pMVar1);
                  FUN_004392f0(param_1,plVar7,param_3,0);
                  pcVar10 = *(code **)(*plVar7 + 0x18);
                  goto LAB_00439534;
                }
              }
            }
            nn::os::UnlockMutex(pMVar1);
            lVar11 = *(long *)(lVar11 + 0x18);
            if (lVar11 == 0) {
              return;
            }
          }
          plVar7 = (long *)FUN_0043e8c0(lVar11);
          if (plVar7 != (long *)0x0) {
            lVar8 = *(long *)puVar6;
            if (lVar8 != 0) {
              FUN_004c2870(lVar8,(int)plVar7[2],0xffffffffffffffff);
            }
            pcVar10 = *(code **)(*plVar7 + 0x18);
LAB_00439534:
            (*pcVar10)(plVar7);
          }
LAB_00439538:
          lVar11 = *(long *)(lVar11 + 0x18);
        } while (lVar11 != 0);
      }
      else {
        do {
          while (*(short *)(lVar11 + 0x34) != 0x2103) {
            if ((*(short *)(lVar11 + 0x34) != 0x403) ||
               (plVar7 = (long *)FUN_0043e8c0(lVar11), plVar7 == (long *)0x0)) goto LAB_004393dc;
            lVar8 = *(long *)puVar6;
            if (lVar8 != 0) {
              FUN_004c2870(lVar8,(int)plVar7[2],*(undefined8 *)(param_4 + 0x48));
            }
            (**(code **)(*plVar7 + 0x18))(plVar7);
            lVar11 = *(long *)(lVar11 + 0x18);
            if (lVar11 == 0) {
              return;
            }
          }
          lVar8 = *(long *)puVar5;
          uVar2 = *(uint *)(lVar11 + 0x30);
          pMVar1 = (MutexType *)(lVar8 + 0xa8);
          nn::os::LockMutex(pMVar1);
          uVar3 = *(uint *)(lVar8 + 0xd0);
          if (uVar3 != 0) {
            uVar4 = 0;
            if (uVar3 != 0) {
              uVar4 = uVar2 / uVar3;
            }
            for (plVar7 = *(long **)(*(long *)(lVar8 + 200) + (ulong)(uVar2 - uVar4 * uVar3) * 8);
                plVar7 != (long *)0x0; plVar7 = (long *)plVar7[1]) {
              if (*(uint *)(plVar7 + 2) == uVar2) {
                *(int *)((long)plVar7 + 0x14) = *(int *)((long)plVar7 + 0x14) + 1;
                nn::os::UnlockMutex(pMVar1);
                FUN_004392f0(param_1,plVar7,param_3,param_4);
                (**(code **)(*plVar7 + 0x18))(plVar7);
                lVar11 = *(long *)(lVar11 + 0x18);
                goto joined_r0x00439424;
              }
            }
          }
          nn::os::UnlockMutex(pMVar1);
LAB_004393dc:
          lVar11 = *(long *)(lVar11 + 0x18);
joined_r0x00439424:
        } while (lVar11 != 0);
      }
    }
  }
  return;
}


