/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ed6130; name: FUN_00ed6130
 */


void FUN_00ed6130(long param_1,undefined8 param_2,long *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined2 local_70;
  undefined1 local_6e;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  
  puVar2 = (undefined8 *)param_3[1];
  if (puVar2 != (undefined8 *)*param_3) {
    do {
      if (*(long *)(param_1 + 0x6d8) == *(long *)(param_1 + 0x6e0)) {
        *(long *)(param_1 + 0x6d8) = *(long *)(param_1 + 0x6d8) + -0x30;
      }
      local_70 = 0;
      local_6e = 0;
      local_50 = 0;
      local_60 = 0;
      uStack_58 = 0;
      uVar1 = FUN_01223b90(param_2);
      local_70 = CONCAT11(local_70._1_1_,uVar1);
      puVar2 = puVar2 + -1;
      uVar1 = FUN_01223390(*puVar2);
      local_70 = CONCAT11(uVar1,(undefined1)local_70);
      local_6e = FUN_01223ba0(param_2);
      FUN_01223380(*puVar2);
      local_60 = CONCAT44(extraout_var,extraout_s0);
      uStack_58 = extraout_var_00;
      local_50 = FUN_012233a0(*puVar2);
      FUN_00ed66a0((undefined8 *)(param_1 + 0x6d0),*(undefined8 *)(param_1 + 0x6d0),&local_70);
    } while (puVar2 != (undefined8 *)*param_3);
  }
  return;
}


