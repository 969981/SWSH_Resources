/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0076ace0; name: FUN_0076ace0
 */


undefined8 FUN_0076ace0(MultiWaitType *param_1,ulong param_2)

{
  EventType *pEVar1;
  MultiWaitHolderType *pMVar2;
  int iVar3;
  void *pvVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  
  param_1[0x4dc] = (MultiWaitType)0x1;
  if (param_2 != 0) {
    movie::SetCoreMask(param_2);
  }
  nn::os::InitializeMultiWait(param_1);
  pEVar1 = (EventType *)(param_1 + 0x248);
  nn::os::InitializeEvent(pEVar1,0,0);
  nn::os::InitializeEvent(param_1 + 0x4b0,0,0);
  pMVar2 = (MultiWaitHolderType *)(param_1 + 0x270);
  *(EventType **)(param_1 + 0x570) = pEVar1;
  *(undefined4 *)(param_1 + 0x578) = 9;
  nn::os::InitializeMultiWaitHolder(pMVar2,pEVar1);
  nn::os::SetMultiWaitHolderUserData(pMVar2,(ulong)(param_1 + 0x570));
  nn::os::LinkMultiWaitHolder(param_1,pMVar2);
  plVar6 = *(long **)(param_1 + 0x580);
  uVar7 = *(undefined8 *)(param_1 + 0x60);
  pvVar4 = (void *)(**(code **)(*plVar6 + 0x10))(plVar6,uVar7,0x1000);
  lVar5 = *(long *)(param_1 + 0x68);
  *(void **)(param_1 + 0x68) = pvVar4;
  if (lVar5 == 0) {
    *(long **)(param_1 + 0x70) = plVar6;
    *(undefined8 *)(param_1 + 0x78) = uVar7;
    *(undefined8 *)(param_1 + 0x80) = 0x1000;
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x70) + 0x18))
              (*(long **)(param_1 + 0x70),lVar5,*(undefined8 *)(param_1 + 0x78),
               *(undefined8 *)(param_1 + 0x80));
    pvVar4 = *(void **)(param_1 + 0x68);
    *(long **)(param_1 + 0x70) = plVar6;
    *(undefined8 *)(param_1 + 0x78) = uVar7;
    *(undefined8 *)(param_1 + 0x80) = 0x1000;
  }
  if (pvVar4 == (void *)0x0) {
    return 0x1002;
  }
  iVar3 = nn::os::CreateThread
                    ((ThreadType *)(param_1 + 0x88),(_func_void_void_ptr *)PTR_LAB_027160a8,param_1,
                     pvVar4,*(ulong *)(param_1 + 0x60),0x10,2);
  if (iVar3 == 0) {
    nn::os::SetThreadName((ThreadType *)(param_1 + 0x88),"MovieDecoderEventHandler");
    return 0;
  }
  return 0x100d;
}


