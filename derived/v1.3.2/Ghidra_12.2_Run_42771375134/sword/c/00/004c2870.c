/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c2870; name: FUN_004c2870
 */


void FUN_004c2870(long param_1,int param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if ((*(long *)PTR_DAT_02712de8 != 0) && (lVar1 = *(long *)(param_1 + 8), lVar1 != 0)) {
    if (param_2 == 0) {
      if (param_3 == -1) {
        do {
          lVar2 = *(long *)(lVar1 + 8);
          FUN_004c4530(lVar1);
          lVar1 = lVar2;
        } while (lVar2 != 0);
      }
      else {
        do {
          lVar2 = *(long *)(lVar1 + 8);
          if (*(long *)(lVar1 + 0x10) == 0) {
            if (param_3 == -1) goto LAB_004c2958;
          }
          else if (*(long *)(*(long *)(lVar1 + 0x10) + 0x48) == param_3) {
LAB_004c2958:
            FUN_004c4530(lVar1);
          }
          lVar1 = lVar2;
        } while (lVar2 != 0);
      }
    }
    else if (param_3 == -1) {
      do {
        lVar2 = *(long *)(lVar1 + 8);
        if (*(int *)(lVar1 + 0x3c) == param_2) {
          FUN_004c4530(lVar1);
        }
        lVar1 = lVar2;
      } while (lVar2 != 0);
    }
    else {
      do {
        lVar2 = *(long *)(lVar1 + 8);
        if (*(int *)(lVar1 + 0x3c) == param_2) {
          if (*(long *)(lVar1 + 0x10) == 0) {
            if (param_3 == -1) goto LAB_004c2914;
          }
          else if (*(long *)(*(long *)(lVar1 + 0x10) + 0x48) == param_3) {
LAB_004c2914:
            FUN_004c4530(lVar1);
          }
        }
        lVar1 = lVar2;
      } while (lVar2 != 0);
    }
  }
  return;
}


