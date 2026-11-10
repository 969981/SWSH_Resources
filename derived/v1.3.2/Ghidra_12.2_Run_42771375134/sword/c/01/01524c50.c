/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01524c50; name: FUN_01524c50
 */


uint FUN_01524c50(long param_1,undefined8 param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_4c [28];
  
  uVar3 = FUN_0087f070(param_2);
  iVar1 = *(int *)(param_1 + 0x100);
  iVar4 = FUN_0087da50(param_2);
  if ((iVar1 == iVar4) &&
     (bVar2 = *(byte *)(param_1 + 0x105), uVar5 = FUN_0087d390(param_2), uVar5 == bVar2)) {
    FUN_0087d340(param_2,auStack_4c,0xd);
    uVar5 = FUN_0077d930(auStack_4c,param_1 + 0x110);
  }
  else {
    uVar5 = 0;
  }
  FUN_0087f0c0(param_2,uVar3 & 1);
  return uVar5 & 1;
}


