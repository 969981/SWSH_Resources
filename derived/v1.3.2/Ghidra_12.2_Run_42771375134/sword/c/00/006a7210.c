/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006a7210; name: FUN_006a7210
 */


void FUN_006a7210(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_02710860;
  lVar3 = *param_1;
  if (param_1[1] == lVar3) {
    lVar4 = param_2[1];
  }
  else {
    lVar4 = param_2[1];
    lVar5 = param_1[1];
    do {
      lVar6 = param_1[3];
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar6;
      lVar6 = lVar5 + -0xa8;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      FUN_006a7510(lVar4 + -0xa8,lVar6);
      *(undefined8 *)(lVar4 + -0x78) = *(undefined8 *)(lVar5 + -0x78);
      FUN_006a7510(lVar4 + -0x70,lVar5 + -0x70);
      *(undefined8 *)(lVar4 + -0x40) = *(undefined8 *)(lVar5 + -0x40);
      FUN_006a7510(lVar4 + -0x38,lVar5 + -0x38);
      *(undefined8 *)(lVar4 + -8) = *(undefined8 *)(lVar5 + -8);
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      lVar4 = param_2[1] + -0xa8;
      param_2[1] = lVar4;
      lVar5 = lVar6;
    } while (lVar3 != lVar6);
    lVar3 = *param_1;
  }
  *param_1 = lVar4;
  param_2[1] = lVar3;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return;
}


