/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00963bb0; name: FUN_00963bb0
 */


undefined1
FUN_00963bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
            undefined4 param_5)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined1 local_a0 [4];
  undefined4 local_9c;
  undefined1 local_98 [8];
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined1 local_80;
  undefined8 local_7e;
  undefined8 local_70;
  byte local_68;
  undefined8 local_60;
  undefined1 local_58;
  
  bVar1 = FUN_00965540(param_2);
  uVar2 = FUN_00942540(param_1,param_3);
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_7e = 0;
  local_58 = 2;
  FUN_009655e0(param_2);
  local_98[0] = FUN_008e0a00();
  local_80 = 7;
  local_90 = param_3;
  local_88 = param_4;
  uStack_84 = param_5;
  puVar3 = (undefined4 *)FUN_009655d0(param_2);
  local_68 = ~bVar1 & 1;
  local_58 = 2;
  if ((bVar1 & 1) == 0) {
    local_58 = 0;
  }
  local_7e = CONCAT26(0x100,CONCAT42(*puVar3,(undefined2)local_7e));
  FUN_00942450(param_1);
  uVar4 = FUN_00925ae0();
  FUN_0094f630(uVar4,local_a0,local_98);
  FUN_009657c0(param_2,uVar2,local_9c);
  return local_a0[0];
}


