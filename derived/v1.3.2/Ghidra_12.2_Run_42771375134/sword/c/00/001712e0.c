/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001712e0; name: FUN_001712e0
 */


void FUN_001712e0(long param_1,long *param_2,int param_3,long param_4,long param_5,int param_6)

{
  uint uVar1;
  undefined2 uVar2;
  ulong uVar3;
  ushort uVar4;
  long *plVar5;
  long lVar6;
  
  uVar1 = *(uint *)(**(long **)(param_4 + 0x2f0) + (ulong)(uint)(param_3 << 1) * 4);
  if (uVar1 < 0xffffffc0) {
    lVar6 = *(long *)(param_4 + 200) + (ulong)(uVar1 >> 6) * 0x20;
    if (*(char *)(lVar6 + 5) == '\x01') {
      plVar5 = *(long **)(lVar6 + 0x18);
      *param_2 = *(long *)*plVar5;
      *(undefined2 *)((long)param_2 + 0x14) = *(undefined2 *)(*plVar5 + 0x4a);
      uVar4 = (ushort)uVar1 & 0x3f;
      goto LAB_0017137c;
    }
    uVar3 = (ulong)*(uint *)(*(long *)(param_4 + 0xd8) + (ulong)(uVar1 >> 6) * 4);
    if ((*(byte *)(lVar6 + 4) >> 2 & 1) == 0) {
      uVar3 = (ulong)(uint)(*(int *)(param_5 + uVar3 * 4) + param_6);
    }
    lVar6 = *(long *)(param_1 + 0x220);
    *(uint *)((long)param_2 + 0x14) = (int)uVar3 + 1U & 0xffff;
    *param_2 = lVar6 + uVar3 * 0x20;
  }
  else {
    *param_2 = param_1 + 0x100;
    *(undefined4 *)((long)param_2 + 0x14) = 0;
  }
  uVar4 = 0xffff;
LAB_0017137c:
  *(ushort *)(param_2 + 2) = uVar4;
  uVar1 = *(uint *)(**(long **)(param_4 + 0x2f0) + (ulong)(param_3 << 1 | 1) * 4);
  if (0xffffffbf < uVar1) {
    param_2[1] = param_1 + 0x100;
    *(undefined4 *)(param_2 + 3) = 0;
    *(undefined2 *)((long)param_2 + 0x12) = 0xffff;
    return;
  }
  lVar6 = *(long *)(param_4 + 200) + (ulong)(uVar1 >> 6) * 0x20;
  if (*(char *)(lVar6 + 5) == '\x01') {
    plVar5 = *(long **)(lVar6 + 0x18);
    param_2[1] = *(long *)*plVar5;
    uVar2 = *(undefined2 *)(*plVar5 + 0x4a);
    *(ushort *)((long)param_2 + 0x12) = (ushort)uVar1 & 0x3f;
    *(undefined2 *)(param_2 + 3) = uVar2;
    return;
  }
  uVar3 = (ulong)*(uint *)(*(long *)(param_4 + 0xd8) + (ulong)(uVar1 >> 6) * 4);
  if ((*(byte *)(lVar6 + 4) >> 2 & 1) == 0) {
    uVar3 = (ulong)(uint)(*(int *)(param_5 + uVar3 * 4) + param_6);
  }
  lVar6 = *(long *)(param_1 + 0x220);
  *(uint *)(param_2 + 3) = (int)uVar3 + 1U & 0xffff;
  param_2[1] = lVar6 + uVar3 * 0x20;
  *(undefined2 *)((long)param_2 + 0x12) = 0xffff;
  return;
}


