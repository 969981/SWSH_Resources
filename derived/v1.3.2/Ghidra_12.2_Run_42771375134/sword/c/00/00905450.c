/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00905450; name: FUN_00905450
 */


undefined8 FUN_00905450(long param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  FUN_008ed700(auStack_38,2,param_2);
  uVar2 = FUN_008f8110(*(undefined8 *)(param_1 + 0x58));
  uVar3 = FUN_008f87e0(*(undefined8 *)(param_1 + 0x58));
  uVar4 = FUN_00931920(*(undefined8 *)(param_1 + 0x70));
  cVar1 = FUN_008ee2f0(auStack_38,uVar2,uVar3,uVar4,auStack_40);
  if (cVar1 == '\0') {
    uVar4 = 0;
  }
  else {
    lVar5 = FUN_008ed5b0(param_1 + 0x128,cVar1);
    uVar4 = FUN_00931920(*(undefined8 *)(param_1 + 0x70));
    uVar4 = FUN_008deea0(uVar4,auStack_40[lVar5]);
  }
  return uVar4;
}


