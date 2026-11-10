/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009cfa90; name: FUN_009cfa90
 */


undefined8 FUN_009cfa90(long *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  lVar1 = param_1[1];
  uVar2 = FUN_007d4da0(lVar4 + 0xd0);
  if (((uVar2 & 1) == 0) || (lVar4 = *(long *)(lVar4 + 0x1c0), lVar4 == 0)) {
    return 0;
  }
  uVar3 = FUN_007d33b0(lVar4,(short)lVar1);
  return uVar3;
}


