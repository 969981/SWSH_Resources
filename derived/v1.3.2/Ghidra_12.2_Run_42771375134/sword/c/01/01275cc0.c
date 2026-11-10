/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01275cc0; name: FUN_01275cc0
 */


undefined8 FUN_01275cc0(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if ((*(long *)PTR_DAT_02716758 == 0) ||
     (plVar1 = (long *)FUN_007ddb70(*(long *)PTR_DAT_02716758), plVar1 == (long *)0x0)) {
    return 0;
  }
  lVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,0x3390,8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar3 + 0x80) < 0x10) {
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar1;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
                    /* WARNING: Subroutine does not return */
    memset((void *)(lVar2 + 8),0,0x3388);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


