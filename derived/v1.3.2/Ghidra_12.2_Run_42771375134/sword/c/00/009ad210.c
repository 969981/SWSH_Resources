/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ad210; name: FUN_009ad210
 */


void FUN_009ad210(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_80 [8];
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined8 local_5e;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined1 local_38;
  
  uVar1 = FUN_009424b0(param_1,4);
  local_50 = 0;
  local_40 = 0;
  local_5e = 0;
  local_78[0] = FUN_008e0a00();
  local_60 = 5;
  uStack_68 = 0x100000001;
  local_38 = 0;
  local_48 = 1;
  local_70 = uVar1;
  FUN_00942450(param_1);
  uVar1 = FUN_00925ae0();
  FUN_0094f630(uVar1,auStack_80,local_78);
  uVar1 = FUN_009424b0(param_1,4);
  local_50 = 0;
  local_40 = 0;
  local_5e = 0;
  local_78[0] = FUN_008e0a00();
  uStack_68 = 0x100000003;
  local_60 = 5;
  local_38 = 0;
  local_48 = 1;
  local_70 = uVar1;
  FUN_00942450(param_1);
  uVar1 = FUN_00925ae0();
  FUN_0094f630(uVar1,auStack_80,local_78);
  return;
}


