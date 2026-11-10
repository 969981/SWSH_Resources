/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005f3730; name: FUN_005f3730
 */


undefined8 FUN_005f3730(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  if (0 < *(int *)(param_1 + 0xf0)) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x108) + lVar2);
      FUN_005ee1c0(*(undefined4 *)(puVar1 + 2),*puVar1,*(undefined4 *)((long)puVar1 + 0x14),
                   *(undefined4 *)(puVar1 + 3),*(undefined4 *)((long)puVar1 + 0x1c));
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x20;
    } while (lVar3 < *(int *)(param_1 + 0xf0));
  }
  *(byte *)(param_1 + 0x80) = *(byte *)(param_1 + 0x80) ^ 1;
  return 1;
}


