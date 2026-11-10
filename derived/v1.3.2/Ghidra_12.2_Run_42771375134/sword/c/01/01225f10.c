/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01225f10; name: FUN_01225f10
 */


undefined8 FUN_01225f10(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR_DAT_02710878;
  if (lVar2 == 0) {
    return 0;
  }
  uVar1 = FUN_0121b000(param_1 + 0x208);
  uVar1 = FUN_01025c80(lVar2,uVar1);
  return uVar1;
}


