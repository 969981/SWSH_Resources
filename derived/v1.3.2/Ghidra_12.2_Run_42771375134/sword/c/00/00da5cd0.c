/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00da5cd0; name: FUN_00da5cd0
 */


undefined1 FUN_00da5cd0(long param_1)

{
  if (((((((*(long *)(param_1 + 8) == 0) || (*(char *)(*(long *)(param_1 + 8) + 0x170) != '\0')) &&
         ((*(long *)(param_1 + 0x338) == 0 ||
          (*(char *)(*(long *)(param_1 + 0x338) + 0x170) != '\0')))) &&
        (((*(long *)(param_1 + 0x118) == 0 ||
          (*(char *)(*(long *)(param_1 + 0x118) + 0x170) != '\0')) &&
         ((*(long *)(param_1 + 0x448) == 0 ||
          (*(char *)(*(long *)(param_1 + 0x448) + 0x170) != '\0')))))) &&
       (((((*(long *)(param_1 + 0x228) == 0 ||
           (*(char *)(*(long *)(param_1 + 0x228) + 0x170) != '\0')) &&
          ((*(long *)(param_1 + 0x558) == 0 ||
           (*(char *)(*(long *)(param_1 + 0x558) + 0x170) != '\0')))) &&
         ((((*(long *)(param_1 + 0x668) != 0 &&
            (*(char *)(*(long *)(param_1 + 0x668) + 0x170) != '\0')) &&
           (*(long *)(param_1 + 0xee8) != 0)) &&
          ((*(char *)(*(long *)(param_1 + 0xee8) + 0x170) != '\0' &&
           (*(long *)(param_1 + 0x778) != 0)))))) &&
        (*(char *)(*(long *)(param_1 + 0x778) + 0x170) != '\0')))) &&
      (((*(long *)(param_1 + 0x888) != 0 && (*(char *)(*(long *)(param_1 + 0x888) + 0x170) != '\0'))
       && (((*(long *)(param_1 + 0x998) != 0 &&
            (((*(char *)(*(long *)(param_1 + 0x998) + 0x170) != '\0' &&
              (*(long *)(param_1 + 0xaa8) != 0)) &&
             (*(char *)(*(long *)(param_1 + 0xaa8) + 0x170) != '\0')))) &&
           (((*(long *)(param_1 + 3000) != 0 &&
             (*(char *)(*(long *)(param_1 + 3000) + 0x170) != '\0')) &&
            (*(long *)(param_1 + 0xcc8) != 0)))))))) &&
     ((*(char *)(*(long *)(param_1 + 0xcc8) + 0x170) != '\0' && (*(long *)(param_1 + 0xdd8) != 0))))
  {
    return *(undefined1 *)(*(long *)(param_1 + 0xdd8) + 0x170);
  }
  return 0;
}


