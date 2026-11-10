/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0073d0f0; name: FUN_0073d0f0
 */


void FUN_0073d0f0(long param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  
  if ((ulong)*param_2 <
      (ulong)((*(long *)(param_1 + 0x790) - *(long *)(param_1 + 0x788) >> 3) * -0x5555555555555555))
  {
    lVar2 = *(long *)(param_1 + 0x788) + (ulong)*param_2 * 0x18;
    lVar1 = *(long *)(lVar2 + 8);
    *(undefined8 *)(lVar2 + 8) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    if ((ulong)*param_2 <
        (ulong)((*(long *)(param_1 + 0x790) - *(long *)(param_1 + 0x788) >> 3) * -0x5555555555555555
               )) {
      lVar2 = *(long *)(param_1 + 0x788) + (ulong)*param_2 * 0x18;
      lVar1 = *(long *)(lVar2 + 0x10);
      *(undefined8 *)(lVar2 + 0x10) = 0;
      if (lVar1 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0073d19c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}


