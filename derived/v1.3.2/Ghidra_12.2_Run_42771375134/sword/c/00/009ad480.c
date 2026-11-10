/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ad480; name: FUN_009ad480
 */


void FUN_009ad480(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_f0;
  undefined1 *puStack_e8;
  undefined4 *local_e0;
  undefined1 *puStack_d8;
  undefined1 auStack_d0 [4];
  uint local_cc;
  undefined1 auStack_c4 [36];
  undefined1 auStack_a0 [80];
  undefined1 auStack_48 [8];
  
  uVar4 = FUN_009424b0(param_1,4);
  uVar5 = FUN_009423b0(param_1);
  uVar1 = FUN_008e0a00(uVar4);
  uVar3 = *param_3;
  uVar2 = FUN_008e12a0(uVar4,0xc);
  FUN_0093a550(uVar5,uVar1,uVar3,uVar2);
  FUN_0093b070(auStack_a0);
  FUN_0093b0b0(auStack_a0,param_2);
  FUN_00943e60(auStack_c4);
  FUN_00946a20(auStack_d0);
  FUN_00942390(param_1);
  uVar5 = FUN_009319f0();
  FUN_00935790(uVar5,auStack_d0);
  local_cc = local_cc | 2;
  local_f0 = uVar4;
  puStack_e8 = auStack_d0;
  local_e0 = param_3;
  puStack_d8 = auStack_a0;
  FUN_00942450(param_1);
  uVar5 = FUN_00925d60();
  FUN_0099cc30(uVar5,auStack_48,&local_f0);
  uVar5 = FUN_009423b0(param_1);
  uVar3 = FUN_008e0a00(uVar4);
  FUN_0093a610(uVar5,uVar3,*param_3);
  return;
}


