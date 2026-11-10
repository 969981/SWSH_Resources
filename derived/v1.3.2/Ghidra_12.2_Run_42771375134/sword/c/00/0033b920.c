/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0033b920; name: FUN_0033b920
 */


void FUN_0033b920(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  uint uVar7;
  undefined1 local_58 [4];
  int local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  uint7 uStack_27;
  
  local_58[0] = 0;
  local_54 = 0;
  local_38 = param_2[3];
  local_40 = param_2[2];
  uVar2 = *param_2;
  local_48 = param_2[1];
  local_50 = *param_2;
  lVar3 = *param_1;
  puVar5 = (uint *)(lVar3 + 0x10);
  uVar7 = *puVar5;
  if (uVar7 != 0) {
    if (*(char *)(*(long *)(lVar3 + 8) + (ulong)(uVar7 - 1) * 0x10 + 8) == '\0') {
      (**(code **)(*(long *)param_1[1] + 0x20))
                ((long *)param_1[1],
                 *(undefined8 *)(*(long *)(lVar3 + 8) + (ulong)(uVar7 - 1) * 0x10));
      lVar3 = *param_1;
      puVar5 = (uint *)(lVar3 + 0x10);
      uVar7 = *puVar5;
      *(undefined1 *)(*(long *)(lVar3 + 8) + (ulong)(uVar7 - 1) * 0x10 + 8) = 1;
    }
  }
  local_28 = 0;
  local_30 = uVar2;
  if (uVar7 < (*(uint *)(lVar3 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined8 *)(*(long *)(lVar3 + 8) + (ulong)uVar7 * 0x10);
    puVar1[1] = (ulong)uStack_27 << 8;
    *puVar1 = uVar2;
    *puVar5 = *puVar5 + 1;
    piVar6 = (int *)param_1[6];
  }
  else {
    FUN_00327960(lVar3,&local_30);
    piVar6 = (int *)param_1[6];
  }
  if (piVar6 == (int *)0x0) {
    local_54 = 0xc;
  }
  else {
    local_54 = *piVar6 + 0xc;
  }
  local_58[0] = 1;
  piVar6 = (int *)param_1[5];
  if (piVar6 == (int *)0x0) {
    iVar4 = 0x1a4;
  }
  else {
    iVar4 = *piVar6;
    *piVar6 = iVar4 + 1;
  }
  FUN_0033bdb0(param_1,iVar4,local_58);
  puVar5 = (uint *)(*param_1 + 0x10);
  if (*puVar5 != 0) {
    uVar7 = *puVar5 - 1;
    if (*(char *)(*(long *)(*param_1 + 8) + (ulong)uVar7 * 0x10 + 8) != '\0') {
      (**(code **)(*(long *)param_1[1] + 0x28))();
      puVar5 = (uint *)(*param_1 + 0x10);
      uVar7 = *puVar5 - 1;
    }
    *puVar5 = uVar7;
  }
  return;
}


