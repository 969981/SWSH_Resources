/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cf6a00; name: FUN_00cf6a00
 */


void FUN_00cf6a00(long param_1,uint param_2)

{
  long lVar1;
  undefined8 local_18;
  
  local_18 = 0xb27bc17d595bacbb;
  lVar1 = FUN_00ffdef0(param_1 + 0x100,&local_18);
  if (lVar1 != 0) {
    FUN_016b2da0(lVar1,param_2 & 1);
  }
  return;
}


