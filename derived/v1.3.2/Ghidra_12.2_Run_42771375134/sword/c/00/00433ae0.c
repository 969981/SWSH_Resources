/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00433ae0; name: FUN_00433ae0
 */


void FUN_00433ae0(long *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  if ((long *)*param_1 != (long *)0x0) {
    uVar2 = (**(code **)(*(long *)*param_1 + 0x18))();
    if ((uVar2 & 1) != 0) {
      (**(code **)(*(long *)*param_1 + 0x28))();
    }
    puVar3 = (undefined8 *)*param_1;
    if (puVar3 != (undefined8 *)0x0) {
      uVar1 = *(undefined4 *)PTR_DAT_02712e28;
      (**(code **)*puVar3)(puVar3);
      FUN_00404870(uVar1,puVar3);
    }
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    FUN_004047f0(*(undefined4 *)PTR_DAT_02712e28);
    param_1[1] = 0;
  }
  if (param_1[3] != 0) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712e28);
    param_1[3] = 0;
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if (param_1[6] != 0) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712e28);
    param_1[6] = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


