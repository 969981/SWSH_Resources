/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048d230; name: FUN_0048d230
 */


ulong FUN_0048d230(long param_1,uint *param_2)

{
  uint *puVar1;
  ulong uVar2;
  uint uVar3;
  
  puVar1 = (uint *)(param_1 + 0x26b);
  uVar3 = *puVar1;
  if ((uVar3 >> 7 & 1) != 0) {
    *param_2 = uVar3 & 7;
    return (ulong)(*puVar1 >> 3 & 0xf);
  }
  *(undefined1 *)(param_1 + 0x26f) = *(undefined1 *)(param_1 + 0x26f);
  *puVar1 = uVar3 | 0x80;
  uVar2 = FUN_00480360(*(undefined8 *)(param_1 + 0x160),param_2);
  if ((int)uVar2 == 3) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x160) + 0x228))
                      (*(long **)(param_1 + 0x160),*(undefined8 *)(param_1 + 0x1f0));
    uVar3 = 1;
    if ((uVar2 & 1) != 0) {
      uVar3 = 2;
    }
    uVar2 = (ulong)uVar3;
  }
  uVar3 = *param_2;
  *(undefined1 *)(param_1 + 0x26f) = *(undefined1 *)(param_1 + 0x26f);
  *puVar1 = *puVar1 & 0xffffff80 | uVar3 & 7 | ((uint)uVar2 & 0xf) << 3;
  return uVar2;
}


