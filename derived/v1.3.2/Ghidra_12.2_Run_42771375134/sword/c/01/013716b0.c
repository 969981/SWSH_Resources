/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013716b0; name: FUN_013716b0
 */


undefined8 FUN_013716b0(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = 0;
  uVar4 = 1;
  do {
    while( true ) {
      lVar1 = param_1 + lVar3;
      if ((*(long **)(lVar1 + 0x550) != (long *)0x0) && (*(char *)(lVar1 + 0x558) == '\0')) break;
      lVar3 = lVar3 + 0x10;
      if (lVar3 == 0x200) {
        return uVar4;
      }
    }
    uVar2 = (**(code **)(**(long **)(lVar1 + 0x550) + 0x30))();
    if ((uVar2 & 1) == 0) {
      uVar4 = 0;
    }
    else {
      *(undefined1 *)(lVar1 + 0x558) = 1;
    }
    lVar3 = lVar3 + 0x10;
  } while (lVar3 != 0x200);
  return uVar4;
}


