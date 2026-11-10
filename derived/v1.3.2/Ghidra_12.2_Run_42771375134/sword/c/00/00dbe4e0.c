/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dbe4e0; name: FUN_00dbe4e0
 */


undefined8 FUN_00dbe4e0(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x410) == 0) {
    return 0;
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x410) + 0x60);
  if (lVar3 == 0) {
    return 0;
  }
  uVar1 = FUN_00a8cbe0(lVar3);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  lVar3 = *(long *)(lVar3 + 0xb8);
  uVar2 = *(undefined8 *)(lVar3 + 0x1b8);
  param_2[3] = *(undefined8 *)(lVar3 + 0x1c8);
  param_2[1] = uVar2;
  uVar2 = *(undefined8 *)(lVar3 + 0x1b0);
  param_2[2] = *(undefined8 *)(lVar3 + 0x1c0);
  *param_2 = uVar2;
  return 1;
}


