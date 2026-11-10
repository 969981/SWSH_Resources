/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008aa9f0; name: FUN_008aa9f0
 */


void FUN_008aa9f0(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  
  uVar2 = FUN_016d3660(*(undefined4 *)(param_1 + 0xa4));
  if ((uVar2 & 1) != 0) {
    return;
  }
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar3 = (long *)(**(code **)*puVar7)(puVar7);
  lVar4 = FUN_00897d00();
  for (; plVar3 != (long *)lVar4; plVar3 = (long *)*plVar3) {
  }
  plVar3 = *(long **)(puVar7[0xb] + 0x10);
  uVar5 = (**(code **)(*plVar3 + 0x50))(plVar3,*(undefined4 *)(puVar7[0xb] + 0x1c));
  if (*(char *)(param_1 + 0xa0) == '\0') {
    iVar1 = FUN_008783b0(uVar5);
    if ((iVar1 != 0x382) && (iVar1 != 800)) {
      *(undefined8 *)(param_1 + 0x7c) = 2;
      goto LAB_008aaaa4;
    }
    uVar6 = 6;
  }
  else {
    uVar6 = 5;
  }
  *(undefined4 *)(param_1 + 0x7c) = uVar6;
LAB_008aaaa4:
  FUN_014c7bf0(*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x5d8),0,uVar5);
  FUN_008a6b70(puVar7 + -10,0x9a798355c714948b,1,0);
  FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x90),0);
  return;
}


