/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00125890; name: FUN_00125890
 */


void FUN_00125890(long param_1,undefined8 param_2,undefined4 param_3,long param_4,long param_5,
                 long param_6,long param_7,long param_8,long param_9)

{
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined8 local_48;
  
  if (*(long *)(param_1 + 0xa8) != 0) {
    local_98 = param_4 + *(long *)PTR_DAT_02710c08;
    lStack_90 = param_5 + *(long *)PTR_DAT_02710c08;
    local_a8 = *(long *)(PTR_DAT_02710c08 + 8);
    if (param_8 == 0) {
      local_a8 = *(long *)(PTR_DAT_02710c08 + 0x10);
    }
    local_a8 = param_6 + local_a8;
    lStack_a0 = *(long *)(PTR_DAT_02710c08 + 8);
    if (param_9 == 0) {
      lStack_a0 = *(long *)(PTR_DAT_02710c08 + 0x10);
    }
    lStack_a0 = param_7 + lStack_a0;
    FUN_001259b0(&local_c8,param_4,param_6,param_8 != 0);
    local_88 = local_c8;
    uStack_80 = local_c0;
    local_78 = local_b8;
    local_70 = local_b0;
    FUN_001259b0(&local_c8,param_5,param_7,param_9 != 0);
    local_6c = local_c8;
    local_64 = local_c0;
    local_5c = local_b8;
    local_54 = local_b0;
    uStack_50 = param_3;
    local_48 = param_2;
    (**(code **)**(undefined8 **)(param_1 + 0xa8))(*(undefined8 **)(param_1 + 0xa8),&local_a8,1);
  }
  return;
}


