/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00966c40; name: FUN_00966c40
 */


void FUN_00966c40(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_44;
  undefined1 auStack_38 [8];
  
  uVar2 = FUN_008e1600(param_3[3]);
  if ((uVar2 & 1) == 0) {
    uVar4 = param_3[1];
    uVar1 = param_3[2];
    uVar5 = param_3[3];
    uVar3 = FUN_009423e0(param_1);
    uVar2 = FUN_0092c270(uVar3,uVar4,uVar1,uVar5);
    if ((uVar2 & 1) != 0) {
      local_60 = param_3[1];
      uStack_58 = param_3[2];
      local_50 = param_3[3];
      local_48 = *(undefined4 *)*param_3;
      local_44 = 0;
      FUN_00942450(param_1);
      uVar4 = FUN_00925e40();
      FUN_00966da0(uVar4,auStack_38,&local_60);
    }
  }
  return;
}


