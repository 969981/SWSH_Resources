/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01390840; name: FUN_01390840
 */


void FUN_01390840(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (*(long *)(param_1 + 0x400) == 0) {
    uVar1 = 0;
    lVar3 = *(long *)(param_1 + 0x408);
  }
  else {
    FUN_0137a220(*(long *)(param_1 + 0x400),auStack_28);
    uVar1 = FUN_012dc470();
    lVar3 = *(long *)(param_1 + 0x408);
  }
  if (lVar3 != 0) {
    FUN_0137a220(lVar3,auStack_28);
    uVar2 = FUN_012dc470();
    uVar1 = uVar1 | uVar2;
  }
  if (*(long *)(param_1 + 0x410) != 0) {
    FUN_0137a220(*(long *)(param_1 + 0x410),auStack_28);
    uVar2 = FUN_012dc470();
    uVar1 = uVar1 | uVar2;
  }
  if (*(long *)(param_1 + 0x418) != 0) {
    FUN_0137a220(*(long *)(param_1 + 0x418),auStack_28);
    uVar2 = FUN_012dc470();
    uVar1 = uVar1 | uVar2;
  }
  if (*(long *)(param_1 + 0x460) != 0) {
    uVar4 = FUN_01381490(*(long *)(param_1 + 0x460),auStack_30);
    FUN_012dc480(uVar4,uVar1 & 1);
    if (*(long *)(param_1 + 0x468) != 0) {
      uVar4 = FUN_01392ce0(*(long *)(param_1 + 0x468),auStack_38);
      FUN_012dc480(uVar4,uVar1 & 1);
    }
  }
  return;
}


