/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048f610; name: FUN_0048f610
 */


void FUN_0048f610(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  
  if (*(undefined8 **)(param_2 + 0x18) == (undefined8 *)0x0) {
    return;
  }
  if (*(short *)(param_2 + 0x14) != 0) {
    uVar2 = 0;
    puVar1 = *(undefined8 **)(param_2 + 0x18);
    do {
      FUN_0048f430(param_1,*puVar1,puVar1 + 2);
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 4;
    } while (uVar2 < *(ushort *)(param_2 + 0x14));
  }
  FUN_004904f0(param_2);
  return;
}


