/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a7670; name: FUN_004a7670
 */


void FUN_004a7670(long param_1,code *param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    for (lVar1 = *(long *)(*(long *)(param_1 + 0x70) + 0x10); lVar1 != 0;
        lVar1 = *(long *)(lVar1 + 0x48)) {
      while ((((*param_3 != 0 && (*(long *)(lVar1 + 0x10) != *param_3)) ||
              (((int)param_3[1] != 0 && (*(int *)(lVar1 + 0x18) != (int)param_3[1])))) ||
             (((((int)param_3[2] != 0 && (*(int *)(lVar1 + 0x20) != (int)param_3[2])) ||
               (((char)param_3[3] != -1 && (*(char *)(lVar1 + 0x28) != (char)param_3[3])))) ||
              ((((char)param_3[4] != -1 && (*(char *)(lVar1 + 0x30) != (char)param_3[4])) ||
               ((param_3[5] != 0 && (*(long *)(lVar1 + 0x38) != param_3[5]))))))))) {
        lVar1 = *(long *)(lVar1 + 0x48);
        if (lVar1 == 0) {
          return;
        }
      }
      (*param_2)(lVar1 + -0x18,param_3,param_4);
    }
  }
  return;
}


