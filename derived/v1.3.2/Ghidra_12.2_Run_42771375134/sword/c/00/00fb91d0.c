/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fb91d0; name: FUN_00fb91d0
 */


void FUN_00fb91d0(long *param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  
  lVar4 = *param_1;
  if ((ulong)((param_1[2] - lVar4 >> 4) * -0x5555555555555555) < param_2) {
    lVar7 = param_1[1];
    lVar2 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 * 0x30,0x10);
    if (lVar2 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
    puVar1 = PTR_DAT_02710860;
    puVar9 = (undefined8 *)(lVar2 + (lVar7 - lVar4 >> 4) * 0x10);
    lVar4 = *param_1;
    lVar7 = param_1[1];
    if (lVar7 == lVar4) {
      puVar11 = puVar9;
    }
    else {
      puVar10 = puVar9;
      do {
        lVar12 = param_1[3];
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar12;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        uVar5 = *(undefined8 *)(lVar7 + -0x28);
        puVar11 = puVar10 + -6;
        *puVar11 = *(undefined8 *)(lVar7 + -0x30);
        puVar10[-5] = uVar5;
        uVar5 = *(undefined8 *)(lVar7 + -0x18);
        puVar10[-1] = *(undefined8 *)(lVar7 + -8);
        uVar6 = *(undefined8 *)(lVar7 + -0x20);
        uVar8 = *(undefined8 *)(lVar7 + -0x10);
        puVar10[-3] = uVar5;
        puVar10[-2] = uVar8;
        puVar10[-4] = uVar6;
        lVar7 = lVar7 + -0x30;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
        puVar10 = puVar11;
      } while (lVar4 != lVar7);
      lVar4 = *param_1;
    }
    lVar7 = param_1[2];
    param_1[2] = lVar2 + param_2 * 0x30;
    *param_1 = (long)puVar11;
    param_1[1] = (long)puVar9;
    if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00fb9334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar4,lVar7 - lVar4,0x10);
      return;
    }
  }
  return;
}


