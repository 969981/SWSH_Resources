/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00460c50; name: FUN_00460c50
 */


void FUN_00460c50(long param_1)

{
  long lVar1;
  long lVar2;
  undefined2 *puVar3;
  
  for (lVar2 = *(long *)(param_1 + 0x70); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x58)) {
    lVar1 = *(long *)(lVar2 + 0x10);
    *(undefined4 *)(lVar2 + 0x50) = 0;
    if ((lVar1 != 0) && (*(int *)(lVar1 + 0x68) != 0)) {
      puVar3 = *(undefined2 **)(lVar1 + 0x60);
      do {
        if (*(char *)(puVar3 + 1) != '\0') {
          FUN_00462050(*(undefined4 *)(puVar3 + 2),lVar2,*puVar3);
          lVar1 = *(long *)(lVar2 + 0x10);
        }
        puVar3 = puVar3 + 4;
      } while (puVar3 != (undefined2 *)
                         (*(long *)(lVar1 + 0x60) + (ulong)*(uint *)(lVar1 + 0x68) * 8));
    }
  }
  return;
}


