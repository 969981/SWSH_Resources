/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00951a80; name: FUN_00951a80
 */


void FUN_00951a80(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 local_38 [8];
  undefined1 auStack_30 [8];
  byte local_28 [8];
  
  FUN_00942390();
  FUN_00931930();
  uVar1 = FUN_00932760();
  uVar2 = FUN_009423b0(param_1);
  FUN_00939460(uVar2,uVar1);
  FUN_009423b0(param_1);
  FUN_00939430();
  uVar2 = FUN_009423b0(param_1);
  FUN_0093aa80(uVar2,0);
  local_38[0] = 0;
  FUN_00942450(param_1);
  uVar2 = FUN_009250c0();
  FUN_00952160(uVar2,auStack_40,local_38);
  FUN_00942380(param_1);
  local_28[0] = FUN_008f8f70();
  if (local_28[0] != 0) {
    local_28[1] = 0xff;
    local_28[2] = 0;
    local_28[3] = 0x1f;
    local_28[4] = 0;
    FUN_00942450(param_1);
    uVar2 = FUN_009250b0();
    FUN_00951e70(uVar2,auStack_30,local_28);
  }
  return;
}


