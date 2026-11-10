/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001cf350; name: FUN_001cf350
 */


void FUN_001cf350(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  
  uVar2 = FUN_003ea080(param_2 + 0x10);
  plVar3 = (long *)FUN_003ea090(param_2 + 0x10);
  puVar1 = PTR_DAT_02711068;
  if (uVar2 != 0) {
    uVar4 = (ulong)uVar2;
    do {
      FUN_001e4740(param_1,*plVar3 - *(long *)(puVar1 + (ulong)*(byte *)(*plVar3 + 0xd) * 8));
      uVar4 = uVar4 - 1;
      plVar3 = plVar3 + 1;
    } while (uVar4 != 0);
  }
  return;
}


