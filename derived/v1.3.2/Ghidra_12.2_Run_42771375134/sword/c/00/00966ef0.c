/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00966ef0; name: FUN_00966ef0
 */


bool FUN_00966ef0(undefined8 param_1,undefined1 param_2,int param_3,undefined4 param_4,
                 undefined1 param_5,undefined1 param_6,undefined4 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  byte bVar1;
  undefined8 uVar2;
  byte local_b0 [8];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  int local_98;
  undefined4 uStack_94;
  undefined1 local_90;
  long local_8e;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined1 local_68;
  
  local_a8[0] = param_2;
  local_a0 = param_8;
  uStack_94 = param_4;
  if (param_3 == 10) {
    local_98 = 1;
    local_90 = 0;
    local_8e = ((ulong)CONCAT15(param_5,CONCAT14(param_6,param_7)) & 0x101ffffffff) << 0x10;
    local_80 = param_9;
    local_78 = 1;
    local_70 = 0;
    local_68 = 0;
    FUN_00942450(param_1);
    uVar2 = FUN_00925ae0();
    FUN_0094f630(uVar2,local_b0,local_a8);
    bVar1 = local_b0[0];
    local_98 = 2;
    local_90 = 0;
    local_8e = ((ulong)CONCAT15(param_5,CONCAT14(param_6,param_7)) & 0x101ffffffff) << 0x10;
    local_80 = param_9;
    local_78 = 1;
    local_70 = 0;
    local_68 = 0;
    local_a8[0] = param_2;
    local_a0 = param_8;
    uStack_94 = param_4;
    FUN_00942450(param_1);
    uVar2 = FUN_00925ae0();
    FUN_0094f630(uVar2,local_b0,local_a8);
    local_98 = 3;
    bVar1 = bVar1 | local_b0[0];
    local_90 = 0;
    local_8e = ((ulong)CONCAT15(param_5,CONCAT14(param_6,param_7)) & 0x101ffffffff) << 0x10;
    local_80 = param_9;
    local_78 = 1;
    local_70 = 0;
    local_68 = 0;
    local_a8[0] = param_2;
    local_a0 = param_8;
    uStack_94 = param_4;
    FUN_00942450(param_1);
    uVar2 = FUN_00925ae0();
    FUN_0094f630(uVar2,local_b0,local_a8);
    local_98 = 4;
    bVar1 = bVar1 | local_b0[0];
    local_90 = 0;
    local_8e = ((ulong)CONCAT15(param_5,CONCAT14(param_6,param_7)) & 0x101ffffffff) << 0x10;
    local_80 = param_9;
    local_78 = 1;
    local_70 = 0;
    local_68 = 0;
    local_a8[0] = param_2;
    local_a0 = param_8;
    uStack_94 = param_4;
    FUN_00942450(param_1);
    uVar2 = FUN_00925ae0();
    FUN_0094f630(uVar2,local_b0,local_a8);
    local_98 = 5;
    bVar1 = bVar1 | local_b0[0];
    local_90 = 0;
    local_8e = ((ulong)CONCAT15(param_5,CONCAT14(param_6,param_7)) & 0x101ffffffff) << 0x10;
    local_80 = param_9;
    local_78 = 1;
    local_70 = 0;
    local_68 = 0;
    local_a8[0] = param_2;
    local_a0 = param_8;
    uStack_94 = param_4;
    FUN_00942450(param_1);
    uVar2 = FUN_00925ae0();
    FUN_0094f630(uVar2,local_b0,local_a8);
    local_b0[0] = bVar1 | local_b0[0];
  }
  else {
    local_90 = 0;
    local_8e = ((ulong)CONCAT15(param_5,CONCAT14(param_6,param_7)) & 0x101ffffffff) << 0x10;
    local_80 = param_9;
    local_78 = 1;
    local_70 = 0;
    local_68 = 0;
    local_98 = param_3;
    FUN_00942450(param_1);
    uVar2 = FUN_00925ae0();
    FUN_0094f630(uVar2,local_b0,local_a8);
  }
  return local_b0[0] != 0;
}


