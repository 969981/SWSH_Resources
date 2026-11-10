/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014d46a0; name: FUN_014d46a0
 */


void FUN_014d46a0(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long local_58;
  
  FUN_00ff86a0(&local_58,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar5 = *(long *)(local_58 + 0x60);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  lVar6 = *(long *)(param_1 + 0x2b0);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar7 = *(long *)(lVar6 + 0x2e0);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar8 = *(long *)(lVar6 + 0x2f0);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  lVar9 = *(long *)(lVar6 + 0x2e8);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  if (param_2 == 1) {
    local_58 = 0x6aeb7356315d2e51;
    uVar3 = FUN_00ffde30(param_1 + 0x100,&local_58);
    iVar1 = FUN_016c0010();
    iVar2 = FUN_016c0020(uVar3);
    uVar4 = (ulong)(uint)(iVar2 + iVar1);
    if (*(char *)(param_1 + uVar4 * 0x30 + 0x5fc) == '\0') {
      FUN_014c7a10(lVar7,0,*(undefined8 *)(param_1 + uVar4 * 0x30 + 0x5e0),0,0);
    }
    else {
      FUN_014c78e0(lVar7,0,lVar5,param_1 + uVar4 * 0x30 + 0x5d8,0);
    }
  }
  FUN_0077eb10(lVar5,&UNK_02172030 + (long)param_2 * 8,lVar9);
  FUN_014c62d0(lVar7,lVar8,lVar9);
  (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  return;
}


