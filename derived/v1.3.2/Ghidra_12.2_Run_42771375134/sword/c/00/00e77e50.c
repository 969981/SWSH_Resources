/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e77e50; name: FUN_00e77e50
 */


undefined8 FUN_00e77e50(long *param_1,long *param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  long extraout_var_00;
  long local_58;
  long local_48;
  
  puVar3 = PTR_DAT_027194d8;
  puVar10 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  for (puVar9 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb0); puVar9 != puVar10;
      puVar9 = puVar9 + 1) {
    plVar6 = (long *)*puVar9;
    if ((plVar6 != (long *)0x0 && plVar6[0x34] == *param_1) &&
       (uVar4 = (**(code **)(*plVar6 + 0x88))(plVar6), (uVar4 & 1) == 0)) {
      (**(code **)(plVar6[9] + 0x10))();
      lVar5 = *(long *)puVar3;
      puVar9 = *(undefined8 **)(lVar5 + 0xb0);
      puVar10 = *(undefined8 **)(lVar5 + 0xb8);
      if (puVar9 == puVar10) goto LAB_00e77f48;
      goto LAB_00e77edc;
    }
  }
  plVar6 = (long *)0x0;
  lVar5 = *(long *)puVar3;
  puVar9 = *(undefined8 **)(lVar5 + 0xb0);
  puVar10 = *(undefined8 **)(lVar5 + 0xb8);
  if (puVar9 == puVar10) {
LAB_00e77f48:
    plVar8 = (long *)0x0;
    if (plVar6 != (long *)0x0) goto LAB_00e77f50;
LAB_00e77f1c:
    uVar7 = 0;
  }
  else {
LAB_00e77edc:
    do {
      plVar8 = (long *)*puVar9;
      if ((plVar8 != (long *)0x0 && plVar8[0x34] == *param_2) &&
         (uVar4 = (**(code **)(*plVar8 + 0x88))(plVar8), (uVar4 & 1) == 0)) {
        (**(code **)(plVar8[9] + 0x10))();
        goto joined_r0x00e77fd0;
      }
      puVar9 = puVar9 + 1;
    } while (puVar10 != puVar9);
    plVar8 = (long *)0x0;
joined_r0x00e77fd0:
    if (plVar6 == (long *)0x0) goto LAB_00e77f1c;
LAB_00e77f50:
    if (plVar8 == (long *)0x0) {
      uVar7 = 0;
      goto LAB_00e78058;
    }
    uVar11 = FUN_00a92fd0((float)plVar8[0x16] - (float)plVar6[0x16],
                          (float)plVar8[0x17] - (float)plVar6[0x17]);
    FUN_00a92cd0(uVar11,0,0);
    plVar1 = (long *)plVar6[0x3e];
    *(undefined1 *)(plVar6 + 0x18) = 1;
    plVar6[0x15] = extraout_var_00;
    plVar6[0x14] = CONCAT44(extraout_var,extraout_s0);
    plVar2 = (long *)plVar6[0x3d];
    do {
      if (plVar2 == plVar1) goto joined_r0x00e77fb0;
      lVar5 = *plVar2;
      uVar4 = FUN_00df2e00(lVar5 + 0x50);
      plVar2 = plVar2 + 1;
    } while ((uVar4 & 1) == 0);
    FUN_00df0870(lVar5);
joined_r0x00e77fb0:
    if ((param_3 & 1) != 0) {
      (**(code **)(*plVar6 + 0x10))(&local_58,plVar6);
      lVar5 = local_58;
      local_58 = 0;
      local_48 = lVar5;
      FUN_00e77910(&local_48);
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
        local_48 = 0;
      }
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        local_58 = 0;
      }
    }
    uVar7 = 1;
  }
  if (plVar8 != (long *)0x0) {
    (**(code **)(plVar8[9] + 0x18))(plVar8 + 9);
  }
  if (plVar6 == (long *)0x0) {
    return uVar7;
  }
LAB_00e78058:
  (**(code **)(plVar6[9] + 0x18))(plVar6 + 9);
  return uVar7;
}


