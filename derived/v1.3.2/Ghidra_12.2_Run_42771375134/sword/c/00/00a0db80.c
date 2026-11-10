/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a0db80; name: FUN_00a0db80
 */


void FUN_00a0db80(long param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  
  if (param_2 - 1U < 2) {
    uVar1 = 1;
    if ((param_3 & 1) == 0) {
      uVar1 = 2;
    }
    *(undefined4 *)(*(long *)(param_1 + 0x600) + 0x1dc) = uVar1;
  }
  return;
}


