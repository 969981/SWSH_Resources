/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ae190; name: FUN_003ae190
 */


void FUN_003ae190(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [40];
  
  if (*(int *)(param_1 + 0x18) < 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x48);
    (**(code **)(**(long **)(*(long *)(lVar1 + 0x720) + 0x6e8) + 0xa8))(auStack_48);
    FUN_003cde40(*(undefined8 *)(lVar1 + 0x1048),param_1,0,auStack_48,
                 *(uint *)(lVar1 + 0x110c) >> 4 & 1);
    FUN_003c6bd0(param_1);
    return;
  }
  return;
}


