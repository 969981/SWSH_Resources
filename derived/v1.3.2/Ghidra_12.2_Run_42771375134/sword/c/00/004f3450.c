/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f3450; name: FUN_004f3450
 */


void FUN_004f3450(long param_1)

{
  long lVar1;
  undefined8 local_38;
  undefined8 local_28;
  
  if ((*(long *)(param_1 + 0xd8) != 0) && (*(int *)(param_1 + 0xe8) != 0)) {
    local_28 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0xd8) + 8) + 0x48);
    lVar1 = *(long *)(param_1 + 0xe0);
    local_38 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x48);
    FUN_004e7e30(lVar1,&local_28,&local_38);
    lVar1 = lVar1 + 0x18;
    if (lVar1 != *(long *)(param_1 + 0xe0) + (ulong)*(uint *)(param_1 + 0xe8) * 0x18) {
      do {
        local_28 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0xd8) + 8) + 0x48);
        local_38 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x48);
        FUN_004e7e30(lVar1,&local_28,&local_38);
        lVar1 = lVar1 + 0x18;
      } while (lVar1 != *(long *)(param_1 + 0xe0) + (ulong)*(uint *)(param_1 + 0xe8) * 0x18);
    }
  }
  return;
}


