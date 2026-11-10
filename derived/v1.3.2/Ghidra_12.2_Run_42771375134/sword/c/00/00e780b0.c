/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e780b0; name: FUN_00e780b0
 */


undefined8 FUN_00e780b0(float param_1,float param_2,long *param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined4 uVar9;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  long extraout_var_00;
  long local_60;
  long local_58;
  
  puVar1 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  puVar2 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  while( true ) {
    if (puVar1 == puVar2) {
      return 0;
    }
    plVar8 = (long *)*puVar1;
    if ((plVar8 != (long *)0x0 && plVar8[0x34] == *param_3) &&
       (uVar5 = (**(code **)(*plVar8 + 0x88))(plVar8), (uVar5 & 1) == 0)) break;
    puVar1 = puVar1 + 1;
  }
  plVar7 = plVar8 + 9;
  (**(code **)(*plVar7 + 0x10))(plVar7);
  uVar9 = FUN_00a92fd0(param_1 - (float)plVar8[0x16],param_2 - (float)plVar8[0x17]);
  FUN_00a92cd0(uVar9,0,0);
  plVar3 = (long *)plVar8[0x3e];
  plVar8[0x15] = extraout_var_00;
  plVar8[0x14] = CONCAT44(extraout_var,extraout_s0);
  *(undefined1 *)(plVar8 + 0x18) = 1;
  plVar4 = (long *)plVar8[0x3d];
  do {
    if (plVar4 == plVar3) goto joined_r0x00e7819c;
    lVar6 = *plVar4;
    uVar5 = FUN_00df2e00(lVar6 + 0x50);
    plVar4 = plVar4 + 1;
  } while ((uVar5 & 1) == 0);
  FUN_00df0870(lVar6);
joined_r0x00e7819c:
  if ((param_4 & 1) != 0) {
    (**(code **)(*plVar8 + 0x10))(&local_60,plVar8);
    lVar6 = local_60;
    local_60 = 0;
    local_58 = lVar6;
    FUN_00e77910(&local_58);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
      local_58 = 0;
    }
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
    }
  }
  (**(code **)(*plVar7 + 0x18))(plVar7);
  return 1;
}


