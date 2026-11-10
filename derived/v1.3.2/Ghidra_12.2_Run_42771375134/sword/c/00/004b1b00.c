/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b1b00; name: FUN_004b1b00
 */


undefined8 FUN_004b1b00(long param_1,long param_2)

{
  uint uVar1;
  ushort uVar2;
  ushort *puVar3;
  ulong uVar4;
  
  uVar2 = *(ushort *)(param_2 + 4);
  uVar4 = (ulong)uVar2;
  if (uVar4 != 0) {
    uVar1 = (uint)uVar2 * 2 + 5 & 0x3fffc;
    puVar3 = (ushort *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,uVar1 + (int)(uVar4 << 2));
    if (puVar3 == (ushort *)0x0) {
      return 0x34;
    }
    *puVar3 = uVar2;
    memcpy(puVar3 + 1,(void *)(param_2 + 6),uVar4 * 2);
    memcpy((void *)((long)puVar3 + (ulong)uVar1),(void *)(param_2 + 6 + uVar4 * 2),uVar4 << 2);
    *(ushort **)(param_1 + 0x18) = puVar3;
  }
  return 1;
}


