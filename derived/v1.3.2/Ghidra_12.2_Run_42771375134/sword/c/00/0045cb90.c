/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0045cb90; name: FUN_0045cb90
 */


undefined8
FUN_0045cb90(long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
            undefined4 param_5)

{
  long *plVar1;
  undefined1 auStack_158 [96];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined1 local_58;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    plVar1 = (long *)FUN_00435260(*(undefined8 *)PTR_DAT_02712ae8,param_2,0);
    if (plVar1 == (long *)0x0) {
      return 0xf;
    }
    local_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_78 = 0;
    local_88 = 0;
    local_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_60 = param_4;
    uStack_5c = param_5;
    local_80 = FUN_0045b630();
    if (local_80 != 0) {
      local_d0 = 0;
      uStack_c8 = 0;
      local_d8 = 0;
      local_c0 = 0;
      local_b8 = 0;
      local_b0 = 0;
      local_a8 = 0;
      local_a4 = 0;
      local_f8 = 0;
      local_f0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
                    /* WARNING: Subroutine does not return */
      memset(auStack_158,0,0x5e);
    }
    (**(code **)(*plVar1 + 0x18))(plVar1);
    FUN_00479190(&local_70);
    if (local_80 != 0) {
      FUN_0045b680();
    }
  }
  return 2;
}


