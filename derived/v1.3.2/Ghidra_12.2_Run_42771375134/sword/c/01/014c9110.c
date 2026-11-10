/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c9110; name: FUN_014c9110
 */


void FUN_014c9110(long param_1,uint param_2,undefined8 param_3,ulong param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = FUN_008d3fc0(param_5,0);
  uVar2 = FUN_008d4030(*(undefined8 *)PTR_DAT_02710828);
  FUN_014ba1b0(*(undefined8 *)(param_1 + 400),param_3,uVar1,uVar2);
  uVar3 = FUN_014ba2d0(*(undefined8 *)(param_1 + 400));
  if (param_2 < *(uint *)(param_1 + 0x198)) {
    *(ulong *)(*(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18 + 8) = param_4 & 3;
    FUN_0077d4d0(*(undefined8 *)(*(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18),uVar3);
    *(undefined2 *)(*(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18 + 0x10) = 0;
    lVar4 = *(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18;
    *(ushort *)(lVar4 + 0x12) = *(ushort *)(lVar4 + 0x12) & 0xfffe;
  }
  return;
}


