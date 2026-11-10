/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d4fd0; name: FUN_006d4fd0
 */


void FUN_006d4fd0(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  MultiWaitHolderType *pMVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  MultiWaitHolderType *pMVar12;
  MultiWaitHolderType *pMVar13;
  long lVar14;
  
  if ((ulong)((param_1[2] - *param_1 >> 4) * -0x3333333333333333) < param_2) {
    lVar9 = param_1[1] - *param_1 >> 4;
    lVar6 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 * 0x50,8);
    if (lVar6 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
    puVar5 = PTR_DAT_02710860;
    lVar10 = lVar6 + lVar9 * 0x10;
    pMVar13 = (MultiWaitHolderType *)*param_1;
    pMVar12 = (MultiWaitHolderType *)param_1[1];
    if (pMVar12 == pMVar13) {
      lVar9 = lVar10;
      pMVar12 = pMVar13;
    }
    else {
      lVar14 = 0;
      do {
        lVar11 = param_1[3];
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
        if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar11;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        uVar1 = *(undefined8 *)(pMVar12 + lVar14 + -0x50);
        uVar2 = *(undefined8 *)(pMVar12 + lVar14 + -0x48);
        lVar11 = lVar6 + lVar9 * 0x10 + lVar14;
        uVar3 = *(undefined8 *)(pMVar12 + lVar14 + -0x38);
        *(undefined8 *)(lVar11 + -0x40) = *(undefined8 *)(pMVar12 + lVar14 + -0x40);
        *(undefined8 *)(lVar11 + -0x38) = uVar3;
        *(undefined8 *)(lVar11 + -0x50) = uVar1;
        *(undefined8 *)(lVar11 + -0x48) = uVar2;
        uVar1 = *(undefined8 *)(pMVar12 + lVar14 + -0x30);
        uVar2 = *(undefined8 *)(pMVar12 + lVar14 + -0x28);
        uVar3 = *(undefined8 *)(pMVar12 + lVar14 + -0x18);
        *(undefined8 *)(lVar11 + -0x20) = *(undefined8 *)(pMVar12 + lVar14 + -0x20);
        *(undefined8 *)(lVar11 + -0x18) = uVar3;
        *(undefined8 *)(lVar11 + -0x30) = uVar1;
        *(undefined8 *)(lVar11 + -0x28) = uVar2;
        lVar8 = *(long *)(pMVar12 + lVar14 + -0x10);
        *(long *)(lVar11 + -0x10) = lVar8;
        if (lVar8 != 0) {
          (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
        }
        *(MultiWaitHolderType *)(lVar11 + -8) = pMVar12[lVar14 + -8];
        lVar14 = lVar14 + -0x50;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      } while ((long)pMVar13 - (long)pMVar12 != lVar14);
      pMVar13 = (MultiWaitHolderType *)*param_1;
      lVar9 = lVar6 + lVar9 * 0x10 + lVar14;
      pMVar12 = (MultiWaitHolderType *)param_1[1];
    }
    lVar14 = param_1[2];
    *param_1 = lVar9;
    param_1[1] = lVar10;
    param_1[2] = lVar6 + param_2 * 0x50;
    while (pMVar4 = pMVar12, pMVar4 != pMVar13) {
      pMVar12 = pMVar4 + -0x50;
      lVar6 = nn::os::GetMultiWaitHolderUserData(pMVar12);
      if (lVar6 != 0) {
        nn::os::SetMultiWaitHolderUserData(pMVar12,0);
        nn::os::FinalizeMultiWaitHolder(pMVar12);
        lVar6 = *(long *)(pMVar4 + -0x10);
        *(undefined8 *)(pMVar4 + -0x10) = 0;
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
        }
      }
      if (*(long *)(pMVar4 + -0x10) != 0) {
        (**(code **)(*(long *)(*(long *)(pMVar4 + -0x10) + 0x48) + 0x18))();
        *(undefined8 *)(pMVar4 + -0x10) = 0;
      }
    }
    if (pMVar13 != (MultiWaitHolderType *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006d51fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],pMVar13,lVar14 - (long)pMVar13,8)
      ;
      return;
    }
  }
  return;
}


