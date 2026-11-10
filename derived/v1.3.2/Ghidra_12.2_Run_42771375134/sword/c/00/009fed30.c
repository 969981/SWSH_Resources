/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009fed30; name: FUN_009fed30
 */


bool FUN_009fed30(long param_1,byte param_2)

{
  long lVar1;
  
  if (param_2 < 8) {
    lVar1 = *(long *)(param_1 + 0x180);
    if (lVar1 == 0) {
      return false;
    }
  }
  else {
    if (*(long *)(param_1 + 0x188) == 0) {
      return false;
    }
    lVar1 = *(long *)(param_1 + 0x180);
  }
  switch(param_2) {
  case 0:
    return *(char *)(lVar1 + 0x234d) != '\0';
  case 1:
    return *(char *)(lVar1 + 0x234e) != '\0';
  case 2:
    return *(char *)(lVar1 + 0x234f) != '\0';
  case 3:
    return *(char *)(lVar1 + 0x2353) != '\0';
  case 4:
    return *(char *)(lVar1 + 0x2358) != '\0';
  case 5:
    return *(char *)(lVar1 + 0x235a) != '\0';
  case 6:
    return *(char *)(lVar1 + 0x2350) != '\0';
  case 7:
    return *(char *)(lVar1 + 0x2351) != '\0';
  case 8:
    return *(char *)(*(long *)(param_1 + 0x188) + 0x5a2) != '\0';
  default:
    return false;
  }
}


