/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0100e830; name: FUN_0100e830
 */


void FUN_0100e830(long *param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  
  if (param_2 <= (ulong)(param_1[2] - *param_1 >> 5)) {
    return;
  }
  lVar6 = param_1[1] - *param_1 >> 5;
  lVar2 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 << 5,8);
  if (lVar2 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
    puVar7 = (undefined8 *)*param_1;
    puVar8 = (undefined8 *)param_1[1];
    puVar5 = (undefined8 *)(lVar6 * 0x20);
    if (puVar8 != puVar7) goto LAB_0100e8a8;
  }
  else {
    puVar7 = (undefined8 *)*param_1;
    puVar8 = (undefined8 *)param_1[1];
    puVar5 = (undefined8 *)(lVar2 + lVar6 * 0x20);
    if (puVar8 != puVar7) {
LAB_0100e8a8:
      puVar1 = PTR_DAT_02710860;
      puVar9 = puVar5;
      do {
        lVar11 = param_1[3];
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar11;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        uVar3 = puVar8[-4];
        puVar8[-4] = 0;
        puVar10 = puVar9 + -4;
        *puVar10 = uVar3;
        uVar3 = puVar8[-3];
        uVar4 = puVar8[-1];
        puVar9[-2] = puVar8[-2];
        puVar9[-1] = uVar4;
        puVar9[-3] = uVar3;
        puVar8 = puVar8 + -4;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        puVar9 = puVar10;
      } while (puVar7 != puVar8);
      puVar7 = (undefined8 *)*param_1;
      puVar8 = (undefined8 *)param_1[1];
      goto LAB_0100e940;
    }
  }
  puVar8 = puVar7;
  puVar10 = puVar5;
LAB_0100e940:
  lVar6 = param_1[2];
  *param_1 = (long)puVar10;
  param_1[1] = (long)puVar5;
  param_1[2] = lVar2 + param_2 * 0x20;
  if (puVar8 != puVar7) {
    do {
      puVar9 = puVar8 + -4;
      puVar5 = (undefined8 *)*puVar9;
      *puVar9 = 0;
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)(puVar5);
        (**(code **)(*(long *)puVar8[-3] + 0x18))((long *)puVar8[-3],puVar5,puVar8[-2],puVar8[-1]);
      }
      puVar8 = puVar9;
    } while (puVar7 != puVar9);
  }
  if (puVar7 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0100e9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],puVar7,lVar6 - (long)puVar7,8);
  return;
}


