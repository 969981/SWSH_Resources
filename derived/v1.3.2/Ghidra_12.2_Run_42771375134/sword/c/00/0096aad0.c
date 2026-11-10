/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0096aad0; name: FUN_0096aad0
 */


bool FUN_0096aad0(undefined8 param_1,undefined1 param_2,int param_3,undefined4 param_4,
                 undefined1 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  byte bVar1;
  undefined8 uVar2;
  byte local_78 [8];
  undefined1 local_70;
  undefined1 local_6f;
  int local_6c;
  undefined4 uStack_68;
  undefined1 local_64;
  undefined8 local_62;
  undefined8 local_58;
  
  local_70 = param_2;
  uStack_68 = param_4;
  if (param_3 == 10) {
    local_62 = 0;
    local_6f = FUN_008e0a00(param_8);
    local_6c = 1;
    local_64 = 0;
    local_62._0_6_ = CONCAT42(param_7,(undefined2)local_62);
    local_62 = CONCAT17(param_5,(undefined7)local_62) & 0x1ffffffffffffff;
    local_58 = param_9;
    FUN_00942450(param_1);
    uVar2 = FUN_00925af0();
    FUN_0094f8a0(uVar2,local_78,&local_70);
    bVar1 = local_78[0];
    local_62 = 0;
    local_70 = param_2;
    local_6f = FUN_008e0a00(param_8);
    local_6c = 2;
    local_64 = 0;
    local_62._0_6_ = CONCAT42(param_7,(undefined2)local_62);
    local_62 = CONCAT17(param_5,(undefined7)local_62) & 0x1ffffffffffffff;
    local_58 = param_9;
    uStack_68 = param_4;
    FUN_00942450(param_1);
    uVar2 = FUN_00925af0();
    FUN_0094f8a0(uVar2,local_78,&local_70);
    local_62 = 0;
    bVar1 = bVar1 | local_78[0];
    local_70 = param_2;
    local_6f = FUN_008e0a00(param_8);
    local_6c = 3;
    local_64 = 0;
    local_62._0_6_ = CONCAT42(param_7,(undefined2)local_62);
    local_62 = CONCAT17(param_5,(undefined7)local_62) & 0x1ffffffffffffff;
    local_58 = param_9;
    uStack_68 = param_4;
    FUN_00942450(param_1);
    uVar2 = FUN_00925af0();
    FUN_0094f8a0(uVar2,local_78,&local_70);
    local_62 = 0;
    bVar1 = bVar1 | local_78[0];
    local_70 = param_2;
    local_6f = FUN_008e0a00(param_8);
    local_6c = 4;
    local_64 = 0;
    local_62._0_6_ = CONCAT42(param_7,(undefined2)local_62);
    local_62 = CONCAT17(param_5,(undefined7)local_62) & 0x1ffffffffffffff;
    local_58 = param_9;
    uStack_68 = param_4;
    FUN_00942450(param_1);
    uVar2 = FUN_00925af0();
    FUN_0094f8a0(uVar2,local_78,&local_70);
    local_62 = 0;
    bVar1 = bVar1 | local_78[0];
    local_70 = param_2;
    local_6f = FUN_008e0a00(param_8);
    local_6c = 5;
    local_64 = 0;
    local_62._0_6_ = CONCAT42(param_7,(undefined2)local_62);
    local_62 = CONCAT17(param_5,(undefined7)local_62) & 0x1ffffffffffffff;
    local_58 = param_9;
    uStack_68 = param_4;
    FUN_00942450(param_1);
    uVar2 = FUN_00925af0();
    FUN_0094f8a0(uVar2,local_78,&local_70);
    local_78[0] = bVar1 | local_78[0];
  }
  else {
    local_62 = 0;
    local_6f = FUN_008e0a00(param_8);
    local_64 = 0;
    local_62._0_6_ = CONCAT42(param_7,(undefined2)local_62);
    local_62 = CONCAT17(param_5,(undefined7)local_62) & 0x1ffffffffffffff;
    local_58 = param_9;
    local_6c = param_3;
    FUN_00942450(param_1);
    uVar2 = FUN_00925af0();
    FUN_0094f8a0(uVar2,local_78,&local_70);
  }
  return local_78[0] != 0;
}


