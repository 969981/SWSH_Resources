/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00800790; name: FUN_00800790
 */


void FUN_00800790(undefined8 *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  char *pcVar2;
  ulong uVar3;
  
  uVar1 = 1L << ((param_3 & 0xffffffff) * 4 - 4 & 0x3f) | param_2;
  pcVar2 = (char *)(param_1 + 6);
  do {
    uVar3 = param_2 & 0xf;
    param_2 = param_2 >> 4;
    uVar1 = uVar1 >> 4;
    pcVar2 = pcVar2 + -1;
    *pcVar2 = "0123456789abcdef"[uVar3];
  } while (uVar1 != 0);
  *param_1 = pcVar2;
  param_1[1] = (long)(param_1 + 6) - (long)pcVar2;
  return;
}


