/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e8220; name: FUN_008e8220
 */


void FUN_008e8220(undefined4 *param_1,undefined8 param_2,char param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_a0 [128];
  
  uVar2 = 5;
  if (param_3 != '\x02') {
    uVar2 = 0;
  }
  uVar1 = 4;
  if (param_3 != '\x01') {
    uVar1 = uVar2;
  }
  FUN_008eb3e0(auStack_a0,uVar1,param_2);
  uVar2 = FUN_008eb540(auStack_a0);
  param_1[3] = uVar2;
  uVar2 = FUN_008eb540(auStack_a0);
  param_1[2] = uVar2;
  uVar2 = FUN_008eb540(auStack_a0);
  param_1[1] = uVar2;
  uVar2 = FUN_008eb540(auStack_a0);
  *param_1 = uVar2;
  return;
}


