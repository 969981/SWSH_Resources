/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dcde30; name: FUN_00dcde30
 */


void FUN_00dcde30(long *param_1)

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
  
  puVar6 = (undefined8 *)param_1[1];
  puVar8 = (undefined8 *)*param_1;
  lVar4 = (long)puVar6 - (long)puVar8;
  if ((ulong)(param_1[2] - (long)puVar8 >> 4) <= (ulong)(lVar4 >> 4)) {
    return;
  }
  if (lVar4 == 0) {
    puVar7 = (undefined8 *)0x0;
    if (puVar6 != puVar8) goto LAB_00dcdeac;
  }
  else {
    lVar3 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],lVar4,8);
    if (lVar3 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
    puVar8 = (undefined8 *)*param_1;
    puVar6 = (undefined8 *)param_1[1];
    puVar7 = (undefined8 *)(lVar3 + (lVar4 >> 4) * 0x10);
    if (puVar6 != puVar8) {
LAB_00dcdeac:
      puVar2 = PTR_DAT_02710860;
      puVar9 = puVar7;
      do {
        lVar3 = param_1[3];
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
        if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar3;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
        puVar5 = puVar6 + -2;
        uVar1 = puVar6[-1];
        puVar10 = puVar9 + -2;
        *puVar10 = *puVar5;
        puVar9[-1] = uVar1;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
        puVar6 = puVar5;
        puVar9 = puVar10;
      } while (puVar8 != puVar5);
      puVar6 = (undefined8 *)*param_1;
      lVar4 = param_1[2];
      *param_1 = (long)puVar10;
      param_1[1] = (long)puVar7;
      param_1[2] = (long)puVar7;
      goto joined_r0x00dcdf64;
    }
  }
  lVar4 = param_1[2];
  *param_1 = (long)puVar7;
  param_1[1] = (long)puVar7;
  param_1[2] = (long)puVar7;
joined_r0x00dcdf64:
  if (puVar6 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00dcdf40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],puVar6,lVar4 - (long)puVar6,8);
  return;
}


