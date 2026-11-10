/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00477640; name: FUN_00477640
 */


/* WARNING: Removing unreachable block (ram,0x00477690) */

undefined4 FUN_00477640(long param_1)

{
  void *__s;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  __s = (void *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x48);
  *(void **)(param_1 + 0x18) = __s;
  if (__s != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    memset(__s,0,0x48);
  }
  return 0x34;
}


