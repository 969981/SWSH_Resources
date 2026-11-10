/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013b98a0; name: FUN_013b98a0
 */


void FUN_013b98a0(long param_1)

{
  int iVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  undefined1 auStack_70 [20];
  undefined4 local_5c;
  
  iVar1 = FUN_0132a1f0(param_1 + 0x1d0);
  if (iVar1 < 2) {
    pcVar3 = *(code **)(param_1 + 0xd8);
    if (pcVar3 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0xe0) = 0;
      *(undefined8 *)(param_1 + 0xe8) = 0;
      *(undefined8 *)(param_1 + 0xd0) = 0;
      *(undefined8 *)(param_1 + 0xd8) = 0;
      (*pcVar3)(param_1 + 0xf0);
    }
    FUN_013b9bc0(param_1);
    return;
  }
  lVar4 = *(long *)(param_1 + 0x88);
  if (lVar4 == 0) {
    uVar2 = FUN_007d4b30(0xd0);
  }
  else {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    uVar2 = FUN_007d4b30(lVar4 + 0xd0);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  if ((uVar2 & 1) != 0) {
    FUN_01300120(auStack_70);
    local_5c = 1;
    lVar4 = *(long *)(param_1 + 0x88);
    if (lVar4 == 0) {
      uVar2 = FUN_013b99e0(0,auStack_70,1);
    }
    else {
      plVar5 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar5 + 0x10))(plVar5);
      uVar2 = FUN_013b99e0(lVar4,auStack_70,1);
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
    if (((uVar2 & 1) != 0) && (pcVar3 = *(code **)(param_1 + 0xd8), pcVar3 != (code *)0x0)) {
      *(undefined8 *)(param_1 + 0xe0) = 0;
      *(undefined8 *)(param_1 + 0xe8) = 0;
      *(undefined8 *)(param_1 + 0xd0) = 0;
      *(undefined8 *)(param_1 + 0xd8) = 0;
      (*pcVar3)(param_1 + 0xf0);
    }
    FUN_013001d0(auStack_70);
  }
  return;
}


