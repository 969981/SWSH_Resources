/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01218f90; name: FUN_01218f90
 */


void FUN_01218f90(long param_1,undefined8 param_2)

{
  size_t sVar1;
  ulong uVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  
  pvVar4 = *(void **)(param_1 + 0x40);
  lVar7 = *(long *)(param_1 + 0x48);
  if (lVar7 != 0) {
    pvVar5 = (void *)((long)pvVar4 + lVar7 * 0x28);
    lVar7 = lVar7 * 0x28;
    do {
      uVar2 = FUN_0121ae60(pvVar4,param_2);
      if ((uVar2 & 1) != 0) goto LAB_01218fe4;
      pvVar4 = (void *)((long)pvVar4 + 0x28);
      lVar7 = lVar7 + -0x28;
    } while (lVar7 != 0);
    pvVar4 = pvVar5;
LAB_01218fe4:
    lVar7 = *(long *)(param_1 + 0x48);
    pvVar5 = (void *)(*(long *)(param_1 + 0x40) + lVar7 * 0x28);
    if (pvVar4 != pvVar5) {
      sVar1 = (long)pvVar5 - ((long)pvVar4 + 0x28);
      if (sVar1 != 0) {
        memmove(pvVar4,(void *)((long)pvVar4 + 0x28),sVar1);
        lVar7 = *(long *)(param_1 + 0x48);
      }
      *(long *)(param_1 + 0x48) = lVar7 + -1;
    }
  }
  pvVar4 = *(void **)(param_1 + 0xa0);
  lVar7 = *(long *)(param_1 + 0xa8);
  if (lVar7 != 0) {
    pvVar5 = (void *)((long)pvVar4 + lVar7 * 0x28);
    lVar7 = lVar7 * 0x28;
    do {
      uVar2 = FUN_0121ae60(pvVar4,param_2);
      if ((uVar2 & 1) != 0) goto LAB_01219050;
      pvVar4 = (void *)((long)pvVar4 + 0x28);
      lVar7 = lVar7 + -0x28;
    } while (lVar7 != 0);
    pvVar4 = pvVar5;
LAB_01219050:
    lVar7 = *(long *)(param_1 + 0xa8);
    pvVar5 = (void *)(*(long *)(param_1 + 0xa0) + lVar7 * 0x28);
    if (pvVar4 != pvVar5) {
      sVar1 = (long)pvVar5 - ((long)pvVar4 + 0x28);
      if (sVar1 != 0) {
        memmove(pvVar4,(void *)((long)pvVar4 + 0x28),sVar1);
        lVar7 = *(long *)(param_1 + 0xa8);
      }
      *(long *)(param_1 + 0xa8) = lVar7 + -1;
    }
  }
  FUN_0121b1a0("add deleted record",param_2);
  lVar7 = *(long *)(param_1 + 0x100);
  lVar3 = *(long *)(param_1 + 0x108);
  if ((lVar3 != 0) && (uVar2 = FUN_0121b130(param_2,lVar7), (uVar2 & 1) == 0)) {
    lVar6 = lVar7 + lVar3 * 0x28;
    lVar3 = lVar3 * 0x28;
    do {
      lVar3 = lVar3 + -0x28;
      if (lVar3 == 0) {
        lVar7 = lVar6;
        break;
      }
      lVar7 = lVar7 + 0x28;
      uVar2 = FUN_0121b130(param_2,lVar7);
    } while ((uVar2 & 1) == 0);
  }
  if ((*(long *)(param_1 + 0x100) + *(ulong *)(param_1 + 0x108) * 0x28 == lVar7) &&
     (*(ulong *)(param_1 + 0x108) < *(ulong *)(param_1 + 0x110))) {
    FUN_01219330(param_1 + 0xc0,param_2);
    return;
  }
  return;
}


