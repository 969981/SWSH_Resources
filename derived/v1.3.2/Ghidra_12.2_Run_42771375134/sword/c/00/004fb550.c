/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004fb550; name: FUN_004fb550
 */


undefined8 FUN_004fb550(long param_1,long param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  *(long *)(param_1 + 0x50) = param_2;
  if (*param_3 < 0) {
    *(undefined1 *)(param_1 + 0x68) = 1;
    *(undefined1 *)(param_1 + 0x6c) = 0;
    return 0x1f;
  }
  uVar3 = (**(code **)(**(long **)(param_2 + 0x608) + 0x18))(*(long **)(param_2 + 0x608),param_3);
  if ((uVar3 != 0) && (uVar1 = *(uint *)(param_2 + 0x610), uVar3 <= uVar1)) {
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = uVar1 / uVar3;
    }
    if (uVar1 == uVar2 * uVar3) {
      *(uint *)(param_1 + 0x60) = uVar3;
      return 1;
    }
  }
  *(undefined1 *)(param_1 + 0x68) = 1;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  return 2;
}


