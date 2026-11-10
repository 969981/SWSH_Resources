/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d0560; name: FUN_006d0560
 */


void FUN_006d0560(void *param_1,char *param_2,uint param_3,int param_4)

{
  ThreadType *pTVar1;
  
  *(undefined1 *)((long)param_1 + 0x2f8) = 0;
  *(undefined1 *)((long)param_1 + 0x2f9) = 0;
  pTVar1 = (ThreadType *)((long)param_1 + 0xf8);
  *(undefined1 *)((long)param_1 + 0x2fa) = 0;
  if ((int)param_3 < 0) {
    nn::os::CreateThread
              (pTVar1,(_func_void_void_ptr *)PTR_LAB_02715310,param_1,
               *(void **)((long)param_1 + 0x2b8),*(ulong *)((long)param_1 + 0x2f0),param_4);
  }
  else {
    nn::os::CreateThread
              (pTVar1,(_func_void_void_ptr *)PTR_LAB_02715310,param_1,
               *(void **)((long)param_1 + 0x2b8),*(ulong *)((long)param_1 + 0x2f0),param_4,param_3);
    nn::os::SetThreadCoreMask(pTVar1,param_3,1L << ((ulong)param_3 & 0x3f));
  }
  nn::os::SetThreadName(pTVar1,param_2);
  nn::os::StartThread(pTVar1);
  return;
}


