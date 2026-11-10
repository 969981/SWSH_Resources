/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e79830; name: FUN_00e79830
 */


undefined8
FUN_00e79830(undefined8 param_1,long *param_2,long *param_3,undefined4 param_4,uint param_5,
            uint param_6,uint param_7,byte param_8)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long *local_78;
  undefined1 auStack_68 [4];
  undefined4 local_64;
  
  puVar1 = PTR_DAT_027194d8;
  plVar5 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  local_64 = param_4;
  for (plVar10 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0); plVar10 != plVar5;
      plVar10 = plVar10 + 1) {
    lVar9 = *plVar10;
    plVar2 = (long *)(*(code *)**(undefined8 **)(lVar9 + 0x50))((undefined8 *)(lVar9 + 0x50));
    lVar3 = FUN_0156b190();
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)lVar3) {
        if ((*(long *)(lVar9 + 0x1a0) == *param_2) &&
           (uVar4 = (**(code **)(*(long *)*plVar10 + 0x88))(), (uVar4 & 1) == 0)) {
          (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))((long *)(lVar9 + 0x48));
          lVar3 = *(long *)puVar1;
          puVar7 = *(undefined8 **)(lVar3 + 0xb0);
          puVar8 = *(undefined8 **)(lVar3 + 0xb8);
          if (puVar7 != puVar8) goto LAB_00e79904;
          goto LAB_00e79ad0;
        }
        break;
      }
    }
  }
  lVar9 = 0;
  lVar3 = *(long *)puVar1;
  puVar7 = *(undefined8 **)(lVar3 + 0xb0);
  puVar8 = *(undefined8 **)(lVar3 + 0xb8);
  if (puVar7 == puVar8) {
LAB_00e79ad0:
    plVar10 = (long *)0x0;
joined_r0x00e79ad4:
    if (lVar9 == 0) goto LAB_00e79944;
LAB_00e79964:
    if (plVar10 == (long *)0x0) {
      uVar6 = 0;
      goto LAB_00e79a74;
    }
    if (*(long *)(lVar9 + 0x1d8) == 0) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = (long *)FUN_00e87000(auStack_68);
      if (plVar5 != (long *)0x0) {
        (**(code **)(plVar5[9] + 0x10))();
      }
      plVar5[0xe] = lVar9;
      (**(code **)(*plVar5 + 0x38))(plVar5);
      uVar6 = *(undefined8 *)(lVar9 + 0x1e8);
      local_78 = plVar5;
      if (plVar5 != (long *)0x0) {
        (**(code **)(plVar5[9] + 0x10))();
      }
      FUN_01591030(lVar9 + 0x1e8,uVar6,&local_78);
      if (local_78 != (long *)0x0) {
        (**(code **)(local_78[9] + 0x18))();
        local_78 = (long *)0x0;
      }
      (**(code **)(plVar5[9] + 0x18))();
    }
    FUN_00df4740(param_1,plVar5,lVar9 + 0xb0,lVar9 + 0xa0,plVar10 + 0x16,local_64,param_5 & 1,
                 param_6 & 1,param_7 & 1,param_8 & 1);
    FUN_00e79ae0(param_2,param_3,2,7,0,0);
    uVar6 = 1;
  }
  else {
LAB_00e79904:
    do {
      plVar10 = (long *)*puVar7;
      if ((plVar10 != (long *)0x0 && plVar10[0x34] == *param_3) &&
         (uVar4 = (**(code **)(*plVar10 + 0x88))(plVar10), (uVar4 & 1) == 0)) {
        (**(code **)(plVar10[9] + 0x10))();
        goto joined_r0x00e79ad4;
      }
      puVar7 = puVar7 + 1;
    } while (puVar8 != puVar7);
    plVar10 = (long *)0x0;
    if (lVar9 != 0) goto LAB_00e79964;
LAB_00e79944:
    uVar6 = 0;
    if (plVar10 == (long *)0x0) {
      return 0;
    }
  }
  (**(code **)(plVar10[9] + 0x18))(plVar10 + 9);
  if (lVar9 == 0) {
    return uVar6;
  }
LAB_00e79a74:
  (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  return uVar6;
}


