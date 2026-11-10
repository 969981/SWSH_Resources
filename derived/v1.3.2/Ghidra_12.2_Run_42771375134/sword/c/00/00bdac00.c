/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bdac00; name: FUN_00bdac00
 */


void FUN_00bdac00(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x18d8) == 0) {
    *(undefined8 *)(param_1 + 0x18d8) = 0;
    return;
  }
  FUN_011f48a0();
  lVar5 = *(long *)PTR_DAT_02710880;
  if (lVar5 == 0) goto LAB_00bdacf4;
  lVar6 = *(long *)(param_1 + 0x18d8);
  if (lVar6 == 0) {
    lVar3 = 0;
LAB_00bdacc4:
    lVar2 = 0;
    bVar1 = true;
    lVar6 = *(long *)(lVar5 + 200);
    if (lVar6 == 0) goto joined_r0x00bdacdc;
LAB_00bdac9c:
    if (*(int *)(lVar6 + 0x54) == 0) goto joined_r0x00bdacdc;
    if (lVar2 != *(long *)(lVar5 + 0xd0)) goto LAB_00bdace0;
LAB_00bdad3c:
    plVar4 = (long *)(lVar5 + 200);
    if (*plVar4 != 0) {
      (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
      *plVar4 = 0;
    }
    *plVar4 = 0;
    *(undefined8 *)(lVar5 + 0xd0) = 0;
    if (bVar1) goto LAB_00bdacf4;
  }
  else {
    lVar3 = *(long *)(lVar6 + 0x58);
    if (lVar3 == 0) goto LAB_00bdacc4;
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    bVar1 = false;
    lVar2 = 0;
    if (*(int *)(lVar3 + 0x54) != 0) {
      lVar2 = lVar6 + 0x60;
    }
    lVar6 = *(long *)(lVar5 + 200);
    if (lVar6 != 0) goto LAB_00bdac9c;
joined_r0x00bdacdc:
    if (lVar2 == 0) goto LAB_00bdad3c;
LAB_00bdace0:
    if (bVar1) goto LAB_00bdacf4;
  }
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
LAB_00bdacf4:
  lVar5 = *(long *)(param_1 + 0x18d8);
  *(undefined8 *)(param_1 + 0x18d8) = 0;
  if (lVar5 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00bdad18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  return;
}


