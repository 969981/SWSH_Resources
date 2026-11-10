/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003fc7d0; name: FUN_003fc7d0
 */


void FUN_003fc7d0(long param_1,ulong param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 auStack_58 [40];
  
  if (*(int *)(param_1 + 0x18) < 0) {
    FUN_003c6bd0(param_1);
    lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x48);
    (**(code **)(**(long **)(*(long *)(lVar2 + 0x720) + 0x6e8) + 0xa8))(auStack_58);
    uVar1 = 4;
    if ((param_2 & 1) == 0) {
      uVar1 = 0;
    }
    FUN_003cde40(*(undefined8 *)(lVar2 + 0x1048),param_1,uVar1,auStack_58,
                 *(uint *)(lVar2 + 0x110c) >> 4 & 1);
  }
  return;
}


