/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ff8e20; name: FUN_00ff8e20
 */


uint FUN_00ff8e20(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 0x80);
  uVar3 = 1;
  for (puVar4 = *(undefined8 **)(param_1 + 0x78); puVar4 != puVar1; puVar4 = puVar4 + 1) {
    uVar2 = (**(code **)(*(long *)*puVar4 + 0x48))();
    uVar3 = uVar3 & uVar2;
  }
  return uVar3;
}


