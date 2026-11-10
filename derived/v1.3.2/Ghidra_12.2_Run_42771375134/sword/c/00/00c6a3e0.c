/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c6a3e0; name: FUN_00c6a3e0
 */


undefined8 FUN_00c6a3e0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x90);
  if (lVar3 == 0) {
    return 0;
  }
  uVar1 = FUN_00c6b140(lVar3 + 0x50);
  if ((uVar1 & 1) == 0) {
    lVar3 = 0;
  }
  uVar2 = FUN_00c70960(lVar3,1);
  return uVar2;
}


