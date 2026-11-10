/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004edfe0; name: FUN_004edfe0
 */


void FUN_004edfe0(long *param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  uint uVar2;
  
  if (*(uint *)(param_1 + 1) == 0) {
    return;
  }
  lVar1 = *(long *)*param_1;
  if (lVar1 == 0) {
    uVar2 = 0;
    do {
      uVar2 = uVar2 + 1;
      if (*(uint *)(param_1 + 1) <= uVar2) {
        return;
      }
      lVar1 = ((long *)*param_1)[uVar2];
    } while (lVar1 == 0);
  }
  else {
    uVar2 = 0;
  }
  do {
    do {
      FUN_004e8e20(lVar1,param_2,param_3);
      lVar1 = *(long *)(lVar1 + 0x40);
    } while (lVar1 != 0);
    do {
      uVar2 = uVar2 + 1;
      if (*(uint *)(param_1 + 1) <= uVar2) {
        return;
      }
      lVar1 = *(long *)(*param_1 + (ulong)uVar2 * 8);
    } while (lVar1 == 0);
  } while( true );
}


