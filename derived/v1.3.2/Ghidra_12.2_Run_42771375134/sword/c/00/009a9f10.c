/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a9f10; name: FUN_009a9f10
 */


void FUN_009a9f10(undefined8 param_1,undefined1 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  byte local_28 [8];
  
  *param_2 = 0;
  FUN_009423b0();
  uVar1 = FUN_00939470();
  if ((uVar1 & 0xff) == 0) {
    FUN_009aa040(param_1);
    FUN_00942450(param_1);
    uVar2 = FUN_00925120();
    FUN_009a93c0(uVar2,local_30,local_28);
    *param_2 = local_30[0];
    return;
  }
  uVar2 = FUN_009423b0();
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
    FUN_00951e70(uVar2,local_30,local_28);
  }
  return;
}


