/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007ab1d0; name: FUN_007ab1d0
 */


undefined8 FUN_007ab1d0(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined4 local_28 [2];
  
  if (*(long *)(param_1 + 0xca0) != 0) {
    iVar1 = nn::account::AsyncContext::GetResult();
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      memset((void *)(param_1 + 0x98),0,0xc08);
    }
    plVar2 = *(long **)(param_1 + 0x90);
    if (plVar2 != (long *)0x0) {
      local_28[0] = nn::account::AsyncContext::GetResult();
      (**(code **)(*plVar2 + 0x58))(plVar2,local_28);
    }
  }
  return 0;
}


