/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01506d00; name: FUN_01506d00
 */


void FUN_01506d00(long param_1,uint param_2,uint param_3,uint param_4,uint param_5,long *param_6)

{
  void *__dest;
  void *__src;
  void *__src_00;
  
  if ((param_5 < 0x1e) && (param_3 < 0x1e)) {
    if ((param_4 | param_2) < 0x20) {
      __dest = (void *)(**(code **)(*param_6 + 0x10))(param_6,0x158,8);
      if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      __src_00 = (void *)(param_1 + 0x60 + (ulong)param_2 * 0x2850 + (ulong)param_3 * 0x158);
      __src = (void *)(param_1 + 0x60 + (ulong)param_4 * 0x2850 + (ulong)param_5 * 0x158);
      memcpy(__dest,__src_00,0x158);
      memcpy(__src_00,__src,0x158);
      memcpy(__src,__dest,0x158);
                    /* WARNING: Could not recover jumptable at 0x01506de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_6 + 0x18))(param_6,__dest,0x158,8);
      return;
    }
  }
  return;
}


