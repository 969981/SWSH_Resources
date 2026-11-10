/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ea0830; name: FUN_00ea0830
 */


bool FUN_00ea0830(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  undefined1 auStack_18 [8];
  
  lVar2 = FUN_00ea4350(param_1,auStack_18);
  bVar1 = false;
  if (lVar2 != 0) {
    lVar2 = FUN_00cc4b60();
    lVar2 = *(long *)(lVar2 + 0x58);
    plVar3 = (long *)FUN_00cbd3c0();
    bVar1 = lVar2 != *plVar3;
  }
  return bVar1;
}


