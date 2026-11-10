/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007aad90; name: FUN_007aad90
 */


undefined8 FUN_007aad90(long param_1,byte param_2)

{
  MutexType *pMVar1;
  byte bVar2;
  char cVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  code *pcVar10;
  long *plVar11;
  
  iVar5 = nn::nifm::Initialize();
  if (iVar5 == 0) {
    *(undefined1 *)(param_1 + 0x89) = 1;
    nn::nifm::SetLocalNetworkMode((bool)(param_2 & 1));
    cVar3 = *(char *)(param_1 + 0x89);
  }
  else {
    cVar3 = *(char *)(param_1 + 0x89);
  }
  if (cVar3 == '\0') {
LAB_007aae08:
    uVar9 = 0;
  }
  else {
    uVar6 = nn::nifm::IsNetworkAvailable();
    if ((uVar6 & 1) == 0) {
      pMVar1 = (MutexType *)(param_1 + 0xcc0);
      nn::os::LockMutex(pMVar1);
      if (*(long *)(param_1 + 0xce0) == 0) {
        nn::os::UnlockMutex(pMVar1);
      }
      else {
        bVar2 = *(byte *)(*(long *)(param_1 + 0xce0) + 0x2fa);
        nn::os::UnlockMutex(pMVar1);
        if ((bVar2 & 1) == 0) goto LAB_007aae08;
      }
      nn::os::LockMutex(pMVar1);
      plVar11 = *(long **)(param_1 + 0x50);
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar11;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      plVar8 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0x380,0x10);
      if (plVar8 == (long *)0x0) {
        (**(code **)(*plVar11 + 0xb8))(plVar11);
      }
      FUN_006d00e0(plVar8,(long)*(int *)(param_1 + 0xce8));
      puVar4 = PTR_DAT_02716798;
      *plVar8 = (long)(PTR_DAT_02716798 + 0x10);
      plVar8[1] = (long)plVar11;
      plVar8[9] = (long)(puVar4 + 0x70);
      plVar8[0xb] = (long)(puVar4 + 0xa0);
      plVar8[99] = 0;
      plVar8[0x62] = 0;
      plVar8[0x61] = 0;
      plVar8[0x60] = 0;
      plVar8[2] = (long)plVar8;
      plVar8[3] = 0x380;
      plVar8[4] = 0x10;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      if (plVar8 != (long *)0x0) {
        (**(code **)(plVar8[9] + 0x10))();
      }
      if (*(long *)(param_1 + 0xce0) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0xce0) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0xce0) = 0;
      }
      *(long **)(param_1 + 0xce0) = plVar8;
      pcVar10 = (code *)plVar8[0x61];
      if (pcVar10 != (code *)0x0) {
        plVar8[0x62] = 0;
        plVar8[99] = 0;
        plVar8[0x60] = 0;
        plVar8[0x61] = 0;
        (*pcVar10)(plVar8 + 100);
      }
      plVar8[0x60] = (long)&LAB_007aba00;
      plVar8[0x61] = (long)&LAB_007aba40;
      plVar8[0x62] = (long)&LAB_007aba50;
      plVar8[99] = (long)&LAB_007aba60;
      FUN_006d0560(*(undefined8 *)(param_1 + 0xce0),"SubmitNetworkRequest",0xffffffff,0x10);
      nn::os::UnlockMutex(pMVar1);
    }
    uVar9 = 1;
  }
  return uVar9;
}


