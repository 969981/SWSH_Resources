/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007eb350; name: FUN_007eb350
 */


undefined8 * FUN_007eb350(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *local_48;
  undefined1 *puStack_40;
  undefined1 local_38;
  
  puVar2 = (undefined8 *)FUN_007e1f40(param_1[1],0xa8);
  puVar2[0x13] = 0;
  puVar2[0x14] = 0;
  puVar2[0x11] = 0;
  puVar2[0x12] = 0;
  *puVar2 = 0;
  puVar2[0xf] = 0;
  puVar2[0x10] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  uVar3 = FUN_007e1d20(param_1[1],param_2);
  puVar1 = PTR_DAT_02716d70;
  *puVar2 = uVar3;
  if (*(long *)puVar1 != 2) {
    local_38 = 0;
    local_48 = PTR_DAT_02716670 + 0x10;
    puStack_40 = PTR_LAB_02716d78;
    FUN_00801c10(PTR_DAT_02716d70,&local_48);
    FUN_00801390(&local_48);
  }
  puVar2[1] = *(undefined8 *)PTR_DAT_02716d10;
  puVar2[2] = *param_1;
  uVar3 = FUN_008469a0();
  puVar2[0x12] = uVar3;
  if (DAT_029f55b0 != 2) {
    local_38 = 0;
    local_48 = PTR_DAT_02716670 + 0x10;
    puStack_40 = &LAB_007f8810;
    FUN_00801c10(&DAT_029f55b0,&local_48);
    FUN_00801390(&local_48);
  }
  puVar2[0x13] = DAT_029f55a8;
  uVar3 = FUN_008469e0();
  *(undefined1 *)(puVar2 + 0x10) = 1;
  puVar2[0x14] = uVar3;
  *(undefined4 *)((long)puVar2 + 0x7c) = 2;
  return puVar2;
}


