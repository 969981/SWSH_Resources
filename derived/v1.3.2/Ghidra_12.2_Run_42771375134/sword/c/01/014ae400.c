/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014ae400; name: FUN_014ae400
 */


undefined2 FUN_014ae400(int param_1,uint param_2)

{
  ulong uVar1;
  
  if (0x382 < param_2) {
    return 0;
  }
  uVar1 = (ulong)param_2;
  if (param_1 == 2) {
    return (&DAT_0216fa90)[uVar1 * 4];
  }
  if (param_1 == 1) {
    return (&DAT_0216fa8e)[uVar1 * 4];
  }
  if (param_1 == 0) {
    return *(undefined2 *)(&DAT_0216fa8c + uVar1 * 8);
  }
  return 0;
}


