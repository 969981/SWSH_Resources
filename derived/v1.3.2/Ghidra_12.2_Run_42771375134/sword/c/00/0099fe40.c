/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0099fe40; name: FUN_0099fe40
 */


void FUN_0099fe40(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 local_a0;
  undefined1 *puStack_98;
  undefined4 *local_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [4];
  uint local_7c;
  undefined1 auStack_74 [36];
  undefined1 auStack_48 [8];
  
  uVar5 = FUN_009423d0();
  uVar1 = FUN_008e0a00(param_2);
  FUN_008dabf0(uVar5,uVar1,0);
  uVar5 = FUN_009423b0(param_1);
  uVar2 = FUN_008e0a00(param_2);
  uVar4 = *param_3;
  uVar3 = FUN_008e12a0(param_2,0xc);
  FUN_0093a550(uVar5,uVar2,uVar4,uVar3);
  FUN_00943e60(auStack_74);
  FUN_00946a20(auStack_80);
  FUN_00942390(param_1);
  uVar5 = FUN_009319f0();
  FUN_00935790(uVar5,auStack_80);
  local_7c = local_7c | 4;
  local_a0 = param_2;
  puStack_98 = auStack_80;
  local_90 = param_3;
  uStack_88 = param_4;
  FUN_00942450(param_1);
  uVar5 = FUN_00925d60();
  FUN_0099cc30(uVar5,auStack_48,&local_a0);
  uVar5 = FUN_009423b0(param_1);
  uVar4 = FUN_008e0a00(param_2);
  FUN_0093a610(uVar5,uVar4,*param_3);
  uVar5 = FUN_009423d0(param_1);
  uVar1 = FUN_008e0a00(param_2);
  FUN_008dac70(uVar5,uVar1,0);
  return;
}


