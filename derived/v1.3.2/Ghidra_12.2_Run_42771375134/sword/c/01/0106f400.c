/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0106f400; name: FUN_0106f400
 */


bool FUN_0106f400(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = FUN_0106f630(param_2);
  if (iVar1 != iVar2) {
    return false;
  }
  if (7 < (param_2 & 0xff)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return (*(ulong *)(param_1 + 2) & 1L << ((ulong)(param_2 & 0xff) & 0x3f)) != 0;
}


