/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c1cf40; name: FUN_00c1cf40
 */


undefined8 FUN_00c1cf40(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  if (*(long *)(param_1 + 0x88) == 0) {
    plVar3 = *(long **)(param_1 + 8);
    uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3,0xc,4);
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar3;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    FUN_01562e10(uVar1,4);
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    lVar2 = *(long *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = uVar1;
    if (lVar2 != 0) {
      FUN_01562e20(lVar2);
      (**(code **)(**(long **)(param_1 + 0x90) + 0x18))
                (*(long **)(param_1 + 0x90),lVar2,*(undefined8 *)(param_1 + 0x98),
                 *(undefined8 *)(param_1 + 0xa0));
    }
    *(long **)(param_1 + 0x90) = plVar3;
    *(undefined8 *)(param_1 + 0x98) = 0xc;
    *(undefined8 *)(param_1 + 0xa0) = 4;
    nn::os::GetSystemTick();
    DAT_02a56dd8 = nn::os::ConvertToTimeSpan();
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


