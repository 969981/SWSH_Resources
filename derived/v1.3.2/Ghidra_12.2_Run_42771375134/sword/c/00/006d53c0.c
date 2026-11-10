/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d53c0; name: FUN_006d53c0
 */


void FUN_006d53c0(long param_1,long param_2)

{
  MultiWaitHolderType *pMVar1;
  MultiWaitHolderType *pMVar2;
  long lVar3;
  long lVar4;
  MultiWaitHolderType *pMVar5;
  MultiWaitHolderType *pMVar6;
  undefined8 uVar7;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  MultiWaitHolderType local_40;
  long local_38;
  
  pMVar6 = *(MultiWaitHolderType **)(param_1 + 0x30);
  pMVar5 = *(MultiWaitHolderType **)(param_1 + 0x38);
  local_38 = param_2;
  if ((pMVar6 != pMVar5) && (pMVar2 = pMVar6, *(long *)(pMVar6 + 0x40) != 0)) {
    do {
      pMVar6 = pMVar2 + 0x50;
      if (pMVar5 == pMVar6) goto LAB_006d54f0;
      pMVar1 = pMVar2 + 0x90;
      pMVar2 = pMVar6;
    } while (*(long *)pMVar1 != 0);
  }
  if (pMVar6 == pMVar5) {
LAB_006d54f0:
    if (pMVar5 < *(MultiWaitHolderType **)(param_1 + 0x40)) {
      uVar7 = *(undefined8 *)(param_1 + 0x48);
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      lVar3 = local_38;
      if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar7;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      *(long *)(pMVar5 + 0x40) = local_38;
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
      }
      pMVar5[0x48] = (MultiWaitHolderType)0x0;
      nn::os::InitializeMultiWaitHolder(pMVar5,(EventType *)(lVar3 + 0x60));
      nn::os::SetMultiWaitHolderUserData(pMVar5,(ulong)pMVar5);
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 0x50;
    }
    else {
      FUN_006d56c0((undefined8 *)(param_1 + 0x30),&local_38);
    }
  }
  else {
    local_48 = param_2;
    if (param_2 != 0) {
      (**(code **)(*(long *)(param_2 + 0x48) + 0x10))();
    }
    local_40 = (MultiWaitHolderType)0x0;
    nn::os::InitializeMultiWaitHolder
              ((MultiWaitHolderType *)&local_88,(EventType *)(param_2 + 0x60));
    nn::os::SetMultiWaitHolderUserData((MultiWaitHolderType *)&local_88,(ulong)&local_88);
    *(undefined8 *)(pMVar6 + 0x10) = local_78;
    *(undefined8 *)(pMVar6 + 0x18) = uStack_70;
    *(undefined8 *)pMVar6 = local_88;
    *(undefined8 *)(pMVar6 + 8) = uStack_80;
    *(undefined8 *)(pMVar6 + 0x30) = local_58;
    *(undefined8 *)(pMVar6 + 0x38) = uStack_50;
    *(undefined8 *)(pMVar6 + 0x20) = local_68;
    *(undefined8 *)(pMVar6 + 0x28) = uStack_60;
    if (*(long *)(pMVar6 + 0x40) != 0) {
      (**(code **)(*(long *)(*(long *)(pMVar6 + 0x40) + 0x48) + 0x18))();
      *(undefined8 *)(pMVar6 + 0x40) = 0;
    }
    lVar3 = local_48;
    local_48 = 0;
    *(long *)(pMVar6 + 0x40) = lVar3;
    pMVar6[0x48] = local_40;
    lVar3 = nn::os::GetMultiWaitHolderUserData((MultiWaitHolderType *)&local_88);
    if (lVar3 != 0) {
      nn::os::SetMultiWaitHolderUserData((MultiWaitHolderType *)&local_88,0);
      nn::os::FinalizeMultiWaitHolder((MultiWaitHolderType *)&local_88);
      lVar3 = local_48;
      local_48 = 0;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
      }
    }
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    }
  }
  return;
}


