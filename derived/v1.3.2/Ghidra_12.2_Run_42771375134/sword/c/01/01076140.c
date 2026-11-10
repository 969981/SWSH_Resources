/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01076140; name: FUN_01076140
 */


void FUN_01076140(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x5dc);
  bVar2 = FUN_0106f510(uVar1,*(undefined1 *)(*(long *)(*(long *)(param_1 + 0x5d0) + 0x1f8) + 0x58));
  uVar4 = *(undefined8 *)(param_1 + (ulong)bVar2 * 8 + 0x638);
  bVar2 = FUN_0106f510(uVar1,*(undefined1 *)(*(long *)(*(long *)(param_1 + 0x5d0) + 0x1f8) + 0x58));
  *(undefined8 *)(param_1 + (ulong)bVar2 * 8 + 0x660) = uVar4;
  if (*(int *)(param_1 + 0x5dc) == 1) {
    bVar2 = FUN_0106f510(1,*(undefined1 *)(*(long *)(*(long *)(param_1 + 0x5d0) + 0x1f8) + 0x58));
    lVar3 = *(long *)(param_1 + (ulong)bVar2 * 8 + 0x638);
    if (lVar3 != -0x2ff60d54f2674d29) {
      *(long *)(param_1 + 0x698) = lVar3;
    }
  }
  FUN_01075b30(param_1);
  FUN_010736c0(param_1);
  FUN_01075c40(param_1,*(undefined4 *)(param_1 + 0x5dc));
  if (*(long *)(param_1 + 0x4c0) == 0) {
    return;
  }
  FUN_016d2080();
  return;
}


