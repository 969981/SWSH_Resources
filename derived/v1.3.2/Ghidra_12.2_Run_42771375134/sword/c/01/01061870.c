/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01061870; name: FUN_01061870
 */


void FUN_01061870(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  if (((**(long **)(param_1 + 0x78) != 0) && (*(int *)(**(long **)(param_1 + 0x78) + 0x54) != 0)) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x78) + 0x10), lVar1 != 0)) {
    FUN_0069c6b0(lVar1,param_2);
  }
  lVar1 = 0;
LAB_010618bc:
  do {
    lVar2 = **(long **)(param_1 + 0x98 + lVar1);
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x54) != 0)) &&
       (lVar2 = *(long *)(param_1 + 0x98 + lVar1), *(char *)(lVar2 + 0x22) != '\0')) {
      if (*(long *)(lVar2 + 0x18) != 0) {
        FUN_01061870(*(long *)(lVar2 + 0x18),param_2);
        lVar1 = lVar1 + 0x20;
        if (lVar1 == 0x200) {
          return;
        }
        goto LAB_010618bc;
      }
      if (*(long *)(lVar2 + 0x10) != 0) {
        FUN_0069c6b0(*(long *)(lVar2 + 0x10),param_2);
      }
    }
    lVar1 = lVar1 + 0x20;
    if (lVar1 == 0x200) {
      return;
    }
  } while( true );
}


