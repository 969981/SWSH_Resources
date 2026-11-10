/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00438610; name: FUN_00438610
 */


void FUN_00438610(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  puVar5 = PTR_DAT_02712ae8;
  lVar7 = *(long *)(param_2 + 0x18);
joined_r0x00438640:
  do {
    if (lVar7 == 0) {
      return;
    }
    if (*(short *)(lVar7 + 0x34) == 0x2103) {
      lVar8 = *(long *)puVar5;
      uVar3 = *(uint *)(lVar7 + 0x30);
      pMVar1 = (MutexType *)(lVar8 + 0xa8);
      nn::os::LockMutex(pMVar1);
      uVar2 = *(uint *)(lVar8 + 0xd0);
      if (uVar2 != 0) {
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = uVar3 / uVar2;
        }
        for (plVar6 = *(long **)(*(long *)(lVar8 + 200) + (ulong)(uVar3 - uVar4 * uVar2) * 8);
            plVar6 != (long *)0x0; plVar6 = (long *)plVar6[1]) {
          if (*(uint *)(plVar6 + 2) == uVar3) {
            *(int *)((long)plVar6 + 0x14) = *(int *)((long)plVar6 + 0x14) + 1;
            nn::os::UnlockMutex(pMVar1);
            FUN_00438610(param_1,plVar6,param_3,param_4);
            (**(code **)(*plVar6 + 0x18))(plVar6);
            uVar3 = *(uint *)(param_3 + 0x14);
            goto joined_r0x004386a4;
          }
        }
      }
      nn::os::UnlockMutex(pMVar1);
LAB_0043874c:
      uVar3 = *(uint *)(param_3 + 0x14);
joined_r0x004386a4:
      if (uVar3 < 4) {
                    /* WARNING: Could not recover jumptable at 0x00438760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_01d54a98 + *(int *)(&DAT_01d54a98 + (ulong)uVar3 * 4)))();
        return;
      }
    }
    else {
      if (*(short *)(lVar7 + 0x34) != 0x403) goto LAB_0043874c;
      plVar6 = (long *)FUN_0043e8c0(lVar7);
      if (plVar6 != (long *)0x0) {
        FUN_004387e0(plVar6,plVar6,param_4,*(undefined4 *)(param_3 + 0x14),
                     *(undefined4 *)(param_3 + 0x18),*(undefined4 *)(param_3 + 0x1c),
                     *(undefined4 *)(param_3 + 0x20));
        (**(code **)(*plVar6 + 0x18))(plVar6);
        lVar7 = *(long *)(lVar7 + 0x18);
        goto joined_r0x00438640;
      }
    }
    lVar7 = *(long *)(lVar7 + 0x18);
  } while( true );
}


