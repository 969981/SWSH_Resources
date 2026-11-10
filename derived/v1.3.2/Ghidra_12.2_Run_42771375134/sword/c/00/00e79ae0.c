/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e79ae0; name: FUN_00e79ae0
 */


void FUN_00e79ae0(long *param_1,long *param_2,undefined4 param_3,undefined4 param_4,uint param_5,
                 uint param_6)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *local_70;
  long local_68;
  
  puVar1 = PTR_DAT_027194d8;
  plVar7 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  for (plVar6 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0); plVar6 != plVar7; plVar6 = plVar6 + 1)
  {
    lVar3 = *plVar6;
    uVar2 = FUN_01593610(lVar3 + 0x50);
    if ((((uVar2 & 1) != 0) && (*(long *)(lVar3 + 0x1a0) == *param_1)) &&
       (uVar2 = (**(code **)(*(long *)*plVar6 + 0x88))(), (uVar2 & 1) == 0)) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))((long *)(lVar3 + 0x48));
      lVar4 = *(long *)puVar1;
      puVar8 = *(undefined8 **)(lVar4 + 0xb0);
      puVar9 = *(undefined8 **)(lVar4 + 0xb8);
      if (puVar8 == puVar9) goto LAB_00e79ce0;
      goto LAB_00e79b88;
    }
  }
  lVar3 = 0;
  lVar4 = *(long *)puVar1;
  puVar8 = *(undefined8 **)(lVar4 + 0xb0);
  puVar9 = *(undefined8 **)(lVar4 + 0xb8);
  if (puVar8 == puVar9) {
LAB_00e79ce0:
    plVar6 = (long *)0x0;
joined_r0x00e79ce4:
    if (lVar3 == 0) goto LAB_00e79c54;
LAB_00e79bc8:
    if (plVar6 == (long *)0x0) goto LAB_00e79c70;
    plVar5 = (long *)(lVar3 + 0x48);
    local_68 = lVar3;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    plVar7 = plVar6 + 9;
    local_70 = plVar6;
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_00e7fb00(&local_68,&local_70,param_3,param_4,param_5 & 1,param_6 & 1);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    local_70 = (long *)0x0;
    (**(code **)(*plVar5 + 0x18))(plVar5);
    local_68 = 0;
  }
  else {
LAB_00e79b88:
    do {
      plVar6 = (long *)*puVar8;
      if ((plVar6 != (long *)0x0 && plVar6[0x34] == *param_2) &&
         (uVar2 = (**(code **)(*plVar6 + 0x88))(plVar6), (uVar2 & 1) == 0)) {
        (**(code **)(plVar6[9] + 0x10))();
        goto joined_r0x00e79ce4;
      }
      puVar8 = puVar8 + 1;
    } while (puVar9 != puVar8);
    plVar6 = (long *)0x0;
    if (lVar3 != 0) goto LAB_00e79bc8;
LAB_00e79c54:
    if (plVar6 == (long *)0x0) {
      return;
    }
    plVar7 = plVar6 + 9;
  }
  (**(code **)(*plVar7 + 0x18))(plVar7);
  if (lVar3 == 0) {
    return;
  }
LAB_00e79c70:
                    /* WARNING: Could not recover jumptable at 0x00e79c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  return;
}


