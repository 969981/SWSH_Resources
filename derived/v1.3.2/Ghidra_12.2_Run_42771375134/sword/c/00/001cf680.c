/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001cf680; name: FUN_001cf680
 */


void FUN_001cf680(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  FUN_003ff570(*(undefined8 *)(param_1 + 0x1fc0));
  uVar1 = (ulong)*(uint *)(param_1 + 0x20bc);
  if (*(uint *)(param_1 + 0x20bc) != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x2090);
    do {
      FUN_001cf6d0(*puVar2);
      uVar1 = uVar1 - 1;
      puVar2 = puVar2 + 1;
    } while (uVar1 != 0);
  }
  FUN_003ff5a0(*(undefined8 *)(param_1 + 0x1fc0));
  return;
}


