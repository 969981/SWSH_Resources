/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bd0080; name: FUN_00bd0080
 */


void FUN_00bd0080(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 local_a0;
  code *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_28 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_a0 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = (code *)0x0;
  local_90 = 0;
  FUN_0168c2c0(*(long *)(param_1 + 0x60) + 0x171d0,param_2,0,&local_a0);
  pcVar1 = local_98;
  if (local_98 != (code *)0x0) {
    local_90 = 0;
    local_88 = 0;
    local_a0 = 0;
    local_98 = (code *)0x0;
    (*pcVar1)(&uStack_80);
  }
  return;
}


