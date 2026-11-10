/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004dad30; name: FUN_004dad30
 */


void FUN_004dad30(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_004dda80();
    puVar2 = *(undefined8 **)(param_1 + 0x70);
    if (puVar2 != (undefined8 *)0x0) {
      uVar1 = *(undefined4 *)PTR_DAT_02712e28;
      (**(code **)*puVar2)(puVar2);
      FUN_00404870(uVar1,puVar2);
    }
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  FUN_004da560(param_1 + 0xa0);
  *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) | 1;
  return;
}


