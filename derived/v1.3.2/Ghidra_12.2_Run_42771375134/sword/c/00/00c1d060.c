/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c1d060; name: FUN_00c1d060
 */


ulong FUN_00c1d060(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong unaff_x21;
  
  uVar3 = 0;
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_01562e70();
    nn::os::GetSystemTick();
    lVar2 = nn::os::ConvertToTimeSpan();
    DAT_02a56de0 = lVar2 - DAT_02a56dd8;
    if (((double)DAT_02a56de0 / DAT_01cd50a0 < 1.0) ||
       (uVar3 = FUN_01562f10(*(undefined8 *)(param_1 + 0x88)), (uVar3 & 1) == 0)) {
      uVar3 = 0;
    }
    else {
      iVar1 = FUN_01562f20(*(undefined8 *)(param_1 + 0x88));
      lVar2 = *(long *)(param_1 + 0x88);
      unaff_x21 = (ulong)(iVar1 == 2);
      *(undefined8 *)(param_1 + 0x88) = 0;
      if (lVar2 != 0) {
        FUN_01562e20(lVar2);
        (**(code **)(**(long **)(param_1 + 0x90) + 0x18))
                  (*(long **)(param_1 + 0x90),lVar2,*(undefined8 *)(param_1 + 0x98),
                   *(undefined8 *)(param_1 + 0xa0));
      }
      uVar3 = 1;
    }
  }
  return uVar3 | (unaff_x21 & 0xff) << 8;
}


