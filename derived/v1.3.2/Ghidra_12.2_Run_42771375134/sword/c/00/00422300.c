/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00422300; name: FUN_00422300
 */


undefined8 FUN_00422300(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  lVar3 = *(long *)(param_1 + 0x158);
  if (*(char *)(lVar3 + 0x98) == '\0') {
    *(undefined1 *)(param_1 + 0x134) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x135) = 0;
    if (*(int *)(lVar3 + 0x80) - 2U < 2) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
      if (*(int *)(lVar3 + 0x80) == 1) {
        uVar2 = (uint)*(byte *)(param_1 + 0x138);
      }
    }
    *(char *)(param_1 + 0x136) = (char)uVar2;
    if (*(int *)(lVar3 + 0x88) - 2U < 2) {
      uVar2 = uVar2 + 1;
    }
    else if (*(int *)(lVar3 + 0x88) == 1) {
      uVar2 = uVar2 + *(byte *)(param_1 + 0x138);
    }
    *(char *)(param_1 + 0x137) = (char)uVar2;
    if (*(int *)(lVar3 + 0x90) - 2U < 2) {
      uVar2 = uVar2 + 1;
      *(char *)(param_1 + 0x134) = (char)uVar2;
    }
    else {
      if (*(int *)(lVar3 + 0x90) == 1) {
        uVar2 = uVar2 + *(byte *)(param_1 + 0x138);
      }
      *(char *)(param_1 + 0x134) = (char)uVar2;
    }
    if (uVar2 != 0) {
      uVar4 = (ulong)uVar2;
      lVar3 = (**(code **)(**(long **)(param_1 + 0x160) + 0x10))
                        (*(long **)(param_1 + 0x160),(uVar4 + (ulong)uVar2 * 2) * 0x40);
      *(long *)(param_1 + 0x148) = lVar3;
      if (lVar3 == 0) {
        return 0x34;
      }
      NEON_fmov(0x3f800000,4);
      lVar5 = 0;
      lVar1 = lVar3;
      while( true ) {
        if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
          memset((void *)(lVar3 + lVar5 + 0x10),0,0xb0);
        }
        uVar4 = uVar4 - 1;
        if (uVar4 == 0) break;
        lVar3 = *(long *)(param_1 + 0x148);
        lVar5 = lVar5 + 0xc0;
        lVar1 = lVar3 + lVar5;
      }
    }
  }
  FUN_00422b00(param_1);
  FUN_00423160(param_1);
  FUN_00423240(param_1);
  return 1;
}


