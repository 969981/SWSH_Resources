/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00867210; name: FUN_00867210
 */


ulong FUN_00867210(ulong *param_1,int param_2,short param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  
  if ((param_2 == 0x351) && (param_3 == 0)) {
    lVar2 = FUN_00877550(local_28);
  }
  else {
    if ((param_2 != 0x351) || (param_3 != 1)) {
      if (param_1 == (ulong *)0x0) {
        uVar4 = FUN_008660d0(0x19);
        return uVar4;
      }
      uVar4 = *param_1;
      uVar6 = param_1[1];
      do {
        uVar7 = uVar4 ^ uVar6;
        iVar5 = (int)uVar6;
        iVar3 = (int)uVar4;
        uVar6 = uVar7 >> 0x1b | uVar7 << 0x25;
        uVar4 = uVar7 ^ (uVar4 >> 0x28 | uVar4 << 0x18) ^ uVar7 << 0x10;
        uVar1 = iVar3 + iVar5 & 0x1f;
      } while (0x18 < uVar1);
      *param_1 = uVar4;
      param_1[1] = uVar6;
      return (ulong)uVar1;
    }
    lVar2 = FUN_00877570(local_24);
    local_28[0] = local_24[0];
  }
  uVar1 = FUN_00867140(param_1,local_28[0]);
  return (ulong)*(uint *)(lVar2 + (ulong)(uVar1 & 0xff) * 4);
}


