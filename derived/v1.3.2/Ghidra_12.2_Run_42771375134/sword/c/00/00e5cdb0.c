/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e5cdb0; name: FUN_00e5cdb0
 */


undefined8 * FUN_00e5cdb0(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  if (*(long *)(param_1 + 0xc50) == 0) {
    return (undefined8 *)0x0;
  }
  puVar1 = *(undefined8 **)(*(long *)(param_1 + 0xc50) + 0x60);
  puVar3 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1 + -10;
    (**(code **)*puVar1)();
    uVar2 = FUN_00e5d3d0();
    if ((uVar2 & 1) == 0) {
      puVar3 = (undefined8 *)0x0;
    }
  }
  return puVar3;
}


