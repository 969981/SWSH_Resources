/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0099fd40; name: FUN_0099fd40
 */


void FUN_0099fd40(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
                 undefined4 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_e0 [80];
  undefined1 auStack_90 [36];
  uint local_6c;
  undefined1 auStack_68 [8];
  undefined8 local_60;
  undefined1 *puStack_58;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 *local_48;
  
  uVar1 = FUN_009424e0();
  uVar2 = FUN_009424e0(param_1,param_3);
  uVar3 = FUN_008e18d0(uVar1);
  if ((uVar3 & 1) != 0) {
    uVar4 = FUN_009423e0(param_1);
    FUN_00929e60(uVar4,uVar1,uVar2,param_5);
    FUN_0093b070(auStack_e0);
    uVar2 = FUN_009423e0(param_1);
    FUN_00926280(uVar2,param_5,param_5,param_5,0,uVar1,auStack_90);
    local_4f = 0x1f;
    local_6c = local_6c | 1;
    local_60 = uVar1;
    puStack_58 = auStack_90;
    local_50 = param_4;
    local_48 = auStack_e0;
    FUN_00942450(param_1);
    uVar2 = FUN_00925b60();
    FUN_0099ed70(uVar2,auStack_68,&local_60);
    FUN_0099fe40(param_1,uVar1,auStack_90,auStack_e0);
  }
  return;
}


