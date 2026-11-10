/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00682ee0; name: FUN_00682ee0
 */


undefined8 FUN_00682ee0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_430 [1024];
  
  FUN_0067d060();
  lVar1 = FUN_0067d8f0();
  if (lVar1 != 0) {
    FUN_0067d060();
    uVar2 = FUN_0067d8f0();
    uVar3 = FUN_005c4db0(param_1,auStack_430,0x400);
    lVar1 = FUN_00683c90(uVar2,uVar3);
    if (lVar1 != 0) {
      return 1;
    }
  }
  FUN_005cbc60(auStack_430,param_1,0x400);
  return 1;
}


