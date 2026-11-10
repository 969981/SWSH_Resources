/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0119a0a0; name: FUN_0119a0a0
 */


undefined8 FUN_0119a0a0(long param_1)

{
  ulong uVar1;
  void *__s;
  long lVar2;
  long *plVar3;
  
  uVar1 = FUN_007d4b30(*(long *)(param_1 + 0x88) + 0xd0);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  plVar3 = *(long **)(param_1 + 0x80);
  __s = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,0x2300,1);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar2 + 0x80) < 0x10) {
    *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar3;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
                    /* WARNING: Subroutine does not return */
    memset(__s,0,0x2300);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


