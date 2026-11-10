/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c5a10; name: FUN_004c5a10
 */


void FUN_004c5a10(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar1 = PTR_DAT_027134f8;
  if (*(int *)(PTR_DAT_027134f8 + 8) != 0) {
    puVar4 = *(undefined8 **)PTR_DAT_027134f8;
    do {
      uVar3 = *puVar4;
      uVar2 = FUN_004c5a80(uVar3,param_1);
      if ((uVar2 & 1) != 0) {
        FUN_004d19e0(uVar3);
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 != (undefined8 *)(*(long *)puVar1 + (ulong)*(uint *)(puVar1 + 8) * 8));
  }
  return;
}


