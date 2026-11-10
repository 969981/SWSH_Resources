/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004d19e0; name: FUN_004d19e0
 */


void FUN_004d19e0(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  plVar2 = *(long **)(param_1 + 0x130);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,PTR_PTR_02713088);
    *(undefined8 *)(param_1 + 0x130) = 0;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x138);
  if (puVar3 != (undefined8 *)0x0) {
    uVar1 = *(undefined4 *)PTR_DAT_02712e28;
    (**(code **)*puVar3)(puVar3);
    FUN_00404870(uVar1,puVar3);
    *(undefined8 *)(param_1 + 0x138) = 0;
  }
  *(undefined4 *)(param_1 + 0x128) = 0xffffffff;
  (**(code **)(*(long *)(param_1 + 200) + 0x28))((long *)(param_1 + 200));
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_004047f0(*(undefined4 *)PTR_DAT_02712e28);
    *(undefined8 *)(param_1 + 0x2c8) = 0;
    *(undefined4 *)(param_1 + 0x2d8) = 0;
    *(undefined8 *)(param_1 + 0x2d0) = 0x2b00000000;
  }
  plVar2 = *(long **)(param_1 + 0x1b0);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,PTR_PTR_02713088);
    *(undefined8 *)(param_1 + 0x1b0) = 0;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x1b8);
  if (puVar3 != (undefined8 *)0x0) {
    uVar1 = *(undefined4 *)PTR_DAT_02712e28;
    (**(code **)*puVar3)(puVar3);
    FUN_00404870(uVar1,puVar3);
    *(undefined8 *)(param_1 + 0x1b8) = 0;
  }
  *(undefined4 *)(param_1 + 0x1a8) = 0xffffffff;
  (**(code **)(*(long *)(param_1 + 0x148) + 0x28))(param_1 + 0x148);
  if (*(long *)(param_1 + 0x2e0) != 0) {
    FUN_004047f0(*(undefined4 *)PTR_DAT_02712e28);
    *(undefined8 *)(param_1 + 0x2e0) = 0;
    *(undefined4 *)(param_1 + 0x2f0) = 0;
    *(undefined8 *)(param_1 + 0x2e8) = 0x2b00000000;
  }
  plVar2 = *(long **)(param_1 + 0x230);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,PTR_PTR_02713088);
    *(undefined8 *)(param_1 + 0x230) = 0;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x238);
  if (puVar3 != (undefined8 *)0x0) {
    uVar1 = *(undefined4 *)PTR_DAT_02712e28;
    (**(code **)*puVar3)(puVar3);
    FUN_00404870(uVar1,puVar3);
    *(undefined8 *)(param_1 + 0x238) = 0;
  }
  *(undefined4 *)(param_1 + 0x228) = 0xffffffff;
  (**(code **)(*(long *)(param_1 + 0x1c8) + 0x28))(param_1 + 0x1c8);
  if (*(long *)(param_1 + 0x2f8) != 0) {
    FUN_004047f0(*(undefined4 *)PTR_DAT_02712e28);
    *(undefined8 *)(param_1 + 0x2f8) = 0;
    *(undefined4 *)(param_1 + 0x308) = 0;
    *(undefined8 *)(param_1 + 0x300) = 0x2b00000000;
  }
  plVar2 = *(long **)(param_1 + 0x2b0);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,PTR_PTR_02713088);
    *(undefined8 *)(param_1 + 0x2b0) = 0;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x2b8);
  if (puVar3 != (undefined8 *)0x0) {
    uVar1 = *(undefined4 *)PTR_DAT_02712e28;
    (**(code **)*puVar3)(puVar3);
    FUN_00404870(uVar1,puVar3);
    *(undefined8 *)(param_1 + 0x2b8) = 0;
  }
  *(undefined4 *)(param_1 + 0x2a8) = 0xffffffff;
  (**(code **)(*(long *)(param_1 + 0x248) + 0x28))(param_1 + 0x248);
  if (*(long *)(param_1 + 0x310) != 0) {
    FUN_004047f0(*(undefined4 *)PTR_DAT_02712e28);
    *(undefined8 *)(param_1 + 0x310) = 0;
    *(undefined4 *)(param_1 + 800) = 0;
    *(undefined8 *)(param_1 + 0x318) = 0x2b00000000;
  }
  *(byte *)(param_1 + 0x344) = *(byte *)(param_1 + 0x344) & 0xfc;
  return;
}


