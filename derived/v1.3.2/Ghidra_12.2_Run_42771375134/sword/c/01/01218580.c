/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01218580; name: FUN_01218580
 */


void FUN_01218580(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  
  lVar8 = *param_1;
  if ((ulong)((param_1[2] - lVar8 >> 3) * -0x3333333333333333) < param_2) {
    lVar9 = param_1[1];
    lVar6 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 * 0x28,8);
    if (lVar6 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
    puVar5 = PTR_DAT_02710860;
    puVar10 = (undefined8 *)(lVar6 + (lVar9 - lVar8 >> 3) * 8);
    lVar8 = *param_1;
    lVar9 = param_1[1];
    if (lVar9 == lVar8) {
      puVar12 = puVar10;
    }
    else {
      puVar11 = puVar10;
      do {
        lVar13 = param_1[3];
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
        if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar13;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        puVar12 = puVar11 + -5;
        *puVar12 = *(undefined8 *)(lVar9 + -0x28);
        uVar2 = *(undefined8 *)(lVar9 + -0x20);
        uVar3 = *(undefined8 *)(lVar9 + -0x18);
        puVar1 = (undefined8 *)(lVar9 + -0x10);
        uVar4 = *(undefined8 *)(lVar9 + -8);
        lVar9 = lVar9 + -0x28;
        puVar11[-2] = *puVar1;
        puVar11[-1] = uVar4;
        puVar11[-4] = uVar2;
        puVar11[-3] = uVar3;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        puVar11 = puVar12;
      } while (lVar8 != lVar9);
      lVar8 = *param_1;
    }
    lVar9 = param_1[2];
    param_1[2] = lVar6 + param_2 * 0x28;
    *param_1 = (long)puVar12;
    param_1[1] = (long)puVar10;
    if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x012186d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar8,lVar9 - lVar8,8);
      return;
    }
  }
  return;
}


