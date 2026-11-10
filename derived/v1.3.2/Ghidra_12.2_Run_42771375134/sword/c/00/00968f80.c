/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00968f80; name: FUN_00968f80
 */


void FUN_00968f80(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_68;
  undefined1 local_64;
  undefined8 local_60;
  long lStack_58;
  undefined8 local_50;
  undefined1 local_48;
  
  FUN_009603f0(param_3[3]);
  FUN_0093b2e0(param_3[2]);
  lVar4 = FUN_0093b2f0(param_3[2]);
  if (lVar4 != 0) {
    do {
      local_50 = *param_3;
      local_60 = param_3[1];
      local_48 = 0;
      lStack_58 = lVar4;
      FUN_00942450(param_1);
      uVar5 = FUN_00925220();
      FUN_00969100(uVar5,&local_68,&local_60);
      uVar2 = local_64;
      uVar1 = local_68;
      uVar5 = param_3[3];
      uVar3 = FUN_008e0a00(lVar4);
      FUN_009604f0(uVar5,uVar3,uVar1,uVar2);
      lVar4 = FUN_0093b2f0(param_3[2]);
    } while (lVar4 != 0);
  }
  return;
}


