/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c91e0; name: FUN_014c91e0
 */


void FUN_014c91e0(long param_1,uint param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  FUN_01539110(param_3,*(undefined8 *)(param_1 + 0x170));
  if (param_2 < *(uint *)(param_1 + 0x198)) {
    uVar1 = *(undefined8 *)(param_1 + 0x170);
    *(undefined8 *)(*(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18 + 8) = 0;
    FUN_0077d4d0(*(undefined8 *)(*(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18),uVar1);
    *(undefined2 *)(*(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18 + 0x10) = 0;
    lVar2 = *(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18;
    *(ushort *)(lVar2 + 0x12) = *(ushort *)(lVar2 + 0x12) & 0xfffe;
  }
  return;
}


