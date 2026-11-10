/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d56c0; name: FUN_006d56c0
 */


void FUN_006d56c0(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  MultiWaitHolderType *pMVar8;
  long lVar9;
  ulong uVar10;
  MultiWaitHolderType *pMVar11;
  MultiWaitHolderType *pMVar12;
  MultiWaitHolderType *pMVar13;
  long lVar14;
  ulong uVar15;
  
  lVar7 = param_1[1] - *param_1 >> 4;
  uVar15 = 0x333333333333333;
  uVar1 = lVar7 * -0x3333333333333333 + 1;
  if (0x333333333333333 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar9 = param_1[2] - *param_1 >> 4;
  if ((ulong)(lVar9 * -0x3333333333333333) < 0x199999999999999) {
    uVar10 = lVar9 * -0x6666666666666666;
    uVar15 = uVar1;
    if (uVar1 <= uVar10) {
      uVar15 = uVar10;
    }
    if (uVar15 == 0) {
      lVar9 = 0;
      goto LAB_006d5784;
    }
  }
  lVar9 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar15 * 0x50,8);
  if (lVar9 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_006d5784:
  puVar5 = PTR_DAT_02710860;
  lVar14 = param_1[3];
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar6 + 0x80)) {
LAB_006d59ac:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar14;
  pMVar12 = (MultiWaitHolderType *)(lVar9 + lVar7 * 0x10);
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  lVar14 = *param_2;
  *(long *)(lVar9 + lVar7 * 0x10 + 0x40) = lVar14;
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
  }
  *(undefined1 *)(lVar9 + lVar7 * 0x10 + 0x48) = 0;
  nn::os::InitializeMultiWaitHolder(pMVar12,(EventType *)(lVar14 + 0x60));
  nn::os::SetMultiWaitHolderUserData(pMVar12,(ulong)pMVar12);
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  pMVar13 = (MultiWaitHolderType *)*param_1;
  pMVar8 = (MultiWaitHolderType *)param_1[1];
  if (pMVar8 == pMVar13) {
    pMVar8 = pMVar12;
    pMVar11 = pMVar13;
  }
  else {
    lVar7 = 0;
    do {
      lVar14 = param_1[3];
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
      if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_006d59ac;
      *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar14;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      uVar2 = *(undefined8 *)(pMVar8 + lVar7 + -0x50);
      uVar3 = *(undefined8 *)(pMVar8 + lVar7 + -0x48);
      uVar4 = *(undefined8 *)(pMVar8 + lVar7 + -0x38);
      *(undefined8 *)(pMVar12 + lVar7 + -0x40) = *(undefined8 *)(pMVar8 + lVar7 + -0x40);
      *(undefined8 *)(pMVar12 + lVar7 + -0x38) = uVar4;
      *(undefined8 *)(pMVar12 + lVar7 + -0x50) = uVar2;
      *(undefined8 *)(pMVar12 + lVar7 + -0x48) = uVar3;
      uVar2 = *(undefined8 *)(pMVar8 + lVar7 + -0x30);
      uVar3 = *(undefined8 *)(pMVar8 + lVar7 + -0x28);
      uVar4 = *(undefined8 *)(pMVar8 + lVar7 + -0x18);
      *(undefined8 *)(pMVar12 + lVar7 + -0x20) = *(undefined8 *)(pMVar8 + lVar7 + -0x20);
      *(undefined8 *)(pMVar12 + lVar7 + -0x18) = uVar4;
      *(undefined8 *)(pMVar12 + lVar7 + -0x30) = uVar2;
      *(undefined8 *)(pMVar12 + lVar7 + -0x28) = uVar3;
      lVar14 = *(long *)(pMVar8 + lVar7 + -0x10);
      *(long *)(pMVar12 + lVar7 + -0x10) = lVar14;
      if (lVar14 != 0) {
        (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
      }
      pMVar12[lVar7 + -8] = pMVar8[lVar7 + -8];
      lVar7 = lVar7 + -0x50;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    } while ((long)pMVar13 - (long)pMVar8 != lVar7);
    pMVar13 = (MultiWaitHolderType *)*param_1;
    pMVar8 = pMVar12 + lVar7;
    pMVar11 = (MultiWaitHolderType *)param_1[1];
  }
  lVar7 = param_1[2];
  *param_1 = (long)pMVar8;
  param_1[1] = (long)(pMVar12 + 0x50);
  param_1[2] = lVar9 + uVar15 * 0x50;
  while (pMVar12 = pMVar11, pMVar12 != pMVar13) {
    pMVar11 = pMVar12 + -0x50;
    lVar9 = nn::os::GetMultiWaitHolderUserData(pMVar11);
    if (lVar9 != 0) {
      nn::os::SetMultiWaitHolderUserData(pMVar11,0);
      nn::os::FinalizeMultiWaitHolder(pMVar11);
      lVar9 = *(long *)(pMVar12 + -0x10);
      *(undefined8 *)(pMVar12 + -0x10) = 0;
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
      }
    }
    if (*(long *)(pMVar12 + -0x10) != 0) {
      (**(code **)(*(long *)(*(long *)(pMVar12 + -0x10) + 0x48) + 0x18))();
      *(undefined8 *)(pMVar12 + -0x10) = 0;
    }
  }
  if (pMVar13 == (MultiWaitHolderType *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006d5988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],pMVar13,lVar7 - (long)pMVar13,8);
  return;
}


