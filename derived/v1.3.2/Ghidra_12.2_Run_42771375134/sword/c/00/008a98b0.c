/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008a98b0; name: FUN_008a98b0
 */


void FUN_008a98b0(long param_1,ulong param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long local_38;
  
  puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar2 = (long *)(**(code **)*puVar6)(puVar6);
  lVar3 = FUN_00897d00();
  for (; plVar2 != (long *)lVar3; plVar2 = (long *)*plVar2) {
  }
  lVar3 = puVar6[0xb];
  puVar6 = puVar6 + -10;
  (**(code **)(**(long **)(lVar3 + 0x10) + 0x50))
            (*(long **)(lVar3 + 0x10),*(undefined4 *)(lVar3 + 0x1c));
  iVar1 = FUN_008783b0();
  *(int *)(param_1 + 0x9c) = iVar1;
  if (iVar1 == 0x286) {
    FUN_008a6a20(&local_38,puVar6,0);
    uVar5 = 1;
  }
  else if (iVar1 == 0x382) {
    uVar5 = 8;
    if (*(char *)(lVar3 + 0x29) != '\0') {
      uVar5 = 6;
    }
    FUN_008a6a20(&local_38,puVar6,uVar5);
    uVar5 = 9;
    if (*(char *)(lVar3 + 0x29) != '\0') {
      uVar5 = 7;
    }
  }
  else {
    if (iVar1 != 800) {
      lVar7 = 0;
      lVar8 = 0;
      goto LAB_008a99d0;
    }
    FUN_008a6a20(&local_38,puVar6,2);
    uVar5 = 3;
  }
  lVar7 = local_38;
  FUN_008a6a20(&local_38,puVar6,uVar5);
  lVar8 = local_38;
LAB_008a99d0:
  uVar4 = FUN_008c8c30(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(lVar3 + 0x1c));
  FUN_016a66b0(lVar7,uVar4);
  if ((param_2 & 1) != 0) {
    uVar4 = FUN_008c8c30(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(lVar3 + 0x20));
    FUN_016a66b0(lVar8,uVar4);
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  return;
}


