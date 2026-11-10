/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00765490; name: FUN_00765490
 */


undefined8 FUN_00765490(void *param_1,ulong param_2)

{
  ThreadType *pTVar1;
  int iVar2;
  void *__dest;
  ulong *__s;
  long lVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  undefined8 uVar7;
  size_t sVar8;
  long lVar9;
  
  pvVar6 = *(void **)((long)param_1 + 0x200);
  if ((ulong)(*(long *)((long)param_1 + 0x210) - (long)pvVar6 >> 2) < 0x40) {
    sVar8 = *(long *)((long)param_1 + 0x208) - (long)pvVar6;
    __dest = operator_new(0x100);
    if (0 < (long)sVar8) {
      memcpy(__dest,pvVar6,sVar8);
    }
    *(void **)((long)param_1 + 0x200) = __dest;
    *(size_t *)((long)param_1 + 0x208) = (long)__dest + sVar8;
    *(long *)((long)param_1 + 0x210) = (long)__dest + 0x100;
    if (pvVar6 != (void *)0x0) {
      operator_delete(pvVar6);
    }
  }
  if (param_2 != 0) {
    movie::SetCoreMask(param_2);
  }
  plVar5 = *(long **)((long)param_1 + 0x2a8);
  lVar9 = *(long *)((long)param_1 + 0x238);
  sVar8 = lVar9 << 3;
  __s = (ulong *)(**(code **)(*plVar5 + 0x10))(plVar5,sVar8,8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar5;
  lVar4 = *(long *)(lVar3 + 0x80);
  *(long *)(lVar3 + 0x80) = lVar4 + 1;
  if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
    memset(__s,0,sVar8);
  }
  *(long *)(lVar3 + 0x80) = lVar4;
  lVar3 = *(long *)((long)param_1 + 0x240);
  *(ulong **)((long)param_1 + 0x240) = __s;
  if (lVar3 != 0) {
    (**(code **)(**(long **)((long)param_1 + 0x248) + 0x18))
              (*(long **)((long)param_1 + 0x248),lVar3,*(undefined8 *)((long)param_1 + 0x250),
               *(undefined8 *)((long)param_1 + 600));
    __s = *(ulong **)((long)param_1 + 0x240);
  }
  *(long **)((long)param_1 + 0x248) = plVar5;
  *(undefined8 *)((long)param_1 + 0x250) = 0;
  *(undefined8 *)((long)param_1 + 600) = 8;
  if (__s != (ulong *)0x0) {
    nn::os::InitializeMessageQueue
              ((MessageQueueType *)((long)param_1 + 0x260),__s,*(ulong *)((long)param_1 + 0x238));
    nn::os::InitializeMutex((MutexType *)((long)param_1 + 0x218),false,0);
    plVar5 = *(long **)((long)param_1 + 0x2a8);
    uVar7 = *(undefined8 *)((long)param_1 + 0x18);
    pvVar6 = (void *)(**(code **)(*plVar5 + 0x10))(plVar5,uVar7,0x1000);
    lVar3 = *(long *)((long)param_1 + 0x20);
    *(void **)((long)param_1 + 0x20) = pvVar6;
    if (lVar3 == 0) {
      *(long **)((long)param_1 + 0x28) = plVar5;
      *(undefined8 *)((long)param_1 + 0x30) = uVar7;
      *(undefined8 *)((long)param_1 + 0x38) = 0x1000;
    }
    else {
      (**(code **)(**(long **)((long)param_1 + 0x28) + 0x18))
                (*(long **)((long)param_1 + 0x28),lVar3,*(undefined8 *)((long)param_1 + 0x30),
                 *(undefined8 *)((long)param_1 + 0x38));
      pvVar6 = *(void **)((long)param_1 + 0x20);
      *(long **)((long)param_1 + 0x28) = plVar5;
      *(undefined8 *)((long)param_1 + 0x30) = uVar7;
      *(undefined8 *)((long)param_1 + 0x38) = 0x1000;
    }
    if (pvVar6 != (void *)0x0) {
      pTVar1 = (ThreadType *)((long)param_1 + 0x40);
      iVar2 = nn::os::CreateThread
                        (pTVar1,(_func_void_void_ptr *)PTR_LAB_02716070,param_1,pvVar6,
                         *(ulong *)((long)param_1 + 0x18),0x10,2);
      if (iVar2 == 0) {
        nn::os::SetThreadName(pTVar1,"MovieAudioInputReadThread");
        nn::os::StartThread(pTVar1);
        return 0;
      }
      return 0x100d;
    }
  }
  return 0x1002;
}


