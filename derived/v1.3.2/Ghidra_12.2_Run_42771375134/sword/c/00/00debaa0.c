/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00debaa0; name: FUN_00debaa0
 */


undefined4 FUN_00debaa0(long param_1)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined1 local_18 [8];
  
  if (*(char *)(*(long *)(param_1 + 0x88) + 0x6cc) != '\0') {
    return 6;
  }
  plVar1 = *(long **)(*(long *)PTR_DAT_02717c48 + 0x148);
  if (*(long **)(*(long *)PTR_DAT_02717c48 + 0x150) == plVar1) {
    return 0;
  }
  if (*plVar1 == 0) {
    return 0;
  }
  uVar4 = FUN_00dc7740();
  if ((uVar4 & 1) == 0) {
    iVar3 = FUN_00ecec10();
    if (iVar3 - 2U < 6) {
      return *(undefined4 *)(&DAT_021606f0 + (long)(int)(iVar3 - 2U) * 4);
    }
    uVar4 = FUN_00ea0830(*(undefined8 *)(param_1 + 0x88));
    if ((uVar4 & 1) == 0) {
      return 2;
    }
  }
  else {
    uVar4 = FUN_00ea0830(*(undefined8 *)(param_1 + 0x88));
    if ((uVar4 & 1) == 0) {
      return 2;
    }
  }
  puVar5 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
  uVar4 = *puVar5;
  uVar2 = puVar5[1];
  uVar6 = uVar2 ^ uVar4;
  *puVar5 = uVar6 ^ (uVar4 >> 0x28 | uVar4 << 0x18) ^ uVar6 << 0x10;
  puVar5[1] = uVar6 >> 0x1b | uVar6 << 0x25;
  return *(undefined4 *)((ulong)local_18 | ((ulong)(uint)((int)uVar2 + (int)uVar4) & 1) << 2);
}


