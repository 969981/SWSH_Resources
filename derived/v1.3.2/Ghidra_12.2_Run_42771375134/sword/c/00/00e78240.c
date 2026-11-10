/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e78240; name: FUN_00e78240
 */


undefined8 FUN_00e78240(long *param_1,long *param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long local_50;
  long local_48;
  
  puVar1 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  puVar2 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  while( true ) {
    if (puVar1 == puVar2) {
      return 0;
    }
    plVar8 = (long *)*puVar1;
    if ((plVar8 != (long *)0x0 && plVar8[0x34] == *param_1) &&
       (uVar5 = (**(code **)(*plVar8 + 0x88))(plVar8), (uVar5 & 1) == 0)) break;
    puVar1 = puVar1 + 1;
  }
  plVar7 = plVar8 + 9;
  (**(code **)(*plVar7 + 0x10))(plVar7);
  plVar8[0x15] = param_2[1];
  plVar3 = (long *)plVar8[0x3e];
  lVar6 = *param_2;
  *(undefined1 *)(plVar8 + 0x18) = 1;
  plVar8[0x14] = lVar6;
  plVar4 = (long *)plVar8[0x3d];
  do {
    if (plVar4 == plVar3) goto joined_r0x00e78310;
    lVar6 = *plVar4;
    uVar5 = FUN_00df2e00(lVar6 + 0x50);
    plVar4 = plVar4 + 1;
  } while ((uVar5 & 1) == 0);
  FUN_00df0870(lVar6);
joined_r0x00e78310:
  if ((param_3 & 1) != 0) {
    (**(code **)(*plVar8 + 0x10))(&local_50,plVar8);
    lVar6 = local_50;
    local_50 = 0;
    local_48 = lVar6;
    FUN_00e77910(&local_48);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
      local_48 = 0;
    }
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
  }
  (**(code **)(*plVar7 + 0x18))(plVar7);
  return 1;
}


