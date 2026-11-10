/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00404a80; name: FUN_00404a80
 */


undefined8 FUN_00404a80(long param_1,long param_2)

{
  if ((param_2 - 0x1998U & 0xfffffffffffffff8) - 0x18 < 0xffffffe9) {
    *(long *)(param_1 + 0x10) = param_1;
    *(long *)(param_1 + 0x18) = param_1;
                    /* WARNING: Subroutine does not return */
    memset((void *)(param_1 + 0x20),0,0x68);
  }
  printf("tlsf_create: Pool size must be at least %d bytes.\n",0x19b0);
  return 0;
}


