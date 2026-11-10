/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e189e0; name: FUN_00e189e0
 */


void FUN_00e189e0(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  
  lVar4 = param_1[1];
  lVar6 = *param_1;
  lVar3 = lVar4 - lVar6;
  if ((ulong)(param_1[2] - lVar6 >> 3) <= (ulong)(lVar3 >> 3)) {
    return;
  }
  if (lVar3 == 0) {
    puVar5 = (undefined8 *)0x0;
    if (lVar4 != lVar6) goto LAB_00e18a5c;
  }
  else {
    lVar2 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],lVar3,8);
    if (lVar2 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
    lVar6 = *param_1;
    lVar4 = param_1[1];
    puVar5 = (undefined8 *)(lVar2 + (lVar3 >> 3) * 8);
    if (lVar4 != lVar6) {
LAB_00e18a5c:
      puVar1 = PTR_DAT_02710860;
      puVar7 = puVar5;
      do {
        lVar2 = param_1[3];
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar2;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        puVar7 = puVar7 + -1;
        *puVar7 = *(undefined8 *)(lVar4 + -8);
        lVar4 = lVar4 + -8;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      } while (lVar6 != lVar4);
      lVar4 = *param_1;
      lVar6 = param_1[2];
      *param_1 = (long)puVar7;
      param_1[1] = (long)puVar5;
      param_1[2] = (long)puVar5;
      goto joined_r0x00e18b14;
    }
  }
  lVar6 = param_1[2];
  *param_1 = (long)puVar5;
  param_1[1] = (long)puVar5;
  param_1[2] = (long)puVar5;
joined_r0x00e18b14:
  if (lVar4 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00e18af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar4,lVar6 - lVar4,8);
  return;
}


