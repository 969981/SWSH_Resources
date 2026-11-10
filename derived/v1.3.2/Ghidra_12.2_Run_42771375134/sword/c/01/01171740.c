/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01171740; name: FUN_01171740
 */


undefined8 FUN_01171740(long param_1)

{
  ulong uVar1;
  void *__s;
  long lVar2;
  long *plVar3;
  
  if (*(long *)(param_1 + 0xa8) != 0) {
    uVar1 = FUN_007d4b30(*(long *)(param_1 + 0xa8) + 0xd0);
    if (((uVar1 & 1) != 0) && (*(long *)(param_1 + 0xa0) != 0)) {
      plVar3 = *(long **)(param_1 + 0x80);
      __s = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,0x2944,1);
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (*(ulong *)(lVar2 + 0x80) < 0x10) {
        *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar3;
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
                    /* WARNING: Subroutine does not return */
        memset(__s,0,0x2944);
      }
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return 0;
}


