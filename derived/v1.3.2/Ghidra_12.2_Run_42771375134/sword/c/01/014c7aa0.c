/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c7aa0; name: FUN_014c7aa0
 */


void FUN_014c7aa0(long param_1,uint param_2,undefined8 param_3,undefined4 param_4,uint param_5,
                 int param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = FUN_008d4030(*(undefined8 *)PTR_DAT_02710828);
  FUN_014ba1b0(*(undefined8 *)(param_1 + 400),param_3,param_4,uVar1);
  uVar2 = FUN_014ba2d0(*(undefined8 *)(param_1 + 400));
  if (param_2 < *(uint *)(param_1 + 0x198)) {
    *(ulong *)(*(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18 + 8) =
         (ulong)(uint)(param_6 << 0x12) & 0x1c0000 | (ulong)(param_5 & 3);
    FUN_0077d4d0(*(undefined8 *)(*(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18),uVar2);
    *(undefined2 *)(*(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18 + 0x10) = 0;
    lVar3 = *(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18;
    *(ushort *)(lVar3 + 0x12) = *(ushort *)(lVar3 + 0x12) & 0xfffe;
  }
  return;
}


