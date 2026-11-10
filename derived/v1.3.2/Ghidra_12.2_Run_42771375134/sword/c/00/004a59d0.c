/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a59d0; name: FUN_004a59d0
 */


/* WARNING: Removing unreachable block (ram,0x004a5b44) */

void FUN_004a59d0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  void *__s;
  
  if (((*(uint *)(param_4 + 1) & 0xf00) == 0x200) &&
     (__s = (void *)FUN_00404750(*(undefined4 *)PTR_DAT_02712e28,
                                 (ulong)*(ushort *)(param_3 + 2) * (ulong)*(byte *)(param_3 + 1) * 4
                                 ,0x10), __s != (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
    memset(__s,0,(ulong)*(ushort *)(param_3 + 2) * (ulong)*(byte *)(param_3 + 1) * 4);
  }
  FUN_004ca600(param_1,param_2,*param_3,*param_4,*(undefined2 *)(param_3 + 2),
               *(undefined4 *)(param_3 + 1));
  return;
}


