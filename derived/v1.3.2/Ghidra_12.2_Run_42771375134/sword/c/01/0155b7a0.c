/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0155b7a0; name: FUN_0155b7a0
 */


void FUN_0155b7a0(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  lVar8 = param_1[1];
  lVar10 = *param_1;
  lVar7 = lVar8 - lVar10;
  if ((ulong)(param_1[2] - lVar10 >> 5) <= (ulong)(lVar7 >> 5)) {
    return;
  }
  if (lVar7 == 0) {
    puVar9 = (undefined8 *)0x0;
    if (lVar8 != lVar10) goto LAB_0155b81c;
  }
  else {
    lVar6 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],lVar7,8);
    if (lVar6 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
    lVar10 = *param_1;
    lVar8 = param_1[1];
    puVar9 = (undefined8 *)(lVar6 + (lVar7 >> 5) * 0x20);
    if (lVar8 != lVar10) {
LAB_0155b81c:
      puVar5 = PTR_DAT_02710860;
      puVar11 = puVar9;
      do {
        lVar6 = param_1[3];
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
        if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar6;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        puVar1 = (undefined8 *)(lVar8 + -0x20);
        uVar3 = *(undefined8 *)(lVar8 + -0x18);
        uVar2 = *(undefined8 *)(lVar8 + -0x10);
        uVar4 = *(undefined8 *)(lVar8 + -8);
        lVar8 = lVar8 + -0x20;
        puVar12 = puVar11 + -4;
        *puVar12 = *puVar1;
        puVar11[-2] = uVar2;
        puVar11[-1] = uVar4;
        puVar11[-3] = uVar3;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        puVar11 = puVar12;
      } while (lVar10 != lVar8);
      lVar8 = *param_1;
      lVar10 = param_1[2];
      *param_1 = (long)puVar12;
      param_1[1] = (long)puVar9;
      param_1[2] = (long)puVar9;
      goto joined_r0x0155b8e0;
    }
  }
  lVar10 = param_1[2];
  *param_1 = (long)puVar9;
  param_1[1] = (long)puVar9;
  param_1[2] = (long)puVar9;
joined_r0x0155b8e0:
  if (lVar8 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0155b8bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar8,lVar10 - lVar8,8);
  return;
}


