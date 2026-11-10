/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001598d0; name: thunk_FUN_00162030
 */


void thunk_FUN_00162030(long param_1,uint param_2,undefined8 param_3,undefined8 param_4,long param_5
                       )

{
  uint uVar1;
  
  uVar1 = param_2 & 0xffff;
  FUN_0015fff0(param_1,param_3,param_2,param_5 + (ulong)uVar1 * 0xf0,param_5,
               param_5 + (ulong)uVar1 * 0x90,0);
                    /* WARNING: Subroutine does not return */
  memset((void *)(param_1 + (ulong)*(ushort *)(param_1 + 0x1a)),0,(ulong)(uVar1 * 0xa0 + 0x90));
}


