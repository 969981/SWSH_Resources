/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c9030; name: FUN_014c9030
 */


void FUN_014c9030(long param_1,uint param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  FUN_01524b90(param_3,*(undefined8 *)(param_1 + 0x170));
  uVar3 = FUN_01524bf0(param_3);
  uVar4 = FUN_01524c00(param_3);
  uVar1 = FUN_008d3fc0(uVar4,0);
  uVar2 = FUN_008d4030(*(undefined8 *)PTR_DAT_02710828);
  FUN_014ba1b0(*(undefined8 *)(param_1 + 400),*(undefined8 *)(param_1 + 0x170),uVar1,uVar2);
  uVar4 = FUN_014ba2d0(*(undefined8 *)(param_1 + 400));
  if (param_2 < *(uint *)(param_1 + 0x198)) {
    *(ulong *)(*(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18 + 8) = uVar3 & 3;
    FUN_0077d4d0(*(undefined8 *)(*(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18),uVar4);
    *(undefined2 *)(*(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18 + 0x10) = 0;
    lVar5 = *(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18;
    *(ushort *)(lVar5 + 0x12) = *(ushort *)(lVar5 + 0x12) & 0xfffe;
  }
  return;
}


