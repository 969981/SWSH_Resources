/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010c6d30; name: FUN_010c6d30
 */


undefined8 FUN_010c6d30(long param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  
  if (*(long *)(param_1 + 0x98) == 0) {
    plVar6 = *(long **)(param_1 + 8);
    uVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,0xc,4);
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar6;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    FUN_01562e10(uVar4,4);
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    lVar5 = *(long *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x98) = uVar4;
    if (lVar5 != 0) {
      FUN_01562e20(lVar5);
      (**(code **)(**(long **)(param_1 + 0xa0) + 0x18))
                (*(long **)(param_1 + 0xa0),lVar5,*(undefined8 *)(param_1 + 0xa8),
                 *(undefined8 *)(param_1 + 0xb0));
    }
    *(long **)(param_1 + 0xa0) = plVar6;
    *(undefined8 *)(param_1 + 0xa8) = 0xc;
    uVar4 = 0;
    *(undefined8 *)(param_1 + 0xb0) = 4;
    DAT_02a62a58 = 0;
  }
  else {
    FUN_01562e70();
    iVar2 = DAT_02a62a58 + 1;
    bVar1 = DAT_02a62a58 < 0x1d;
    DAT_02a62a58 = iVar2;
    if ((bVar1) || (uVar3 = FUN_01562f10(*(undefined8 *)(param_1 + 0x98)), (uVar3 & 1) == 0)) {
      uVar4 = 0;
    }
    else {
      lVar5 = *(long *)(param_1 + 0x98);
      *(undefined8 *)(param_1 + 0x98) = 0;
      if (lVar5 != 0) {
        FUN_01562e20(lVar5);
        (**(code **)(**(long **)(param_1 + 0xa0) + 0x18))
                  (*(long **)(param_1 + 0xa0),lVar5,*(undefined8 *)(param_1 + 0xa8),
                   *(undefined8 *)(param_1 + 0xb0));
      }
      uVar4 = 1;
    }
  }
  return uVar4;
}


