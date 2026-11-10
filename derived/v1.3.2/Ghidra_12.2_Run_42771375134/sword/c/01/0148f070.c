/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0148f070; name: FUN_0148f070
 */


void FUN_0148f070(long param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  long lVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 local_58;
  
  lVar10 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  lVar11 = *(long *)(lVar10 + 0x58);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  uVar3 = FUN_01485a70(*(undefined8 *)(param_1 + 0x5d8));
  local_58 = 0x69a7b044599f7c97;
  lVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_58);
  lVar8 = *(long *)(param_1 + 0x5d8);
  if ((*(char *)(lVar8 + 0x40) == '\0') &&
     ((*(uint *)(lVar8 + 0x3c) == 0 || (*(uint *)(lVar8 + 0x3c) <= *(uint *)(lVar8 + 4))))) {
    bVar7 = 0;
  }
  else {
    bVar7 = 1;
  }
  *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe | bVar7;
  local_58 = 0xc339f74ef26bad3b;
  lVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_58);
  lVar8 = *(long *)(param_1 + 0x5d8);
  if ((*(char *)(lVar8 + 0x40) == '\0') &&
     ((*(uint *)(lVar8 + 0x3c) == 0 || (*(uint *)(lVar8 + 0x3c) <= *(uint *)(lVar8 + 4))))) {
    bVar7 = 0;
  }
  else {
    bVar7 = 1;
  }
  *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe | bVar7;
  uVar5 = FUN_0087d610(uVar3,2);
  if ((uVar5 & 1) == 0) {
    FUN_0148f500(param_1);
    uVar3 = FUN_01485a70(*(undefined8 *)(param_1 + 0x5d8));
    uVar2 = FUN_0148f990(param_1,uVar3);
    FUN_0148fb60(param_1,0x69a7b044599f7c97,uVar2);
    FUN_00ffcf80(param_1 + 0x100,"anime_tnote_poke");
  }
  else {
    local_58 = 0xe78f040243e108a0;
    lVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_58);
    *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 1;
    FUN_00ffcf80(param_1 + 0x100,"anime_tnote_egg");
    uVar3 = FUN_01485a70(*(undefined8 *)(param_1 + 0x5d8));
    lVar4 = *(long *)PTR_DAT_02710798;
    uVar5 = FUN_0087eb30();
    lVar4 = *(long *)(lVar4 + 0x1e8);
    if (lVar4 == 0) {
      uVar6 = FUN_01524c50(0,uVar3);
    }
    else {
      plVar12 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar12 + 0x10))(plVar12);
      uVar6 = FUN_01524c50(lVar4,uVar3);
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
    bVar1 = (uVar6 & 1) == 0;
    uVar2 = 0x14;
    if (bVar1) {
      uVar2 = 0x15;
    }
    uVar9 = 0x16;
    if (bVar1) {
      uVar9 = 0x17;
    }
    if ((uVar5 & 1) == 0) {
      uVar9 = uVar2;
    }
    FUN_0148fb60(param_1,0xc339f74ef26bad3b,uVar9);
    FUN_0148f330(param_1);
  }
  local_58 = 0xaa9746b0d29093b6;
  FUN_00a0e830(*(undefined8 *)(param_1 + 0x2b0),&local_58);
  FUN_019a65b0();
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  return;
}


