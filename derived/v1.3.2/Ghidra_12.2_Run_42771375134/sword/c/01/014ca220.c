/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014ca220; name: FUN_014ca220
 */


void FUN_014ca220(long param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  FUN_014bf2a0(*(undefined8 *)(param_1 + 0x170),param_3,param_4,param_5,param_6);
  uVar2 = FUN_014bbe60(*(undefined8 *)PTR_DAT_02710898,param_3);
  if (param_2 < *(uint *)(param_1 + 0x198)) {
    uVar1 = 0x220000;
    if (param_3 != 0) {
      uVar1 = 0x20000;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x170);
    *(ulong *)(*(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18 + 8) =
         uVar1 & 0xfffffffffff80000 | uVar1 & 0x7ffff | (uVar2 & 1) << 0x12;
    FUN_0077d4d0(*(undefined8 *)(*(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18),uVar3);
    *(undefined2 *)(*(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18 + 0x10) = 0;
    lVar4 = *(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18;
    *(ushort *)(lVar4 + 0x12) = *(ushort *)(lVar4 + 0x12) & 0xfffe;
  }
  return;
}


