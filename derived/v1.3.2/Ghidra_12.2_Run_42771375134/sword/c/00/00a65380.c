/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a65380; name: FUN_00a65380
 */


void FUN_00a65380(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x1e18) + 0x3b8);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x448) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x448) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x448) = 0;
  }
  *(long *)(param_1 + 0x448) = lVar2;
  uVar1 = FUN_007240b0(lVar2 + 0x6c0,0);
  *(undefined8 *)(param_1 + 0x450) = uVar1;
  uVar1 = FUN_007240b0(*(long *)(param_1 + 0x448) + 0x4e0,0);
  *(undefined8 *)(param_1 + 0x458) = uVar1;
  uVar1 = FUN_007240b0(*(long *)(param_1 + 0x448) + 0x2b0,0);
  *(undefined8 *)(param_1 + 0x460) = uVar1;
  uVar1 = FUN_007240b0(*(long *)(param_1 + 0x448) + 0x300,0);
  *(undefined8 *)(param_1 + 0x468) = uVar1;
  uVar1 = FUN_007240b0(*(long *)(param_1 + 0x448) + 0x350,0);
  *(undefined8 *)(param_1 + 0x470) = uVar1;
  uVar1 = FUN_007240b0(*(long *)(param_1 + 0x448) + 0x3a0,0);
  *(undefined8 *)(param_1 + 0x478) = uVar1;
  uVar1 = FUN_007240b0(*(long *)(param_1 + 0x448) + 0x3f0,0);
  *(undefined8 *)(param_1 + 0x480) = uVar1;
  uVar1 = FUN_007240b0(*(long *)(param_1 + 0x448) + 0x440,0);
  *(undefined8 *)(param_1 + 0x488) = uVar1;
  uVar1 = FUN_007240b0(*(long *)(param_1 + 0x448) + 0x490,0);
  *(undefined8 *)(param_1 + 0x490) = uVar1;
  return;
}


