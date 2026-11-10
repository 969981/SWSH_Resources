/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fb0410; name: FUN_00fb0410
 */


undefined1 FUN_00fb0410(long param_1)

{
  if (((((((*(long *)(param_1 + 0x58) == 0) ||
          (*(char *)(*(long *)(param_1 + 0x58) + 0x170) == '\0')) ||
         (*(long *)(param_1 + 0x168) == 0)) ||
        (((*(char *)(*(long *)(param_1 + 0x168) + 0x170) == '\0' ||
          (*(long *)(param_1 + 0x278) == 0)) ||
         ((*(char *)(*(long *)(param_1 + 0x278) + 0x170) == '\0' ||
          ((*(long *)(param_1 + 0x388) == 0 ||
           (*(char *)(*(long *)(param_1 + 0x388) + 0x170) == '\0')))))))) ||
       ((*(long *)(param_1 + 0x498) == 0 ||
        (((*(char *)(*(long *)(param_1 + 0x498) + 0x170) == '\0' ||
          (*(long *)(param_1 + 0x5a8) == 0)) ||
         (*(char *)(*(long *)(param_1 + 0x5a8) + 0x170) == '\0')))))) ||
      (((*(long *)(param_1 + 0x6b8) == 0 || (*(char *)(*(long *)(param_1 + 0x6b8) + 0x170) == '\0'))
       || (((*(long *)(param_1 + 0x7c8) == 0 ||
            ((*(char *)(*(long *)(param_1 + 0x7c8) + 0x170) == '\0' ||
             (*(long *)(param_1 + 0x8d8) == 0)))) ||
           (*(char *)(*(long *)(param_1 + 0x8d8) + 0x170) == '\0')))))) ||
     (((*(long *)(param_1 + 0x9e8) == 0 || (*(char *)(*(long *)(param_1 + 0x9e8) + 0x170) == '\0'))
      || (*(long *)(param_1 + 0xaf8) == 0)))) {
    return 0;
  }
  return *(undefined1 *)(*(long *)(param_1 + 0xaf8) + 0x170);
}


