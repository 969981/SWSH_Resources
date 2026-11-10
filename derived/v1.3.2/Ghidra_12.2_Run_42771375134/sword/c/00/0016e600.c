/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0016e600; name: FUN_0016e600
 */


void FUN_0016e600(long param_1,uint param_2)

{
  ulong uVar1;
  
  if (param_2 != 0) {
    uVar1 = (ulong)param_2;
    do {
      FUN_0016e210(param_1);
      param_1 = param_1 + 0x30;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}


