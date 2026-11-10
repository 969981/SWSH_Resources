/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a37390; name: FUN_00a37390
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a37390(long param_1)

{
  *(undefined4 *)(param_1 + 0x628) = 0;
  *(undefined1 *)(param_1 + 0x67c) = 0;
  *(undefined1 *)(param_1 + 0x61d) = 0;
  FUN_00a37980(param_1,0,0);
  FUN_00a37a70(param_1,*(undefined1 *)(param_1 + 0x61d));
  *(undefined8 *)(param_1 + 0x660) = _DAT_02a522b0;
  return;
}


