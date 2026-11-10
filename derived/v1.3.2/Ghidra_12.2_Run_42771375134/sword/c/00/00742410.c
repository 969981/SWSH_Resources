/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00742410; name: FUN_00742410
 */


void FUN_00742410(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  puVar1 = PTR_DAT_02710860;
  lVar4 = *param_1;
  if (param_1[1] == lVar4) {
    lVar5 = param_2[1];
  }
  else {
    lVar5 = param_2[1];
    lVar8 = param_1[1];
    do {
      lVar6 = param_1[3];
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar2 + 0x80)) {
LAB_007425a8:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar6;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      uVar3 = *(ulong *)(lVar8 + -0xe0);
      *(ulong *)(lVar5 + -0xe0) = uVar3;
      if (3 < uVar3) goto LAB_007425a8;
      lVar6 = *(long *)(lVar8 + -0xe0);
      if (lVar6 != 0) {
        lVar7 = -0x6b0;
        do {
          lVar6 = lVar6 + -1;
          FUN_0071c9a0(lVar5 + lVar7,lVar8 + lVar7);
          lVar7 = lVar7 + 0x1f0;
        } while (lVar6 != 0);
      }
      lVar6 = *(long *)(lVar8 + -0xd0);
      *(long *)(lVar5 + -0xd0) = lVar6;
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
      lVar6 = *(long *)(lVar8 + -200);
      *(long *)(lVar5 + -200) = lVar6;
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
      *(undefined4 *)(lVar5 + -0xc0) = *(undefined4 *)(lVar8 + -0xc0);
      lVar6 = *(long *)(lVar8 + -0xb8);
      *(long *)(lVar5 + -0xb8) = lVar6;
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
      lVar6 = *(long *)(lVar8 + -0xb0);
      lVar7 = lVar8 + -0x6b0;
      *(long *)(lVar5 + -0xb0) = lVar6;
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
      memcpy((void *)(lVar5 + -0xa8),(void *)(lVar8 + -0xa8),0xa4);
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      lVar5 = param_2[1] + -0x6b0;
      param_2[1] = lVar5;
      lVar8 = lVar7;
    } while (lVar7 != lVar4);
    lVar4 = *param_1;
  }
  *param_1 = lVar5;
  param_2[1] = lVar4;
  lVar4 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar4;
  lVar4 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar4;
  *param_2 = param_2[1];
  return;
}


