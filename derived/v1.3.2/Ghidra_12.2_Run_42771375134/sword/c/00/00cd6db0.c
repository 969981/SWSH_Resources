/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cd6db0; name: FUN_00cd6db0
 */


void FUN_00cd6db0(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long *plVar3;
  
  FUN_00cd53d0();
  uVar1 = FUN_016dce00(*(undefined8 *)(param_1 + 0xd8),2);
  plVar3 = *(long **)(param_1 + 0xb0);
  if (plVar3 != (long *)0x0) {
    (**(code **)(plVar3[9] + 0x10))();
  }
  uVar2 = (**(code **)(*plVar3 + 0x50))(plVar3,uVar1);
  if (plVar3 != (long *)0x0) {
    (**(code **)(plVar3[9] + 0x18))(plVar3 + 9);
  }
  FUN_00cd4ff0(param_1,uVar1,uVar2,0);
  if (*(byte *)(param_1 + 0xf0) < 4) {
    *(undefined4 *)(param_1 + 0xf4) = 5;
    return;
  }
  FUN_00cd1280(*(undefined8 *)(param_1 + 0x90),9,1);
  *(undefined4 *)(param_1 + 0xf4) = 6;
  FUN_012ae3d0(param_1 + 0xf8,(long)*(int *)(*(long *)(param_1 + 0xd8) + 0x26d0));
  return;
}


