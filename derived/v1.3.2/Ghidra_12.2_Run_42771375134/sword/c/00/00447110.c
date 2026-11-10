/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00447110; name: FUN_00447110
 */


void FUN_00447110(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_2 + 0x68);
  if (uVar2 < *(uint *)(param_2 + 0x6c)) {
    *(uint *)(param_2 + 0x68) = uVar2 + 1;
    puVar1 = (undefined8 *)(*(long *)(param_2 + 0x60) + (ulong)uVar2 * 8);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = param_3;
    }
  }
  return;
}


