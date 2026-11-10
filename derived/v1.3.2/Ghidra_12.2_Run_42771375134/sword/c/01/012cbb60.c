/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012cbb60; name: FUN_012cbb60
 */


void FUN_012cbb60(undefined8 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  bool bVar10;
  bool bVar11;
  long lVar12;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  
  lVar2 = FUN_012cc840();
  uVar3 = FUN_012d5170(*param_2,&local_58);
  puVar4 = (undefined8 *)FUN_0130a5f0();
  plVar8 = (long *)*puVar4;
  uVar5 = FUN_0130a600(uVar3);
  iVar1 = FUN_00884820(plVar8);
  if (iVar1 != 0) {
    uVar9 = 0;
    do {
      lVar6 = (**(code **)(*plVar8 + 0x50))(plVar8,uVar9 & 0xffffffff);
      if (((uVar5 & 1) != 0) || (uVar7 = FUN_0087b180(lVar6), (uVar7 & 1) == 0)) {
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
        }
        uVar7 = FUN_0087d610(lVar6,2);
        if ((uVar7 & 1) == 0) {
          lVar12 = *(long *)(lVar2 + 0x370);
          if (lVar12 != 0) {
            (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
          }
          local_60 = lVar6;
          if (lVar6 != 0) {
            (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
          }
          local_68 = *param_2;
          if (local_68 != 0) {
            (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
          }
          FUN_0133b0c0(&local_58,lVar12,&local_60,&local_68);
          if (local_68 != 0) {
            (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
            local_68 = 0;
          }
          if (local_60 != 0) {
            (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
            local_60 = 0;
          }
          if (lVar12 != 0) {
            (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
          }
          local_70 = local_58;
          if (local_58 != 0) {
            (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
          }
          FUN_013093c0(uVar3,&local_70);
          if (local_70 != 0) {
            (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
            local_70 = 0;
          }
          if (local_58 != 0) {
            (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
            local_58 = 0;
          }
          bVar10 = false;
          bVar11 = false;
        }
        else {
          bVar10 = true;
          bVar11 = true;
        }
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
          bVar11 = bVar10;
        }
        if ((uVar5 & 1) == 0 && !bVar11) {
          return;
        }
      }
      uVar9 = uVar9 + 1;
      uVar7 = FUN_00884820(plVar8);
    } while (uVar9 < (uVar7 & 0xffffffff));
  }
  return;
}


