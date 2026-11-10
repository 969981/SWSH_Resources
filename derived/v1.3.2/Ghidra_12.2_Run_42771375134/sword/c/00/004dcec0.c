/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004dcec0; name: FUN_004dcec0
 */


void FUN_004dcec0(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  FUN_00462410(param_1 + 0x20);
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = *(undefined4 *)PTR_DAT_02712e28;
    (**(code **)*puVar2)(puVar2);
    FUN_00404870(uVar1,puVar2);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}


