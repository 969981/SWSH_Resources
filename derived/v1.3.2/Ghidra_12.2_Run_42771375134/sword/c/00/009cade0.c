/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009cade0; name: FUN_009cade0
 */


long FUN_009cade0(long param_1,uint param_2,undefined4 *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + (ulong)param_2 * 0x410 + 0x4b0;
  lVar2 = FUN_009ceb70(*(undefined8 *)(param_1 + 0x80),param_2,lVar1,0x400);
  if (lVar2 == 0) {
    return 0;
  }
  *param_3 = (int)lVar2;
  return lVar1;
}


