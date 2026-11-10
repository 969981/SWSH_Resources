/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00441b30; name: FUN_00441b30
 */


void FUN_00441b30(long param_1,long *param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
    FUN_0048ad60(*(undefined8 *)PTR_DAT_02712dc8);
    *(long *)(param_1 + 0x50) = *param_2;
    *(int *)(param_1 + 0x58) = (int)param_2[1];
  }
  if (*(long **)(param_1 + 0xf0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xf0) + 0x18))();
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  if (param_2 != (long *)0x0) {
    uVar1 = FUN_00435260(*(undefined8 *)PTR_DAT_02712ae8,(int)param_2[1],0);
    *(undefined8 *)(param_1 + 0xf0) = uVar1;
  }
  return;
}


