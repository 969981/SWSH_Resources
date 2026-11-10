/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009659c0; name: FUN_009659c0
 */


undefined1 FUN_009659c0(long param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  
  uVar6 = FUN_008e5a80();
  if ((uVar6 & 1) != 0) {
    uVar6 = 0;
    puVar7 = &DAT_0214b8d3;
    do {
      uVar1 = *(uint *)(puVar7 + -7);
      uVar5 = FUN_008e1290(param_1);
      if (((uVar1 == (uVar5 & 0xffff)) &&
          (*(ushort *)(puVar7 + -3) == (ushort)*(byte *)(param_1 + 0x33d))) &&
         (cVar2 = puVar7[-1], cVar3 = FUN_00880ae0(param_2), cVar2 == cVar3)) {
        return *puVar7;
      }
      uVar6 = uVar6 + 1;
      puVar7 = puVar7 + 0xc;
    } while (uVar6 < 0x2a);
  }
  if (param_2 - 0x2f5U < 0x12) {
    uVar4 = (&DAT_0214bac8)[*(long *)(&DAT_0214bb60 + (long)(int)(param_2 - 0x2f5U) * 8) * 8];
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


