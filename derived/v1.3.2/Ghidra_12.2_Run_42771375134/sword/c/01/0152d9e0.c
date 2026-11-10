/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0152d9e0; name: FUN_0152d9e0
 */


undefined8 FUN_0152d9e0(long param_1,int param_2,undefined8 *param_3)

{
  void *__s;
  ulong uVar1;
  
  uVar1 = (ulong)*(byte *)(param_1 + (long)param_2 * 0x2861 + 0x1fb0);
  if (uVar1 != 0) {
    __s = (void *)(param_1 + (long)param_2 * 0x2861 + uVar1 * 0x158 + 0x1e59);
    FUN_008664b0(*param_3,__s);
                    /* WARNING: Subroutine does not return */
    memset(__s,0,0x158);
  }
  return 0;
}


