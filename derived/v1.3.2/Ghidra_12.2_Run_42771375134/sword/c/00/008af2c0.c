/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008af2c0; name: FUN_008af2c0
 */


void FUN_008af2c0(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  
  iVar3 = *(int *)(*(long *)(param_1 + 0xa0) + 0x810);
  if (iVar3 == -1) {
    return;
  }
  puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar4 = (long *)(**(code **)*puVar8)(puVar8);
  lVar5 = FUN_00897d00();
  for (; plVar4 != (long *)lVar5; plVar4 = (long *)*plVar4) {
  }
  lVar5 = puVar8[0xb];
  iVar1 = FUN_008c8330(*(undefined8 *)(param_1 + 0xa0));
  iVar3 = *(int *)(param_1 + (long)iVar3 * 4 + 0x80);
  if (iVar3 == 7) {
    *(undefined4 *)(*(long *)(param_1 + 0xa0) + 0x810) = 0xffffffff;
    FUN_008c7160(*(undefined8 *)(param_1 + 0xa0));
    *(undefined4 *)(param_1 + 0x7c) = 1;
    *(undefined4 *)(lVar5 + 0x60) = 8;
    FUN_008c4b10(*(undefined8 *)(param_1 + 0xa0),1);
    uVar9 = *(undefined8 *)(param_1 + 0xa0);
    uVar7 = 1;
LAB_008af46c:
    FUN_00ffa160(uVar9,uVar7,1);
    return;
  }
  if (iVar3 == 1) {
    *(undefined4 *)(*(long *)(param_1 + 0xa0) + 0x810) = 0xffffffff;
    iVar3 = FUN_00884820(*(undefined8 *)(lVar5 + 0x10));
    if (iVar3 == 0) {
      FUN_008b0070(param_1);
      return;
    }
    FUN_008c6ab0(*(undefined8 *)(param_1 + 0xa0),1);
    *(undefined4 *)(param_1 + 0x7c) = 6;
    *(undefined4 *)(param_1 + 0x98) = 1;
    *(undefined4 *)(lVar5 + 0x60) = 1;
    uVar9 = *(undefined8 *)(param_1 + 0xa0);
    uVar7 = 0;
    goto LAB_008af46c;
  }
  if (iVar3 != 0) {
    return;
  }
  if ((*(char *)(lVar5 + 0x4a) != '\0') && ((iVar1 == 0x3f || (iVar1 == 0)))) {
    uVar9 = *(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x5d8);
    lVar10 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
    if (lVar10 == 0) {
      FUN_014c9030(uVar9,0,0);
      lVar10 = *(long *)(param_1 + 0x68);
    }
    else {
      plVar4 = (long *)(lVar10 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_014c9030(uVar9,0,lVar10);
      (**(code **)(*plVar4 + 0x18))(plVar4);
      lVar10 = *(long *)(param_1 + 0x68);
    }
    if ((lVar10 != 0) && (puVar8 = *(undefined8 **)(lVar10 + 0x60), puVar8 != (undefined8 *)0x0)) {
      plVar4 = (long *)(**(code **)*puVar8)(puVar8);
      lVar10 = FUN_00897d00();
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (plVar4 == (long *)lVar10) {
          puVar8 = puVar8 + -10;
          goto LAB_008af570;
        }
      }
    }
    puVar8 = (undefined8 *)0x0;
LAB_008af570:
    FUN_008a6b70(puVar8,0xcf3669ca23458a59,1,0);
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0xa8),0);
    *(undefined4 *)(param_1 + 0x7c) = 4;
    FUN_008c4b10(*(undefined8 *)(param_1 + 0xa0),0);
    FUN_008c82b0(*(undefined8 *)(param_1 + 0xa0),0);
    FUN_008c6ab0(*(undefined8 *)(param_1 + 0xa0),1);
    *(undefined4 *)(*(long *)(param_1 + 0xa0) + 0x810) = 0xffffffff;
    goto LAB_008af5f0;
  }
  uVar6 = FUN_008afea0(param_1);
  if ((uVar6 & 1) == 0) {
    uVar6 = FUN_008aff70(param_1);
    if ((uVar6 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x7c) = 6;
      *(undefined4 *)(param_1 + 0x98) = 5;
    }
    else {
      FUN_008c6ab0(*(undefined8 *)(param_1 + 0xa0),1);
      iVar3 = FUN_00884820(*(undefined8 *)(lVar5 + 0x10));
      if (iVar3 == 0) {
        FUN_008b0070(param_1);
      }
      else {
        *(undefined4 *)(param_1 + 0x7c) = 6;
        *(undefined4 *)(param_1 + 0x98) = 1;
        FUN_00ffa160(*(undefined8 *)(param_1 + 0xa0),0,1);
      }
    }
    goto LAB_008af5f0;
  }
  *(undefined4 *)(param_1 + 0x7c) = 6;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(long *)(param_1 + 0x68) == 0) {
LAB_008af4d4:
    puVar8 = (undefined8 *)0x0;
  }
  else {
    puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar8 != (undefined8 *)0x0) {
      plVar4 = (long *)(**(code **)*puVar8)(puVar8);
      lVar10 = FUN_00897d00();
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (plVar4 == (long *)lVar10) {
          puVar8 = puVar8 + -10;
          goto LAB_008af4d8;
        }
      }
      goto LAB_008af4d4;
    }
  }
LAB_008af4d8:
  uVar2 = FUN_008c8330(*(undefined8 *)(param_1 + 0xa0));
  *(undefined4 *)(puVar8[0x15] + 0x24) = uVar2;
  *(undefined4 *)(puVar8[0x15] + 0x1c) = 0;
LAB_008af5f0:
  *(undefined4 *)(lVar5 + 0x60) = 0;
  return;
}


