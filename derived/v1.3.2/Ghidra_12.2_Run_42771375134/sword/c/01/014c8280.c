/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c8280; name: FUN_014c8280
 */


void FUN_014c8280(long param_1,uint param_2,undefined4 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = FUN_00864910(*(undefined8 *)(param_1 + 0x170),param_3);
  if (param_2 < *(uint *)(param_1 + 0x198)) {
    uVar2 = *(undefined8 *)(param_1 + 0x170);
    *(ulong *)(*(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18 + 8) = uVar1 & 0xffff | 0x20000;
    FUN_0077d4d0(*(undefined8 *)(*(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18),uVar2);
    *(undefined2 *)(*(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18 + 0x10) = 0;
    lVar3 = *(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18;
    *(ushort *)(lVar3 + 0x12) = *(ushort *)(lVar3 + 0x12) & 0xfffe;
  }
  return;
}


