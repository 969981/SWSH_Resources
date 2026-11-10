/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ee080; name: FUN_004ee080
 */


void FUN_004ee080(long param_1)

{
  uint uVar1;
  long lVar2;
  
  if (*(uint *)(param_1 + 0x20) == 0) {
    return;
  }
  lVar2 = **(long **)(param_1 + 0x18);
  if (lVar2 == 0) {
    uVar1 = 0;
    do {
      uVar1 = uVar1 + 1;
      if (*(uint *)(param_1 + 0x20) <= uVar1) {
        return;
      }
      lVar2 = (*(long **)(param_1 + 0x18))[uVar1];
    } while (lVar2 == 0);
  }
  else {
    uVar1 = 0;
  }
  do {
    do {
      *(undefined4 *)(lVar2 + 0x78) = 0;
      lVar2 = *(long *)(lVar2 + 0x40);
    } while (lVar2 != 0);
    do {
      uVar1 = uVar1 + 1;
      if (*(uint *)(param_1 + 0x20) <= uVar1) {
        return;
      }
      lVar2 = *(long *)(*(long *)(param_1 + 0x18) + (ulong)uVar1 * 8);
    } while (lVar2 == 0);
  } while( true );
}


