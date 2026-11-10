/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00400050; name: FUN_00400050
 */


undefined4 FUN_00400050(void)

{
  int iVar1;
  undefined4 local_18 [2];
  
  iVar1 = nn::os::AllocateTlsSlot((TlsSlot *)local_18,(_func_void_ulong *)0x0);
  if (iVar1 != 0) {
    local_18[0] = 0xffffffff;
  }
  return local_18[0];
}


