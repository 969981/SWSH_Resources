/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048e850; name: FUN_0048e850
 */


bool FUN_0048e850(long param_1)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  uint local_24;
  
  puVar1 = (uint *)(param_1 + 0x26b);
  uVar2 = *puVar1;
  if ((uVar2 >> 7 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x26f) = *(undefined1 *)(param_1 + 0x26f);
    *puVar1 = uVar2 | 0x80;
    uVar2 = FUN_00480360(*(undefined8 *)(param_1 + 0x160),&local_24);
    if (uVar2 == 3) {
      uVar3 = (**(code **)(**(long **)(param_1 + 0x160) + 0x228))
                        (*(long **)(param_1 + 0x160),*(undefined8 *)(param_1 + 0x1f0));
      uVar2 = 1;
      if ((uVar3 & 1) != 0) {
        uVar2 = 2;
      }
    }
    *(undefined1 *)(param_1 + 0x26f) = *(undefined1 *)(param_1 + 0x26f);
    *puVar1 = *puVar1 & 0xffffff80 | local_24 & 7 | (uVar2 & 0xf) << 3;
  }
  else {
    uVar2 = uVar2 >> 3 & 0xf;
  }
  return uVar2 == 0;
}


