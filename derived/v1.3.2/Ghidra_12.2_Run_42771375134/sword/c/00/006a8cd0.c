/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006a8cd0; name: FUN_006a8cd0
 */


void FUN_006a8cd0(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  
  if (param_2 <= (ulong)(param_1[2] - *param_1 >> 4)) {
    return;
  }
  lVar4 = param_1[1] - *param_1 >> 4;
  lVar3 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 << 4,8);
  if (lVar3 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
    puVar6 = (undefined8 *)(lVar4 * 0x10);
    puVar5 = (undefined8 *)*param_1;
    puVar9 = (undefined8 *)param_1[1];
    if (puVar9 != puVar5) goto LAB_006a8d48;
  }
  else {
    puVar6 = (undefined8 *)(lVar3 + lVar4 * 0x10);
    puVar5 = (undefined8 *)*param_1;
    puVar9 = (undefined8 *)param_1[1];
    if (puVar9 != puVar5) {
LAB_006a8d48:
      puVar2 = PTR_DAT_02710860;
      puVar7 = puVar6;
      do {
        lVar11 = param_1[3];
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
        if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar11;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
        puVar10 = puVar9 + -2;
        uVar1 = puVar9[-1];
        puVar8 = puVar7 + -2;
        *puVar8 = *puVar10;
        puVar7[-1] = uVar1;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
        puVar7 = puVar8;
        puVar9 = puVar10;
      } while (puVar5 != puVar10);
      puVar5 = (undefined8 *)*param_1;
      goto LAB_006a8dc8;
    }
  }
  puVar8 = puVar6;
LAB_006a8dc8:
  lVar4 = param_1[2];
  param_1[2] = lVar3 + param_2 * 0x10;
  *param_1 = (long)puVar8;
  param_1[1] = (long)puVar6;
  if (puVar5 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006a8e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],puVar5,lVar4 - (long)puVar5,8);
  return;
}


