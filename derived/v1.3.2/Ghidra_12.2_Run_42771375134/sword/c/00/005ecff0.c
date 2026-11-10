/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005ecff0; name: FUN_005ecff0
 */


undefined4 FUN_005ecff0(undefined4 param_1,uint param_2)

{
  switch(param_1) {
  case 2:
    if (param_2 < 7) {
      return *(undefined4 *)(&DAT_02123a50 + (long)(int)param_2 * 4);
    }
    break;
  case 3:
    if (param_2 < 7) {
      return *(undefined4 *)(&DAT_02123a90 + (long)(int)param_2 * 4);
    }
    break;
  case 4:
    if (param_2 < 7) {
      return *(undefined4 *)(&DAT_02123ab0 + (long)(int)param_2 * 4);
    }
    break;
  case 5:
    if (param_2 < 7) {
      return *(undefined4 *)(&DAT_02123a70 + (long)(int)param_2 * 4);
    }
    break;
  case 6:
    if (param_2 < 7) {
      return *(undefined4 *)(&DAT_02123ad0 + (long)(int)param_2 * 4);
    }
  }
  return 0;
}


