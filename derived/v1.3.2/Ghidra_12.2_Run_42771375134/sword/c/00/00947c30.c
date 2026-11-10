/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00947c30; name: FUN_00947c30
 */


bool FUN_00947c30(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auStack_50 [32];
  undefined8 local_28;
  
  uVar2 = FUN_00942380();
  uVar3 = FUN_00942390(param_1);
  FUN_00943860(auStack_50,uVar2,uVar3);
  uVar4 = FUN_00943ae0(auStack_50,&local_28);
  while ((uVar4 & 1) != 0) {
    iVar1 = FUN_008e12a0(local_28,0x12);
    uVar4 = FUN_008dd580();
    if ((((uVar4 & 1) == 0) && (uVar4 = FUN_008e1810(local_28,0x10), iVar1 != 0x100)) &&
       ((uVar4 & 1) == 0)) {
      FUN_0093b0b0(param_2,local_28);
    }
    uVar4 = FUN_00943ae0(auStack_50,&local_28);
  }
  iVar1 = FUN_0093b420(param_2);
  return iVar1 != 0;
}


