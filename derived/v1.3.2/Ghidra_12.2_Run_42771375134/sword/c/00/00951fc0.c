/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00951fc0; name: FUN_00951fc0
 */


void FUN_00951fc0(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [8];
  undefined1 local_38 [8];
  
  uVar3 = FUN_009423b0();
  FUN_0093aa80(uVar3,0);
  uVar3 = FUN_009423b0(param_1);
  FUN_0093aa30(uVar3,0,*param_3);
  uVar3 = FUN_009423b0(param_1);
  FUN_009393c0(uVar3,*param_3,param_3[1],param_3[2],param_3[3],param_3[4]);
  local_38[0] = *param_3;
  FUN_00942450(param_1);
  uVar3 = FUN_009250c0();
  FUN_00952160(uVar3,auStack_48,local_38);
  uVar1 = *param_3;
  uVar2 = param_3[3];
  uVar3 = FUN_00942380(param_1);
  uVar4 = FUN_00942390(param_1);
  uVar5 = FUN_009423b0(param_1);
  FUN_0092f930(uVar3,uVar4,uVar5,0xb,uVar2,0,uVar1);
  return;
}


