/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00963f90; name: FUN_00963f90
 */


uint FUN_00963f90(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  
  uVar2 = FUN_009655e0(param_2);
  uVar3 = FUN_00942380(param_1);
  uVar4 = FUN_00942390(param_1);
  FUN_00943860(auStack_68,uVar3,uVar4);
  uVar6 = 0;
  while (uVar5 = FUN_00943ae0(auStack_68,&local_48), (uVar5 & 1) != 0) {
    uVar5 = FUN_00942690(param_1,uVar2,local_48);
    if ((uVar5 & 1) == 0) {
      uVar1 = FUN_00963db0(param_1,param_2,local_48,param_3,param_4,0);
      uVar6 = uVar6 | uVar1;
    }
  }
  return uVar6 & 1;
}


