/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003cc480; name: FUN_003cc480
 */


void FUN_003cc480(long param_1,ulong param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ushort *puVar9;
  undefined8 local_48;
  
  uVar6 = (ulong)*(uint *)(param_1 + 0x10);
  plVar1 = (long *)(param_1 + 8);
  if (*(uint *)(param_1 + 0x10) != 0) {
    uVar8 = 0;
    do {
      while( true ) {
        puVar9 = *(ushort **)(*plVar1 + uVar8 * 8);
        uVar5 = puVar9[2];
        puVar9[2] = uVar5 - 1;
        if (uVar5 < 2) break;
        *puVar9 = *puVar9 & 0xfffd;
        uVar8 = uVar8 + 1;
        if (uVar6 <= uVar8) goto LAB_003cc560;
      }
      uVar3 = *(uint *)(*(long *)(puVar9 + 0xc) + 0x10);
      uVar4 = *(uint *)(*(long *)(puVar9 + 0xc) + 0x14);
      uVar2 = uVar4;
      if (uVar4 <= uVar3) {
        uVar2 = uVar3;
        uVar3 = uVar4;
      }
      local_48 = CONCAT44(uVar2,uVar3);
      FUN_003d8710(param_1 + 0x1520,&local_48);
      puVar7 = *(undefined8 **)(puVar9 + 0xc);
      if (puVar7 != (undefined8 *)0x0) {
        *(int *)(param_1 + 0xddc) = *(int *)(param_1 + 0xddc) + -1;
        *puVar7 = *(undefined8 *)(param_1 + 0xde8);
        *(undefined8 **)(param_1 + 0xde8) = puVar7;
        puVar9[0xc] = 0;
        puVar9[0xd] = 0;
        puVar9[0xe] = 0;
        puVar9[0xf] = 0;
      }
      *(int *)(param_1 + 0x4fc) = *(int *)(param_1 + 0x4fc) + -1;
      *(undefined8 *)puVar9 = *(undefined8 *)(param_1 + 0x508);
      uVar6 = (ulong)*(uint *)(param_1 + 0x10);
      *(ushort **)(param_1 + 0x508) = puVar9;
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar6);
  }
LAB_003cc560:
  if ((param_2 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  else {
    local_48 = 0;
    FUN_003d8890(plVar1,0,&local_48);
    FUN_003d8970(plVar1,*(undefined4 *)(param_1 + 0x10));
  }
  return;
}


