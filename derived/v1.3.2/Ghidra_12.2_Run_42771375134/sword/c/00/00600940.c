/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00600940; name: FUN_00600940
 */


undefined8 * FUN_00600940(long param_1,uint param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint local_34;
  
  for (lVar4 = *(long *)(param_1 + 0x88); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x30)) {
    while (param_2 < *(uint *)(lVar4 + 0x40)) {
      lVar4 = *(long *)(lVar4 + 0x28);
      if (lVar4 == 0) goto LAB_00600994;
    }
    if (param_2 <= *(uint *)(lVar4 + 0x40)) {
      return *(undefined8 **)(lVar4 + 0x48);
    }
  }
LAB_00600994:
  local_34 = param_2;
  if (*(long *)(param_1 + 200) == 0) {
    lVar4 = *(long *)(param_1 + 0x1b0) << 1;
    if ((lVar4 == 0) && (lVar4 = 1, *(char *)(param_1 + 0x1b8) != '\0')) {
      lVar4 = 2;
    }
    (**(code **)(*(long *)(param_1 + 0x98) + 0x28))(param_1 + 0x98,lVar4);
    if (*(long *)(param_1 + 200) == 0) {
      return (undefined8 *)0x0;
    }
  }
  puVar5 = (undefined8 *)(param_1 + 0xb8);
  puVar7 = (undefined8 *)*puVar5;
  if (puVar7 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)puVar7[1];
    if (puVar6 == (undefined8 *)0x0) {
      *puVar5 = 0;
      *(undefined8 *)(param_1 + 0xc0) = 0;
    }
    else {
      *puVar6 = 0;
      *puVar5 = puVar6;
    }
    *puVar7 = 0;
    puVar7[1] = 0;
    *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + -1;
  }
  if (*(long *)(param_1 + 0xe0) == 0) {
    *(undefined8 **)(param_1 + 0xe0) = puVar7;
  }
  else {
    *(undefined8 **)(*(long *)(param_1 + 0xe8) + 8) = puVar7;
    *puVar7 = *(undefined8 *)(param_1 + 0xe8);
  }
  *(undefined8 **)(param_1 + 0xe8) = puVar7;
  *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xf0) + 1;
  *(undefined1 *)(puVar7 + 3) = 1;
  uVar1 = 0;
  if (*(ulong *)(param_1 + 0x1a8) != 0) {
    uVar1 = (ulong)puVar7[2] / *(ulong *)(param_1 + 0x1a8);
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x120) + uVar1 * 8);
  *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
  if (puVar7 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  uVar2 = FUN_00603ac0(*(undefined8 *)(param_1 + 0x60),param_2);
  iVar3 = FUN_00601d10(*(undefined8 *)(param_1 + 0x60),uVar2,0);
  if ((iVar3 == 0) &&
     (iVar3 = FUN_00603920(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x98),
                           *(undefined4 *)(param_1 + 0x68)), iVar3 == 0)) {
    *(uint *)(puVar7 + 10) = param_2;
    *(undefined4 *)((long)puVar7 + 0x54) = uVar2;
    FUN_006314d0(*(undefined8 *)(param_1 + 0x1c0),puVar7);
    FUN_00600ae0(param_1 + 0x70,&local_34,puVar7);
    return puVar7;
  }
  return (undefined8 *)0x0;
}


