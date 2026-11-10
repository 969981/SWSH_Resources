/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00482c60; name: FUN_00482c60
 */


void FUN_00482c60(undefined4 param_1,long *param_2,undefined4 param_3,void *param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  undefined4 local_90 [2];
  undefined1 auStack_88 [48];
  undefined1 local_58;
  undefined8 local_50;
  undefined4 local_48;
  
  uVar1 = (**(code **)(*param_2 + 0x1f0))();
  if ((uVar1 & 1) != 0) {
    local_58 = 0;
    local_90[0] = param_3;
    memcpy(auStack_88,param_4,0x30);
    local_50 = param_5;
    local_48 = param_1;
    (**(code **)(*param_2 + 0xb8))(param_2,local_90);
  }
  return;
}


