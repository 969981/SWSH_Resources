/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008c7c60; name: FUN_008c7c60
 */


undefined8 FUN_008c7c60(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  uint local_24;
  
  lVar4 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar2 = FUN_015200a0(lVar4,*(undefined4 *)(param_1 + (long)*(int *)(param_1 + 0x640) * 4 + 0x64c),
                       &local_24);
  if (local_24 != 0) {
    uVar3 = 0;
    do {
      uVar1 = *(uint *)(lVar2 + uVar3 * 4);
      if ((uVar1 & 0x7fff) == 0) break;
      if ((int)uVar1 < 0) {
        uVar5 = 1;
        if (lVar4 == 0) {
          return 1;
        }
        goto LAB_008c7ce0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < local_24);
  }
  uVar5 = 0;
  if (lVar4 != 0) {
LAB_008c7ce0:
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  return uVar5;
}


