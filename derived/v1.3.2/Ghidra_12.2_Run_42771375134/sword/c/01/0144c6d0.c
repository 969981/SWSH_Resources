/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0144c6d0; name: FUN_0144c6d0
 */


void FUN_0144c6d0(undefined8 param_1,undefined4 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long local_60;
  long local_58;
  
  puVar2 = PTR_DAT_02710798;
  lVar6 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN_0152d930(lVar6,param_2,2);
  uVar5 = FUN_01457550();
  FUN_0152d940(lVar6,param_2,uVar5);
  lVar7 = *(long *)(*(long *)puVar2 + 0x220);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  uVar4 = FUN_0152dbe0(lVar6);
  FUN_0152d970(lVar6,param_2,uVar4);
  lVar8 = 0;
  lVar9 = 0;
  do {
    while (lVar1 = param_3 + lVar9, *(int *)(lVar1 + 0x13c) == 0) {
      FUN_01505f50(&local_58,lVar7,*(undefined2 *)(lVar1 + 0x140),*(undefined2 *)(lVar1 + 0x142),
                   param_4);
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
      }
      lVar8 = local_58;
      local_60 = local_58;
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
      }
      FUN_0152d990(lVar6,uVar4,&local_60);
      if (local_60 != 0) {
        (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
        local_60 = 0;
      }
      FUN_01507230(lVar7,*(undefined2 *)(lVar1 + 0x140),*(undefined2 *)(lVar1 + 0x142),param_4);
      bVar3 = lVar9 == -0xe8;
      lVar9 = lVar9 + -8;
      if (bVar3) goto LAB_0144c82c;
    }
    bVar3 = lVar9 != -0xe8;
    lVar9 = lVar9 + -8;
  } while (bVar3);
LAB_0144c82c:
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  return;
}


