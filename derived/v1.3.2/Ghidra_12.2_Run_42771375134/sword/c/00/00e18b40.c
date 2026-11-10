/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e18b40; name: FUN_00e18b40
 */


void FUN_00e18b40(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = param_1[1];
  lVar6 = *param_1;
  lVar5 = lVar7 - lVar6;
  if ((ulong)((param_1[2] - lVar6 >> 2) * 0x6db6db6db6db6db7) <=
      (ulong)((lVar5 >> 2) * 0x6db6db6db6db6db7)) {
    return;
  }
  if (lVar5 == 0) {
    lVar3 = 0;
    if (lVar7 != lVar6) goto LAB_00e18bd8;
  }
  else {
    lVar3 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],lVar5,4);
    if (lVar3 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
    lVar6 = *param_1;
    lVar7 = param_1[1];
    lVar3 = lVar3 + (lVar5 >> 2) * 4;
    if (lVar7 != lVar6) {
LAB_00e18bd8:
      puVar2 = PTR_DAT_02710860;
      lVar5 = 0;
      do {
        lVar8 = param_1[3];
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
        if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar8;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
        lVar8 = lVar7 + lVar5;
        lVar1 = lVar3 + lVar5;
        lVar5 = lVar5 + -0x1c;
        *(undefined4 *)(lVar1 + -0x1c) = *(undefined4 *)(lVar8 + -0x1c);
        *(undefined2 *)(lVar1 + -0x18) = *(undefined2 *)(lVar8 + -0x18);
        *(undefined4 *)(lVar1 + -0x14) = *(undefined4 *)(lVar8 + -0x14);
        *(undefined1 *)(lVar1 + -0x10) = *(undefined1 *)(lVar8 + -0x10);
        *(undefined1 *)(lVar1 + -0xf) = *(undefined1 *)(lVar8 + -0xf);
        *(undefined4 *)(lVar1 + -0xc) = *(undefined4 *)(lVar8 + -0xc);
        *(undefined4 *)(lVar1 + -8) = *(undefined4 *)(lVar8 + -8);
        *(undefined4 *)(lVar1 + -4) = *(undefined4 *)(lVar8 + -4);
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      } while (lVar6 - lVar7 != lVar5);
      lVar7 = *param_1;
      *param_1 = lVar3 + lVar5;
      param_1[1] = lVar3;
      lVar6 = param_1[2];
      param_1[2] = lVar3;
      goto joined_r0x00e18cdc;
    }
  }
  *param_1 = lVar3;
  param_1[1] = lVar3;
  lVar6 = param_1[2];
  param_1[2] = lVar3;
joined_r0x00e18cdc:
  if (lVar7 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00e18cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar7,lVar6 - lVar7,4);
  return;
}


