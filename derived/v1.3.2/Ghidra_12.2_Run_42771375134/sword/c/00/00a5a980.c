/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a5a980; name: FUN_00a5a980
 */


void FUN_00a5a980(long param_1,long *param_2)

{
  if ((*param_2 == 0) || (param_2[1] == 0)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  FUN_00ffa290(param_1,1,1);
  FUN_016b2d70(*(undefined8 *)(param_1 + 0x658),1);
  FUN_01038b80(*(undefined8 *)(param_1 + 0x660),param_2);
  *(undefined1 *)(param_1 + 0x688) = 0;
  FUN_00ffa160(param_1,1,1);
  return;
}


