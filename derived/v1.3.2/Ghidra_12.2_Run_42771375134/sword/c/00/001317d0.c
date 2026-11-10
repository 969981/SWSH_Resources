/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001317d0; name: FUN_001317d0
 */


undefined8 FUN_001317d0(long param_1,uint *param_2,undefined4 *param_3,uint param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  undefined4 *puVar7;
  uint *puVar8;
  ulong uVar9;
  undefined4 local_44;
  
  puVar8 = *(uint **)(*(long *)(param_1 + 0x1e8) + (ulong)param_4 * 8);
  uVar2 = puVar8[8];
  uVar3 = *puVar8;
  uVar9 = (ulong)uVar3;
  if (uVar2 != 0xffffffff) {
    uVar4 = *(int *)(param_1 + 0x200) - 1;
    *(uint *)(param_1 + 0x200) = uVar4;
    *(undefined8 *)(*(long *)(param_1 + 0x1f8) + (ulong)uVar2 * 8) =
         *(undefined8 *)(*(long *)(param_1 + 0x1f8) + (ulong)uVar4 * 8);
    if (uVar2 < uVar4) {
      *(uint *)(*(long *)(*(long *)(param_1 + 0x1f8) + (ulong)uVar2 * 8) + 0x20) = uVar2;
    }
    puVar8[8] = 0xffffffff;
  }
  uVar5 = (ulong)(uVar3 >> 5);
  uVar2 = *(uint *)(*(long *)(param_1 + 0x50) + uVar5 * 4);
  uVar4 = 1 << (ulong)(uVar3 & 0x1f);
  if ((uVar2 & uVar4) == 0) {
    if (puVar8[4] != 0) {
      *(uint *)(*(long *)(param_1 + 0x60) + uVar5 * 4) =
           *(uint *)(*(long *)(param_1 + 0x60) + uVar5 * 4) | uVar4;
    }
  }
  else {
    *(uint *)(*(long *)(param_1 + 0x50) + uVar5 * 4) = uVar2 & (uVar4 ^ 0xffffffff);
    if (puVar8 == (uint *)0x0) goto LAB_001318ac;
  }
  FUN_0012fb10(puVar8);
                    /* try { // try from 00131898 to 001318ab has its CatchHandler @ 0013196c */
  plVar6 = (long *)FUN_00400d30();
  (**(code **)(*plVar6 + 0x18))(plVar6,puVar8);
LAB_001318ac:
  *(ulong *)(*(long *)(param_1 + 0x1e8) + (ulong)param_4 * 8) = (ulong)*(uint *)(param_1 + 0x1e4);
  *(uint *)(param_1 + 0x1e4) = param_4;
  *param_2 = uVar3;
  puVar7 = (undefined4 *)(*(long *)(param_1 + 0x98) + uVar9 * 4);
  *param_3 = *puVar7;
  local_44 = *puVar7;
  uVar2 = *(uint *)(param_1 + 0x290);
  if (uVar2 < (*(uint *)(param_1 + 0x294) & 0x7fffffff)) {
    *(undefined4 *)(*(long *)(param_1 + 0x288) + (ulong)uVar2 * 4) = local_44;
    *(uint *)(param_1 + 0x290) = uVar2 + 1;
  }
  else {
    FUN_00134180(param_1 + 0x288,&local_44);
    puVar7 = (undefined4 *)(*(long *)(param_1 + 0x98) + uVar9 * 4);
  }
  *puVar7 = 0xffffffff;
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0xa8) + 8) + uVar9 * 4) = 0;
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0xb0) + uVar9 * 0x10);
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  *puVar1 = 0;
  *(undefined1 *)(param_1 + 0x1dd) = 1;
  *(int *)(param_1 + 0x1e0) = *(int *)(param_1 + 0x1e0) + -1;
  return 1;
}


