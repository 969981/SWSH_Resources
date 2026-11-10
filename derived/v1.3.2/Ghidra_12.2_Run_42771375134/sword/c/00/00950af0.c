/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00950af0; name: FUN_00950af0
 */


void FUN_00950af0(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char local_58 [8];
  undefined8 local_50;
  undefined1 local_48;
  
  *param_2 = 0;
  uVar2 = FUN_009424e0(param_1,*param_3);
  uVar3 = FUN_00950c30(param_1,*param_3);
  if ((uVar3 & 1) != 0) {
    if (param_3[2] != '\0') {
      uVar4 = FUN_009423b0(param_1);
      FUN_00938920(uVar4,uVar2);
    }
    uVar4 = FUN_009423b0(param_1);
    FUN_00935bf0(uVar4,param_3 + 4);
    local_48 = param_3[1];
    local_50 = uVar2;
    FUN_00942450(param_1);
    uVar4 = FUN_009259d0();
    FUN_00951280(uVar4,local_58,&local_50);
    if (local_58[0] != '\0') {
      uVar4 = FUN_00942380(param_1);
      FUN_00942390(param_1);
      uVar5 = FUN_00931920();
      uVar1 = FUN_008f9470(uVar4,uVar5,*param_3);
      uVar4 = FUN_009423b0(param_1);
      FUN_00935bf0(uVar4,param_3 + 0x28);
      uVar4 = FUN_00942430(param_1);
      FUN_00950d90(uVar4,uVar1);
      FUN_009423f0(param_1);
      uVar4 = FUN_00942fe0();
      FUN_00943280(uVar4,1);
      *param_2 = 1;
    }
    if (param_3[2] != '\0') {
      uVar4 = FUN_009423b0(param_1);
      FUN_009389e0(uVar4,uVar2);
    }
  }
  return;
}


