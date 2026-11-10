/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007db3b0; name: FUN_007db3b0
 */


uint FUN_007db3b0(long param_1)

{
  undefined1 uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  undefined1 *puVar7;
  
  lVar4 = *(long *)PTR_DAT_027104a0;
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else if (*(long *)(param_1 + 0xd8) == 0) {
    uVar5 = 1;
  }
  else {
    lVar6 = *(long *)(param_1 + 0xd8) << 4;
    puVar7 = (undefined1 *)(*(long *)(param_1 + 0xd0) + 8);
    uVar5 = 1;
    do {
      uVar1 = *puVar7;
      lVar3 = FUN_007a8490(lVar4,uVar1);
      if (lVar3 != 0) {
        uVar2 = FUN_007db9c0(param_1,lVar3,uVar1);
        uVar5 = uVar5 & uVar2;
      }
      lVar3 = FUN_007a84f0(lVar4,uVar1);
      if (lVar3 != 0) {
        uVar2 = FUN_007db9c0(param_1,lVar3,uVar1);
        uVar5 = uVar5 & uVar2;
      }
      lVar6 = lVar6 + -0x10;
      puVar7 = puVar7 + 0x10;
    } while (lVar6 != 0);
  }
  return uVar5;
}


