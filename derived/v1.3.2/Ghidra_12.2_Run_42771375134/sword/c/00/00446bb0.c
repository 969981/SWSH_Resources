/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00446bb0; name: FUN_00446bb0
 */


void FUN_00446bb0(long param_1,long param_2)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  puVar5 = PTR_DAT_02712ae8;
  if (*(long *)(param_2 + 0x18) != 0) {
    lVar6 = *(long *)(param_2 + 0x18);
    do {
      while( true ) {
        lVar9 = *(long *)(lVar6 + 0x18);
        if (*(short *)(lVar6 + 0x34) != 0x2103) break;
        lVar7 = *(long *)puVar5;
        uVar2 = *(uint *)(lVar6 + 0x30);
        pMVar1 = (MutexType *)(lVar7 + 0xa8);
        nn::os::LockMutex(pMVar1);
        uVar3 = *(uint *)(lVar7 + 0xd0);
        if (uVar3 != 0) {
          uVar4 = 0;
          if (uVar3 != 0) {
            uVar4 = uVar2 / uVar3;
          }
          for (plVar8 = *(long **)(*(long *)(lVar7 + 200) + (ulong)(uVar2 - uVar4 * uVar3) * 8);
              plVar8 != (long *)0x0; plVar8 = (long *)plVar8[1]) {
            if (*(uint *)(plVar8 + 2) == uVar2) {
              *(int *)((long)plVar8 + 0x14) = *(int *)((long)plVar8 + 0x14) + 1;
              nn::os::UnlockMutex(pMVar1);
              FUN_00446bb0(param_1,plVar8);
              (**(code **)(*plVar8 + 0x18))(plVar8);
              goto joined_r0x00446cb0;
            }
          }
        }
        nn::os::UnlockMutex(pMVar1);
        lVar6 = lVar9;
        if (lVar9 == 0) {
          return;
        }
      }
      if (*(short *)(lVar6 + 0x34) == 0x403) {
        FUN_00482e30(*(undefined4 *)(lVar6 + 0x30));
        lVar6 = FUN_0044a9b0(param_1 + 0x88,*(undefined4 *)(lVar6 + 0x38),0);
        if (lVar6 != 0) {
          FUN_00442640(lVar6,0);
        }
      }
joined_r0x00446cb0:
      lVar6 = lVar9;
    } while (lVar9 != 0);
  }
  return;
}


