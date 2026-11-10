/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ff260; name: FUN_009ff260
 */


bool FUN_009ff260(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x188);
  if (lVar2 == 0) {
    return false;
  }
  if ((*(char *)(lVar2 + 0x5a1) == '\a') && (iVar1 = *(int *)(lVar2 + 0x5a8), iVar1 != 0)) {
    if (iVar1 == 1000) {
      return param_2 != 0x188;
    }
    if ((((((iVar1 != param_2) && (*(int *)(lVar2 + 0x5ac) != param_2)) &&
          (*(int *)(lVar2 + 0x5b0) != param_2)) &&
         ((*(int *)(lVar2 + 0x5b4) != param_2 && (*(int *)(lVar2 + 0x5b8) != param_2)))) &&
        ((*(int *)(lVar2 + 0x5bc) != param_2 &&
         ((*(int *)(lVar2 + 0x5c0) != param_2 && (*(int *)(lVar2 + 0x5c4) != param_2)))))) &&
       ((*(int *)(lVar2 + 0x5c8) != param_2 &&
        ((*(int *)(lVar2 + 0x5cc) != param_2 && (*(int *)(lVar2 + 0x5d0) != param_2)))))) {
      return *(int *)(lVar2 + 0x5d4) == param_2;
    }
  }
  return true;
}


