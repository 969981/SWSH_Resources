/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003b2c40; name: FUN_003b2c40
 */


void FUN_003b2c40(long *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined4 *puVar3;
  
  if ((param_1[2] != 0) &&
     (uVar1 = *(uint *)((long)param_1 + 0x1c) & 0x7fffffff, uVar1 != 0 || (int)param_1[3] != 0)) {
    lVar2 = *(long *)(param_2 + 8);
    *(ulong *)(param_2 + 8) = lVar2 + (ulong)uVar1 * 4;
    param_1[2] = lVar2;
  }
  if (*param_1 != 0) {
    puVar3 = *(undefined4 **)(param_2 + 8);
    *(undefined4 **)(param_2 + 8) = puVar3 + 0x1e;
    FUN_003b25c0(puVar3);
    lVar2 = (**(code **)(**(long **)(*(long *)PTR_DAT_02711060 + 0x10) + 0x10))
                      (*(long **)(*(long *)PTR_DAT_02711060 + 0x10),*puVar3,*(long *)(puVar3 + 2),
                       *(long *)(puVar3 + 2) + (ulong)(uint)puVar3[4] * 4,*(long *)(puVar3 + 6),
                       *(long *)(puVar3 + 6) + (ulong)(uint)puVar3[8] * 4,*(long *)(puVar3 + 10),
                       *(long *)(puVar3 + 10) + (ulong)(uint)puVar3[0xc] * 4,*(long *)(puVar3 + 0xe)
                       ,*(long *)(puVar3 + 0xe) + (ulong)(uint)puVar3[0x10] * 4,
                       *(long *)(puVar3 + 0x12),
                       *(long *)(puVar3 + 0x12) + (ulong)(uint)puVar3[0x14] * 4,
                       *(long *)(puVar3 + 0x16),
                       *(long *)(puVar3 + 0x16) + (ulong)(uint)puVar3[0x18] * 4,
                       *(long *)(puVar3 + 0x1a),
                       *(long *)(puVar3 + 0x1a) + (ulong)(uint)puVar3[0x1c] * 4);
    *param_1 = lVar2;
    *(short *)(lVar2 + 8) = *(short *)(lVar2 + 8) + 1;
  }
  return;
}


