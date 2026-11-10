/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dbd850; name: FUN_00dbd850
 */


void FUN_00dbd850(long *param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  
  if (param_2 <= (ulong)(param_1[2] - *param_1 >> 3)) {
    return;
  }
  lVar4 = param_1[1] - *param_1 >> 3;
  lVar2 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 << 3,8);
  if (lVar2 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
    puVar5 = (undefined8 *)(lVar4 * 8);
    lVar4 = *param_1;
    lVar7 = param_1[1];
    if (lVar7 != lVar4) goto LAB_00dbd8c8;
  }
  else {
    puVar5 = (undefined8 *)(lVar2 + lVar4 * 8);
    lVar4 = *param_1;
    lVar7 = param_1[1];
    if (lVar7 != lVar4) {
LAB_00dbd8c8:
      puVar1 = PTR_DAT_02710860;
      puVar6 = puVar5;
      do {
        lVar8 = param_1[3];
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar8;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        puVar6 = puVar6 + -1;
        *puVar6 = *(undefined8 *)(lVar7 + -8);
        lVar7 = lVar7 + -8;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      } while (lVar4 != lVar7);
      lVar4 = *param_1;
      goto LAB_00dbd948;
    }
  }
  puVar6 = puVar5;
LAB_00dbd948:
  lVar7 = param_1[2];
  param_1[2] = lVar2 + param_2 * 8;
  *param_1 = (long)puVar6;
  param_1[1] = (long)puVar5;
  if (lVar4 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00dbd98c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar4,lVar7 - lVar4,8);
  return;
}


