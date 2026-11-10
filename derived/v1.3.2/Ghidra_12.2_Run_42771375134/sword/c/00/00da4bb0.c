/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00da4bb0; name: FUN_00da4bb0
 */


undefined8 FUN_00da4bb0(long param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0xa0 + (long)param_2 * 0x4fb0;
  if (1 < param_2) {
    lVar1 = param_1 + 0xa0;
  }
  uVar2 = FUN_00da5cd0(lVar1);
  if (((((uVar2 & 1) == 0) || (uVar2 = FUN_00da5cd0(lVar1 + 0xff0), (uVar2 & 1) == 0)) ||
      (uVar2 = FUN_00da5cd0(lVar1 + 0x1fe0), (uVar2 & 1) == 0)) ||
     (uVar2 = FUN_00da5cd0(lVar1 + 0x2fd0), (uVar2 & 1) == 0)) {
    return 0;
  }
  uVar3 = FUN_00da5cd0(lVar1 + 0x3fc0);
  return uVar3;
}


