/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0047b190; name: FUN_0047b190
 */


void FUN_0047b190(long param_1)

{
  undefined8 *puVar1;
  size_t __n;
  
  if (*(long *)(param_1 + 0x108) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x110);
    __n = (ulong)*(ushort *)(puVar1 + 2) * (ulong)*(byte *)(puVar1 + 1) * 2;
    if (*(short *)((long)puVar1 + 0x12) == 0) {
                    /* WARNING: Subroutine does not return */
      memset((void *)*puVar1,0,__n);
    }
    FUN_004585e0(*(long *)(param_1 + 0x108),*puVar1,__n);
    *(undefined2 *)(*(long *)(param_1 + 0x110) + 0x12) = 0;
  }
  (**(code **)(**(long **)(param_1 + 0xf8) + 0x50))();
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0x104);
  return;
}


