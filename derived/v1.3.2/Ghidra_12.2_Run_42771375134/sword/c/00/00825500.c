/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00825500; name: FUN_00825500
 */


void FUN_00825500(long *param_1)

{
  int iVar1;
  uint *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  
  iVar1 = *(int *)(PTR_DAT_02717150 + (ulong)*(byte *)(param_1 + 1) * 4);
  if (*(char *)((long)param_1 + 9) == '\0') {
    if (iVar1 == 10) {
      if ((long *)*param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008255b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)*param_1 + 8))();
        return;
      }
    }
    else if ((iVar1 == 9) && (pbVar3 = (byte *)*param_1, pbVar3 != (byte *)0x0)) {
      if ((*pbVar3 & 1) != 0) {
        operator_delete(*(void **)(pbVar3 + 0x10));
      }
      goto LAB_00825628;
    }
switchD_00825544_default:
    return;
  }
  switch(iVar1) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    pbVar3 = (byte *)*param_1;
    if (pbVar3 == (byte *)0x0) {
      return;
    }
    puVar2 = *(uint **)(pbVar3 + 8);
    if ((puVar2 == (uint *)0x0) || (*(long *)puVar2 != 0)) goto LAB_00825628;
    break;
  case 9:
    pbVar3 = (byte *)*param_1;
    if (pbVar3 == (byte *)0x0) {
      return;
    }
    puVar2 = *(uint **)(pbVar3 + 0x10);
    if ((puVar2 == (uint *)0x0) || (*(long *)pbVar3 != 0)) goto LAB_00825628;
    uVar5 = (ulong)*puVar2;
    if (0 < (int)*puVar2) {
      do {
        puVar2 = puVar2 + 2;
        pbVar4 = *(byte **)puVar2;
        if (pbVar4 != (byte *)0x0) {
          if ((*pbVar4 & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + 0x10));
          }
          operator_delete(pbVar4);
        }
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
LAB_0082567c:
      puVar2 = *(uint **)(pbVar3 + 0x10);
      if (puVar2 == (uint *)0x0) goto LAB_00825628;
    }
    break;
  case 10:
    pbVar3 = (byte *)*param_1;
    if (pbVar3 == (byte *)0x0) {
      return;
    }
    puVar2 = *(uint **)(pbVar3 + 0x10);
    if ((puVar2 == (uint *)0x0) || (*(long *)pbVar3 != 0)) goto LAB_00825628;
    uVar5 = (ulong)*puVar2;
    if (0 < (int)*puVar2) {
      do {
        puVar2 = puVar2 + 2;
        if (*(long **)puVar2 != (long *)0x0) {
          (**(code **)(**(long **)puVar2 + 8))();
        }
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      goto LAB_0082567c;
    }
    break;
  default:
    goto switchD_00825544_default;
  }
  operator_delete__(puVar2);
LAB_00825628:
  operator_delete(pbVar3);
  return;
}


