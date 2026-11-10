/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c8560; name: FUN_014c8560
 */


void FUN_014c8560(long param_1,uint param_2,undefined8 param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar2 = FUN_0087d610(param_3,2);
  if ((uVar2 & 1) == 0) {
    uVar1 = FUN_008783b0(param_3);
  }
  else {
    uVar1 = 899;
  }
  uVar2 = FUN_00864910(*(undefined8 *)(param_1 + 0x170),uVar1);
  if (param_2 < *(uint *)(param_1 + 0x198)) {
    uVar3 = *(undefined8 *)(param_1 + 0x170);
    *(ulong *)(*(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18 + 8) = uVar2 & 0xffff | 0x20000;
    FUN_0077d4d0(*(undefined8 *)(*(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18),uVar3);
    *(undefined2 *)(*(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18 + 0x10) = 0;
    lVar4 = *(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18;
    *(ushort *)(lVar4 + 0x12) = *(ushort *)(lVar4 + 0x12) & 0xfffe;
  }
  return;
}


