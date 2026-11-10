/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007b4300; name: FUN_007b4300
 */


void FUN_007b4300(long param_1,short param_2)

{
  short *psVar1;
  ulong uVar2;
  short *psVar3;
  short *psVar4;
  long lVar5;
  undefined8 uVar6;
  short local_44 [2];
  undefined1 auStack_40 [8];
  short *local_38;
  
  psVar3 = *(short **)(param_1 + 0x2b0);
  uVar2 = *(ulong *)(param_1 + 0x2b8);
  local_38 = psVar3 + uVar2;
  if ((uVar2 != 0) && (*psVar3 != param_2)) {
    lVar5 = uVar2 * 2;
    psVar4 = psVar3;
    do {
      lVar5 = lVar5 + -2;
      if (lVar5 == 0) goto LAB_007b436c;
      psVar3 = psVar4 + 1;
      psVar1 = psVar4 + 1;
      psVar4 = psVar3;
    } while (*psVar1 != param_2);
  }
  if (local_38 == psVar3) {
LAB_007b436c:
    local_44[0] = param_2;
    if (uVar2 < *(ulong *)(param_1 + 0x2c0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x270);
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar6;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      *local_38 = param_2;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      *(long *)(param_1 + 0x2b8) = *(long *)(param_1 + 0x2b8) + 1;
    }
    else {
      FUN_007b66c0(auStack_40,(undefined8 *)(param_1 + 0x270),&local_38,1,local_44);
    }
  }
  return;
}


