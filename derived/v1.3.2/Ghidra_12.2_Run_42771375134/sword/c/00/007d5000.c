/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007d5000; name: FUN_007d5000
 */


undefined8 FUN_007d5000(long param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  long local_28;
  
  bVar2 = false;
  if ((((*(long *)(param_1 + 0x38) != 0) && (bVar2 = false, *(long *)(param_1 + 0xb0) != 0)) &&
      (bVar2 = false, *(long *)(param_1 + 0x110) != 0)) &&
     (bVar2 = false, *(long *)(param_1 + 0xd0) != 0)) {
    bVar2 = *(long *)(param_1 + 0xf0) != 0;
  }
  uVar3 = 0;
  if ((param_2 != 0) && (!bVar2)) {
    plVar1 = *(long **)(param_1 + 0x78);
    local_28 = param_2;
    if (plVar1 == *(long **)(param_1 + 0x80)) {
      FUN_009ba660(param_1 + 0x70,&local_28);
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x88);
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar3;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      *plVar1 = local_28;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 8;
    }
    uVar3 = 1;
  }
  return uVar3;
}


