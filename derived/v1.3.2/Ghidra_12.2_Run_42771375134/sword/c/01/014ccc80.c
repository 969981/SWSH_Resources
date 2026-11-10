/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014ccc80; name: FUN_014ccc80
 */


void FUN_014ccc80(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long local_58;
  
  puVar2 = PTR_DAT_02710788;
  lVar5 = 0;
  lVar6 = 0x2b78;
  lVar7 = 0x2b48;
  lVar8 = 0x12;
  do {
    lVar1 = param_1 + lVar5;
    FUN_006e4c50(lVar1 + 0x88,param_1 + lVar7);
    FUN_006dccd0(&local_58,*(undefined8 *)puVar2,1,param_1 + lVar7,0,
                 *(undefined8 *)(param_1 + 0x2b40),0);
    if (*(long *)(lVar1 + 200) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar1 + 200) + 0x48) + 0x18))();
      *(undefined8 *)(lVar1 + 200) = 0;
    }
    lVar3 = local_58;
    *(long *)(lVar1 + 200) = local_58;
    if (local_58 != 0) {
      plVar4 = (long *)(local_58 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      if ((*(long *)(lVar1 + 0xd0) != 0) || (*(long *)(lVar1 + 0x150) != 0)) {
        FUN_006e1e70(lVar3,lVar1 + 0xc0,1);
      }
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    FUN_010138d0(&local_58,*(undefined8 *)puVar2,1,param_1 + lVar6,0,
                 *(undefined8 *)(param_1 + 0x2b40),0);
    if (*(long *)(lVar1 + 0x1d8) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar1 + 0x1d8) + 0x48) + 0x18))();
      *(undefined8 *)(lVar1 + 0x1d8) = 0;
    }
    lVar3 = local_58;
    *(long *)(lVar1 + 0x1d8) = local_58;
    if (local_58 != 0) {
      plVar4 = (long *)(local_58 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      if ((*(long *)(lVar1 + 0x1e0) != 0) || (*(long *)(lVar1 + 0x260) != 0)) {
        FUN_006e1e70(lVar3,lVar1 + 0x1d0,1);
      }
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    lVar5 = lVar5 + 0x260;
    lVar6 = lVar6 + 0x60;
    lVar7 = lVar7 + 0x60;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  *(undefined4 *)(param_1 + 0x78) = 1;
  return;
}


