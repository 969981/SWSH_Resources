/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006c22b0; name: FUN_006c22b0
 */


void FUN_006c22b0(long *param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  
  lVar4 = *param_1;
  if ((ulong)((param_1[2] - lVar4 >> 4) * -0x3333333333333333) < param_2) {
    lVar6 = param_1[1];
    lVar2 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 * 0x50,0x10);
    if (lVar2 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
    puVar1 = PTR_DAT_02710860;
    puVar7 = (undefined8 *)(lVar2 + (lVar6 - lVar4 >> 4) * 0x10);
    lVar4 = *param_1;
    lVar6 = param_1[1];
    if (lVar6 == lVar4) {
      puVar9 = puVar7;
    }
    else {
      puVar8 = puVar7;
      do {
        lVar10 = param_1[3];
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar10;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        uVar5 = *(undefined8 *)(lVar6 + -0x48);
        puVar9 = puVar8 + -10;
        *puVar9 = *(undefined8 *)(lVar6 + -0x50);
        puVar8[-9] = uVar5;
        uVar5 = *(undefined8 *)(lVar6 + -0x38);
        puVar8[-5] = *(undefined8 *)(lVar6 + -0x28);
        puVar8[-7] = uVar5;
        uVar5 = *(undefined8 *)(lVar6 + -0x18);
        puVar8[-1] = *(undefined8 *)(lVar6 + -8);
        puVar8[-3] = uVar5;
        uVar5 = *(undefined8 *)(lVar6 + -0x40);
        puVar8[-6] = *(undefined8 *)(lVar6 + -0x30);
        puVar8[-8] = uVar5;
        uVar5 = *(undefined8 *)(lVar6 + -0x20);
        puVar8[-2] = *(undefined8 *)(lVar6 + -0x10);
        puVar8[-4] = uVar5;
        lVar6 = lVar6 + -0x50;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
        puVar8 = puVar9;
      } while (lVar4 != lVar6);
      lVar4 = *param_1;
    }
    lVar6 = param_1[2];
    param_1[2] = lVar2 + param_2 * 0x50;
    *param_1 = (long)puVar9;
    param_1[1] = (long)puVar7;
    if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x006c2438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar4,lVar6 - lVar4,0x10);
      return;
    }
  }
  return;
}


