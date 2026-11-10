/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015126c0; name: FUN_015126c0
 */


undefined1 FUN_015126c0(long param_1)

{
  if (((((((*(long *)(param_1 + 0x68) == 0) ||
          (*(char *)(*(long *)(param_1 + 0x68) + 0x170) == '\0')) ||
         (*(long *)(param_1 + 0x178) == 0)) ||
        ((*(char *)(*(long *)(param_1 + 0x178) + 0x170) == '\0' || (*(long *)(param_1 + 0x288) == 0)
         ))) || ((*(char *)(*(long *)(param_1 + 0x288) + 0x170) == '\0' ||
                 ((*(long *)(param_1 + 0x398) == 0 ||
                  (*(char *)(*(long *)(param_1 + 0x398) + 0x170) == '\0')))))) ||
      (*(long *)(param_1 + 0x4a8) == 0)) ||
     ((((*(char *)(*(long *)(param_1 + 0x4a8) + 0x170) == '\0' || (*(long *)(param_1 + 0x5b8) == 0))
       || (*(char *)(*(long *)(param_1 + 0x5b8) + 0x170) == '\0')) ||
      (((*(long *)(param_1 + 0x6c8) == 0 || (*(char *)(*(long *)(param_1 + 0x6c8) + 0x170) == '\0'))
       || ((*(long *)(param_1 + 0x7d8) == 0 ||
           ((*(char *)(*(long *)(param_1 + 0x7d8) + 0x170) == '\0' ||
            (*(long *)(param_1 + 0x8e8) == 0)))))))))) {
    return 0;
  }
  return *(undefined1 *)(*(long *)(param_1 + 0x8e8) + 0x170);
}


