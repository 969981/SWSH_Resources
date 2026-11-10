/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0079fb00; name: FUN_0079fb00
 */


undefined8
FUN_0079fb00(long param_1,long *param_2,long *param_3,undefined8 param_4,undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 *local_80;
  long *local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar10 = *(long *)(param_1 + 0x50);
  if (*(ulong *)(*(long *)(lVar10 + 0x20) + 0x48) < 10) {
    plVar8 = *(long **)(param_1 + 8);
    puVar3 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x28,8);
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar8;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    DAT_029f4b4c = DAT_029f4b4c + 1;
    uVar7 = (ulong)DAT_029f4b4c;
    *puVar3 = &PTR_FUN_02610510;
    puVar3[1] = uVar7;
    puVar3[4] = 0;
    *(undefined4 *)(puVar3 + 2) = 1;
    plVar9 = puVar3 + 3;
    *plVar9 = 0;
    lVar5 = FUN_007a0960(&local_80,plVar8);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    if (*plVar9 != 0) {
      (**(code **)(*(long *)(*plVar9 + 0x48) + 0x18))();
      *plVar9 = 0;
    }
    puVar3[3] = lVar5;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    local_70 = 0x28;
    local_68 = 8;
    local_80 = puVar3;
    local_78 = plVar8;
    FUN_007a0100(*(undefined8 *)(lVar10 + 0x20),&local_80);
    puVar1 = local_80;
    local_80 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1);
      (**(code **)(*local_78 + 0x18))(local_78,puVar1,local_70,local_68);
    }
    FUN_007a0fa0(*plVar9,param_4,param_5);
    lVar10 = *param_2;
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    }
    lVar4 = *param_3;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    lVar5 = *plVar9;
    if (lVar10 != 0) {
      plVar8 = (long *)(lVar10 + 0x48);
      (**(code **)(*plVar8 + 0x10))(plVar8);
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
    lVar6 = *(long *)(lVar5 + 0x300);
    *(long *)(lVar5 + 0x300) = lVar10;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
    }
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))();
    }
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    lVar5 = puVar3[4];
    puVar3[4] = lVar4;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
    }
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    }
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
    }
    uVar2 = puVar3[1];
  }
  else {
    uVar2 = 0xffffffffffffffff;
  }
  return uVar2;
}


