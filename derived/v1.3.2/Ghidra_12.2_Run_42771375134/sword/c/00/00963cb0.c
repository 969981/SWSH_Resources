/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00963cb0; name: FUN_00963cb0
 */


uint FUN_00963cb0(undefined8 param_1,undefined8 param_2,long param_3,undefined1 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 local_78;
  undefined1 auStack_70 [32];
  undefined8 local_48;
  
  uVar4 = FUN_009655e0(param_2);
  uVar5 = FUN_00942380(param_1);
  uVar6 = FUN_00942390(param_1);
  FUN_00943860(auStack_70,uVar5,uVar6);
  uVar8 = 0;
  while (uVar7 = FUN_00943ae0(auStack_70,&local_48), (uVar7 & 1) != 0) {
    uVar7 = FUN_00942690(param_1,uVar4,local_48);
    if ((uVar7 & 1) == 0) {
      uVar2 = FUN_008ebfa0(param_4);
      uVar1 = *(undefined4 *)(param_3 + (ulong)(uVar2 & 0xff) * 4);
      uVar3 = FUN_008e0a00(uVar4);
      local_78 = FUN_008ec1d0(uVar1,uVar3);
      uVar2 = FUN_00963db0(param_1,param_2,local_48,uVar1,&local_78,0);
      uVar8 = uVar8 | uVar2;
    }
  }
  return uVar8 & 1;
}


