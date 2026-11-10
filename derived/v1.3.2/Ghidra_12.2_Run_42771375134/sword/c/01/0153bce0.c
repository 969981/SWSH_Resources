/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0153bce0; name: FUN_0153bce0
 */


void FUN_0153bce0(long param_1)

{
  undefined8 uVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN_006e4280(&local_70,*(undefined8 *)PTR_DAT_02710788);
  *(undefined8 *)(param_1 + 0xa8) = local_70;
  *(undefined4 *)(param_1 + 0xb8) = local_60;
  *(undefined8 *)(param_1 + 0xb0) = uStack_68;
  *(undefined8 *)(param_1 + 0xc0) = local_58;
  *(undefined8 *)(param_1 + 200) = local_50;
  *(undefined8 *)(param_1 + 0xd0) = local_48;
  if (*(long *)(param_1 + 0xd8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xd8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  uVar1 = local_40;
  local_40 = 0;
  *(undefined8 *)(param_1 + 0xd8) = uVar1;
  *(undefined8 *)(param_1 + 0xe8) = uStack_30;
  *(undefined8 *)(param_1 + 0xf0) = local_28;
  *(undefined8 *)(param_1 + 0xe0) = local_38;
  FUN_006e5cd0((undefined8 *)(param_1 + 0xa8));
  FUN_0153bfa0(*(undefined8 *)(param_1 + 0xf8));
  FUN_0153c190(*(undefined8 *)(param_1 + 0xf8));
  FUN_0153c380(*(undefined8 *)(param_1 + 0xf8));
  FUN_0153c570(*(undefined8 *)(param_1 + 0xf8));
  FUN_0153c760(*(undefined8 *)(param_1 + 0xf8));
  FUN_0153c950(*(undefined8 *)(param_1 + 0xf8));
  FUN_0153cb40(*(undefined8 *)(param_1 + 0xf8));
  FUN_0153cd30(*(undefined8 *)(param_1 + 0xf8));
  FUN_01559b20(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x1c0));
  FUN_01559b20(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x1c8));
  FUN_01559b20(*(undefined8 *)(param_1 + 0x118),*(undefined8 *)(param_1 + 0x1d0));
  FUN_01559b20(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x1d8));
  FUN_01559b20(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x1e0));
  FUN_01559b20(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x1e8));
  FUN_01559b20(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x1f0));
  FUN_01559b20(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x1f8));
  FUN_01559b20(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x200));
  FUN_01559b20(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x208));
  FUN_01559b20(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x210));
  FUN_01559b20(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x218));
  FUN_01559b20(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x220));
  FUN_01559b20(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x228));
  FUN_01559b20(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x230));
  FUN_01559b20(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x238));
  FUN_01559b20(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x240));
  FUN_01559b20(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x248));
  FUN_01559b20(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x250));
  FUN_01559b20(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 600));
  FUN_01559b20(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x260));
  FUN_01559b20(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x268));
  FUN_01559b20(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x270));
  FUN_01559b20(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x278));
  FUN_01559b20(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x280));
  FUN_01559b20(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x288));
  FUN_01559b20(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x290));
  FUN_01559b20(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x298));
  FUN_01559b20(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x1b8));
  FUN_01559b20(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x2a0));
  FUN_01559b20(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x2a8));
  FUN_01559b20(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x2b0));
  FUN_01559b20(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x2b8));
  FUN_01559b20(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x2c0));
  FUN_01559b20(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x2c8));
  FUN_01505f40(*(undefined8 *)(param_1 + 0x220),*(undefined8 *)(param_1 + 0x228));
  return;
}


