/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00111ab0; name: FUN_00111ab0
 */


/* WARNING: Removing unreachable block (ram,0x00111b14) */

void FUN_00111ab0(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 local_28;
  uint local_14;
  
  uVar3 = FUN_00111b90(*(undefined8 *)(param_1 + 0xe0),&local_14);
  uVar2 = local_14 >> 0xe;
  *(undefined8 *)(param_1 + 0xd0) = uVar3;
  *(uint *)(param_1 + 0xd8) = uVar2;
  local_28 = 0;
  local_14 = local_14 & 0xffffc000;
  FUN_00111c50(param_1 + 0x78,uVar2,&local_28);
  uVar2 = *(uint *)(param_1 + 0xd8);
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      lVar5 = 0x4000;
      do {
        lVar6 = lVar4 * 8;
        lVar4 = lVar4 + 2;
        *(long *)(*(long *)(param_1 + 0x78) + lVar6) = *(long *)(param_1 + 0xd0) + lVar5 + -0x4000;
        lVar1 = *(long *)(param_1 + 0xd0) + lVar5;
        lVar5 = lVar5 + 0x8000;
        *(long *)(*(long *)(param_1 + 0x78) + lVar6 + 8) = lVar1;
      } while ((ulong)uVar2 - ((ulong)uVar2 & 1) != lVar4);
      if ((uVar2 & 1) == 0) {
        return;
      }
    }
    *(long *)(*(long *)(param_1 + 0x78) + lVar4 * 8) = *(long *)(param_1 + 0xd0) + lVar4 * 0x4000;
  }
  return;
}


