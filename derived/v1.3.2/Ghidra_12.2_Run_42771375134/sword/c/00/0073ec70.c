/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0073ec70; name: FUN_0073ec70
 */


ulong FUN_0073ec70(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_240 [496];
  
  uVar3 = *(ulong *)(param_1 + 0x7c0);
  uVar2 = ((long)(uVar3 - *(long *)(param_1 + 0x7b8)) >> 4) * 0xbdef7bdf;
  if ((int)uVar2 != 0) {
    lVar6 = 0;
    uVar4 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0x7b8) + lVar6;
      if ((*(long *)(lVar1 + 0x48) == 0) && (*(long *)(lVar1 + 0x150) == 0)) {
        FUN_0071c9a0(auStack_240,param_2);
        FUN_007185f0(*(long *)(param_1 + 0x7b8) + lVar6,auStack_240);
        FUN_00784490(auStack_240);
        uVar2 = uVar4 & 0xffffffff;
        goto LAB_0073ed90;
      }
      uVar4 = uVar4 + 1;
      lVar6 = lVar6 + 0x1f0;
    } while (uVar4 < (uVar2 & 0xffffffff));
  }
  if (uVar3 < *(ulong *)(param_1 + 0x7c8)) {
    uVar5 = *(undefined8 *)(param_1 + 2000);
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar5;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_0071c9a0(uVar3,param_2);
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    *(long *)(param_1 + 0x7c0) = *(long *)(param_1 + 0x7c0) + 0x1f0;
  }
  else {
    FUN_00741c30((long *)(param_1 + 0x7b8),param_2);
  }
LAB_0073ed90:
  return uVar2 & 0xffffffff;
}


