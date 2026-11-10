/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007218b0; name: FUN_007218b0
 */


void FUN_007218b0(long param_1,undefined8 param_2,undefined4 param_3,byte param_4)

{
  undefined4 uVar1;
  undefined1 auStack_2e0 [640];
  
  *(byte *)(param_1 + 0xa8) = param_4 & 1;
  uVar1 = param_3;
  if ((param_4 & 1) != 0) {
    uVar1 = 1;
  }
  *(undefined4 *)(param_1 + 0xa0) = param_3;
  *(undefined4 *)(param_1 + 0xa4) = uVar1;
                    /* WARNING: Subroutine does not return */
  memset(auStack_2e0,0,0x280);
}


