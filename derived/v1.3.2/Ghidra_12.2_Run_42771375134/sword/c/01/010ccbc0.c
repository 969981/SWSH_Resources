/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010ccbc0; name: FUN_010ccbc0
 */


void FUN_010ccbc0(long *param_1,long param_2,int param_3,long param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long local_68;
  
  lVar3 = *(long *)(param_2 + 0x2b0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(lVar3 + 0x2e0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(lVar3 + 0x2e8);
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  lVar7 = *(long *)(lVar3 + 0x2f0);
  if (lVar7 != 0) {
    plVar6 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  if ((param_3 - 6U < 4) && (param_4 != 0)) {
    uVar1 = FUN_008d3fc0(param_5,0);
    FUN_014c7aa0(lVar4,0,param_4,uVar1,0,0);
LAB_010ccd24:
    FUN_00ff86a0(&local_68,*(undefined8 *)(*(long *)(param_2 + 0x60) + 0xb0),0);
    lVar8 = *(long *)(local_68 + 0x60);
    if (lVar8 != 0) {
      plVar6 = (long *)(lVar8 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_0077eb10(lVar8,&UNK_02163ca0 + (long)param_3 * 8,lVar5);
      (**(code **)(*plVar6 + 0x18))(plVar6);
      goto joined_r0x010cce2c;
    }
    puVar2 = &UNK_02163ca0 + (long)param_3 * 8;
  }
  else {
    if (param_3 != 0x1d) goto LAB_010ccd24;
    FUN_00ff86a0(&local_68,*(undefined8 *)(*(long *)(param_2 + 0x60) + 0xb0),1);
    lVar8 = *(long *)(local_68 + 0x60);
    if (lVar8 != 0) {
      plVar6 = (long *)(lVar8 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_0077eb10(lVar8,&DAT_02163d88,lVar5);
      (**(code **)(*plVar6 + 0x18))(plVar6);
      goto joined_r0x010cce2c;
    }
    puVar2 = &DAT_02163d88;
  }
  FUN_0077eb10(0,puVar2,lVar5);
joined_r0x010cce2c:
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  FUN_014c62d0(lVar4,lVar7,lVar5);
  *param_1 = lVar7;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))((long *)(lVar7 + 0x48));
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  return;
}


