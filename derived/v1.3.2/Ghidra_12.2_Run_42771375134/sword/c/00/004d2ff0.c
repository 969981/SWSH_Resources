/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004d2ff0; name: FUN_004d2ff0
 */


void FUN_004d2ff0(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  if (*(long *)(param_1 + 0x70) == 0) {
    uVar3 = 0;
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    uVar3 = *(undefined4 *)(*(long *)(param_1 + 0x70) + 0x10);
  }
  uVar1 = (**(code **)(*(long *)(param_1 + (param_2 & 0xffffffff) * 0x80 + 200) + 0x10))();
  FUN_00468f90(uVar3,uVar2,uVar1,param_3,param_4);
  return;
}


