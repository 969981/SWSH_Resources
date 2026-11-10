/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00969620; name: FUN_00969620
 */


byte FUN_00969620(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                 undefined8 param_5)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined2 local_48;
  undefined1 local_46;
  char local_38 [8];
  
  uVar2 = FUN_008e2df0(param_3,7);
  if ((uVar2 & 1) == 0) {
    uVar3 = FUN_009423e0(param_1);
    uVar2 = FUN_0092d4d0(uVar3,param_2,param_3,param_4);
    if ((uVar2 & 1) == 0) {
      local_46 = 1;
      local_48 = 0x38;
      local_68 = param_4;
      local_60 = param_2;
      uStack_58 = param_3;
      local_50 = param_5;
      FUN_00942450(param_1);
      uVar3 = FUN_00925150();
      FUN_00969990(uVar3,local_38,&local_68);
      bVar1 = local_38[0] != '\0';
      goto LAB_009696fc;
    }
  }
  else {
    uVar2 = FUN_008e2df0(param_3,0x10);
    if (((uVar2 & 1) == 0) || (uVar2 = FUN_00880c60(*param_4), (uVar2 & 1) != 0)) {
      uVar3 = FUN_009423e0(param_1);
      bVar1 = FUN_0092d4d0(uVar3,param_2,param_3,param_4);
      bVar1 = bVar1 ^ 1;
      goto LAB_009696fc;
    }
  }
  bVar1 = 0;
LAB_009696fc:
  return bVar1 & 1;
}


