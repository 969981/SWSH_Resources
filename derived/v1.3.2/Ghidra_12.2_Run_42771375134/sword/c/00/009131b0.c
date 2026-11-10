/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009131b0; name: FUN_009131b0
 */


bool FUN_009131b0(long param_1,char param_2)

{
  if (((((((*(char *)(param_1 + 0x130) == param_2) || (*(char *)(param_1 + 0x131) == param_2)) ||
         (*(char *)(param_1 + 0x132) == param_2)) ||
        ((*(char *)(param_1 + 0x133) == param_2 || (*(char *)(param_1 + 0x134) == param_2)))) ||
       (*(char *)(param_1 + 0x135) == param_2)) ||
      (((((*(char *)(param_1 + 0x136) == param_2 || (*(char *)(param_1 + 0x137) == param_2)) ||
         ((*(char *)(param_1 + 0x138) == param_2 ||
          (((*(char *)(param_1 + 0x139) == param_2 || (*(char *)(param_1 + 0x13a) == param_2)) ||
           (*(char *)(param_1 + 0x13b) == param_2)))))) ||
        ((*(char *)(param_1 + 0x13c) == param_2 || (*(char *)(param_1 + 0x13d) == param_2)))) ||
       (*(char *)(param_1 + 0x13e) == param_2)))) ||
     ((((*(char *)(param_1 + 0x13f) == param_2 || (*(char *)(param_1 + 0x140) == param_2)) ||
       ((*(char *)(param_1 + 0x141) == param_2 ||
        (((*(char *)(param_1 + 0x142) == param_2 || (*(char *)(param_1 + 0x143) == param_2)) ||
         (*(char *)(param_1 + 0x144) == param_2)))))) ||
      (((*(char *)(param_1 + 0x145) == param_2 || (*(char *)(param_1 + 0x146) == param_2)) ||
       ((*(char *)(param_1 + 0x147) == param_2 ||
        (((*(char *)(param_1 + 0x148) == param_2 || (*(char *)(param_1 + 0x149) == param_2)) ||
         ((*(char *)(param_1 + 0x14a) == param_2 ||
          ((*(char *)(param_1 + 0x14b) == param_2 || (*(char *)(param_1 + 0x14c) == param_2)))))))))
       ))))) {
    return true;
  }
  return *(char *)(param_1 + 0x14d) == param_2;
}


