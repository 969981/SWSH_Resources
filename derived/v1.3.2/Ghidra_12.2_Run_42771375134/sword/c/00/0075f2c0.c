/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075f2c0; name: FUN_0075f2c0
 */


void FUN_0075f2c0(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = param_1 + 0x10;
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = uVar1 / param_2;
  }
  lVar3 = uVar1 - uVar2 * param_2;
  param_2 = param_2 - lVar3;
  if (lVar3 == 0 || param_2 == 0) {
    *(undefined1 *)(param_1 + 0xd) = 0;
    return;
  }
  *(char *)(uVar1 + (param_2 & 0xff) + -1) = (char)param_2;
  *(char *)(param_1 + 0xd) = (char)param_2;
  return;
}


