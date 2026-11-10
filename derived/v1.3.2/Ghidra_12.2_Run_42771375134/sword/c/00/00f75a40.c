/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f75a40; name: FUN_00f75a40
 */


void FUN_00f75a40(undefined8 *param_1)

{
  int iVar1;
  undefined1 auStack_200 [464];
  
  iVar1 = FUN_0175cfd0(*param_1,param_1[1]);
  if (iVar1 == 1) {
                    /* WARNING: Subroutine does not return */
    memset(auStack_200,0,0x1d0);
  }
  FUN_01761960(*param_1,0xfffffffe);
  return;
}


