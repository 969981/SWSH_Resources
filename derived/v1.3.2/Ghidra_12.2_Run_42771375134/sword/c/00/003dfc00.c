/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003dfc00; name: FUN_003dfc00
 */


void FUN_003dfc00(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long local_38;
  
  puVar2 = *(undefined8 **)(param_2 + 0x50);
  if (puVar2 != (undefined8 *)0x0) {
    if (puVar2[0xf] == 0) {
      lVar1 = *(long *)(puVar2[0x10] + 200);
    }
    else {
      lVar1 = *(long *)(puVar2[0xf] + 200);
    }
    if (lVar1 != 0) {
      FUN_003c2510(*(undefined8 *)(param_1 + 0x800),lVar1,puVar2);
    }
    lVar1 = *(long *)(param_1 + 0x1150);
    FUN_003c5300(puVar2);
    *(int *)(lVar1 + 0x224) = *(int *)(lVar1 + 0x224) + -1;
    *puVar2 = *(undefined8 *)(lVar1 + 0x230);
    *(undefined8 **)(lVar1 + 0x230) = puVar2;
  }
  local_38 = param_2;
  FUN_003f4050(param_1 + 0x7c8,&local_38);
  return;
}


