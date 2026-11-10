/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0099b800; name: FUN_0099b800
 */


undefined4 FUN_0099b800(long param_1)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  
  uVar5 = FUN_008e12a0(param_1,0xf);
  uVar2 = FUN_008e12a0(param_1,0xd);
  uVar1 = *(undefined1 *)(param_1 + 0x33d);
  uVar3 = FUN_00864e10(uVar1);
  uVar4 = FUN_00864e50(uVar1);
  if (uVar2 <= (uint)((uVar5 & 0xffffffff) >> 1)) {
    uVar3 = uVar4;
  }
  return uVar3;
}


