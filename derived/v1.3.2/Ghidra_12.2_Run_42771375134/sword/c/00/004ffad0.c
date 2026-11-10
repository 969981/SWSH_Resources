/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ffad0; name: FUN_004ffad0
 */


undefined4 FUN_004ffad0(void *param_1,int *param_2)

{
  ThreadType *pTVar1;
  void *pvVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 uVar5;
  
  *(undefined8 *)((long)param_1 + 0x208) = 0;
  *(undefined4 *)((long)param_1 + 0x214) = 0;
  *(undefined8 *)((long)param_1 + 600) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)((long)param_1 + 0x250) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)((long)param_1 + 0x248) = *(undefined8 *)(param_2 + 2);
  uVar3 = *(undefined8 *)param_2;
  *(undefined1 *)((long)param_1 + 0x260) = 1;
  *(undefined8 *)((long)param_1 + 0x240) = uVar3;
  pvVar2 = (void *)FUN_007749e0(*(undefined8 *)(param_2 + 2),0x1000);
  *(void **)((long)param_1 + 0x1d0) = pvVar2;
  uVar4 = *(ulong *)(param_2 + 2);
  *(int *)((long)param_1 + 0x1d8) = (int)uVar4;
  pTVar1 = (ThreadType *)((long)param_1 + 0x10);
  nn::os::CreateThread
            (pTVar1,(_func_void_void_ptr *)PTR_LAB_02713828,param_1,pvVar2,uVar4 & 0xffffffff,
             *param_2);
  nn::os::SetThreadName(pTVar1,"AK::IOThread");
  nn::os::SetThreadCoreMask(pTVar1,param_2[4],*(ulong *)(param_2 + 6));
  nn::os::StartThread(pTVar1);
  uVar5 = 1;
  if (*(char *)((long)param_1 + 0x50) == '\0') {
    uVar5 = 2;
  }
  return uVar5;
}


