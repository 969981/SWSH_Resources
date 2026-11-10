/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0147bb30; name: FUN_0147bb30
 */


uint FUN_0147bb30(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 local_28;
  
  lVar6 = *(long *)(param_1 + 0xa0);
  uVar5 = FUN_016a7880(*(undefined8 *)(*(long *)(lVar6 + 0x6f8) + 0x140));
  if ((((uVar5 & 1) == 0) ||
      (uVar5 = FUN_016a7880(*(undefined8 *)(*(long *)(lVar6 + 0x700) + 0x140)), (uVar5 & 1) == 0))
     || (uVar5 = FUN_016a7880(*(undefined8 *)(*(long *)(lVar6 + 0x708) + 0x140)), (uVar5 & 1) == 0))
  {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_016a7880(*(undefined8 *)(*(long *)(lVar6 + 0x710) + 0x140));
  }
  uVar2 = FUN_010367c0(*(undefined8 *)(param_1 + 0xa0));
  local_28 = 0x31b5f77ad1a1d139;
  lVar6 = *(long *)(*(long *)(param_1 + 0xa0) + 0x2b0);
  if (lVar6 == 0) {
    uVar3 = 1;
  }
  else {
    uVar3 = FUN_0167bc20(lVar6,&local_28);
  }
  uVar4 = FUN_01037070(*(undefined8 *)(param_1 + 0xa8));
  return uVar1 & (uVar2 ^ 1) & uVar3 & uVar4 & 1;
}


