/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ebfc30; name: FUN_00ebfc30
 */


void FUN_00ebfc30(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,int param_6)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  long local_180 [33];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_60;
  undefined8 local_50;
  
  plVar1 = local_180;
  FUN_00dfb1f0(local_180,*(undefined8 *)(param_5 + 0xb0));
  if (local_180[0] != 0) {
    puVar4 = *(undefined8 **)(local_180[0] + 0x60);
    if (puVar4 != (undefined8 *)0x0) {
      plVar2 = (long *)(**(code **)*puVar4)(puVar4);
      lVar3 = FUN_00a89c30();
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)lVar3) {
          puVar4 = puVar4 + -10;
          goto joined_r0x00ebfd8c;
        }
      }
    }
    puVar4 = (undefined8 *)0x0;
joined_r0x00ebfd8c:
    if (local_180[0] != 0) {
      (**(code **)(*(long *)(local_180[0] + 0x48) + 0x18))();
      local_180[0] = 0;
    }
    if (puVar4 != (undefined8 *)0x0) {
      FUN_00ddba80(puVar4);
      local_180[0x20] = CONCAT44(extraout_var,extraout_s0);
      local_180[0x1e] = 0;
      local_180[0x1f] = 0;
      local_180[0x1c] = 0;
      local_180[0x1d] = 0;
      local_180[0x1a] = 0;
      local_180[0x1b] = 0;
      local_180[0x18] = 0;
      local_180[0x19] = 0;
      local_180[0x16] = 0;
      local_180[0x17] = 0;
      local_180[0x14] = 0;
      local_180[0x15] = 0;
      local_180[0x12] = 0;
      local_180[0x13] = 0;
      local_180[0x10] = 0;
      local_180[0x11] = 0;
      local_180[0xe] = 0;
      local_180[0xf] = 0;
      local_180[0xc] = 0;
      local_180[0xd] = 0;
      local_180[10] = 0;
      local_180[0xb] = 0;
      local_180[8] = 0;
      local_180[9] = 0;
      local_180[6] = 0;
      local_180[7] = 0;
      local_180[4] = 0;
      local_180[5] = 0;
      local_180[2] = 0;
      local_180[3] = 0;
      local_180[0] = 0;
      local_180[1] = 0;
      uStack_78 = extraout_var_00;
      uStack_70 = param_2;
      local_60 = param_3;
      local_50 = param_4;
      FUN_00dd5840(local_180,local_180 + 0x20);
      if (param_6 != 0) {
        plVar1 = (long *)0x0;
      }
      (**(code **)(**(long **)(param_5 + 200) + 0x30))
                (*(long **)(param_5 + 200),puVar4 + 0x16,plVar1);
      (**(code **)(**(long **)(param_5 + 0xd8) + 0x48))
                (*(undefined4 *)((long)puVar4 + 0x3dc),*(long **)(param_5 + 0xd8),puVar4 + 0x16,
                 plVar1);
    }
  }
  return;
}


