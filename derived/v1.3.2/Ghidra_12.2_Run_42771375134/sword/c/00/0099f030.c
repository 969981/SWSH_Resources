/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0099f030; name: FUN_0099f030
 */


void FUN_0099f030(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  
  iVar3 = FUN_0093b420(param_3);
  if (iVar3 != 0) {
    uVar4 = FUN_0093b2c0(param_3,0);
    cVar1 = FUN_008e0a00();
    uVar5 = FUN_00942380(param_1);
    uVar6 = FUN_00942390(param_1);
    FUN_00943860(auStack_68,uVar5,uVar6);
    while (uVar7 = FUN_00943ae0(auStack_68,&local_48), (uVar7 & 1) != 0) {
      cVar2 = FUN_008e0a00(local_48);
      if (cVar2 != cVar1) {
        uVar5 = FUN_009423e0(param_1);
        uVar7 = FUN_0092ef90(uVar5,param_2,uVar4,local_48);
        if ((uVar7 & 1) != 0) {
          FUN_0093b0b0(param_3,local_48);
        }
      }
    }
  }
  return;
}


