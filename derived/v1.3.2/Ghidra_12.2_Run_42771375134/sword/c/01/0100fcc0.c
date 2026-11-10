/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0100fcc0; name: FUN_0100fcc0
 */


void FUN_0100fcc0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x10))(param_1,0x268,8);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar2 + 0x80) < 0x10) {
    *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_1;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
                    /* WARNING: Subroutine does not return */
    memset((void *)(lVar1 + 8),0,0x260);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


