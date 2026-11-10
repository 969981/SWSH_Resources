/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01473c10; name: FUN_01473c10
 */


void FUN_01473c10(long param_1)

{
  uint *puVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  undefined *puVar5;
  bool bVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  undefined8 local_38;
  
  puVar5 = PTR_DAT_02729f38;
  lVar9 = 0;
  do {
    while( true ) {
      local_38 = *(undefined8 *)(puVar5 + lVar9);
      lVar7 = FUN_0103bca0(*(undefined8 *)(param_1 + 0x2b0),&local_38);
      puVar1 = (uint *)(param_1 + 0x618);
      if (lVar9 != 0) {
        puVar1 = (uint *)(param_1 + 0x61c);
      }
      uVar2 = *puVar1;
      if ((((uint)*(byte *)(lVar7 + 0xe8) == (uVar2 & 0xff)) &&
          ((uint)*(byte *)(lVar7 + 0xe9) == (uVar2 >> 8 & 0xff))) &&
         ((uint)*(byte *)(lVar7 + 0xea) == (uVar2 >> 0x10 & 0xff))) {
        uVar8 = (uint)((uint)*(byte *)(lVar7 + 0xeb) != uVar2 >> 0x18);
      }
      else {
        uVar8 = 1;
      }
      uVar3 = *(ushort *)(lVar7 + 0x114);
      uVar4 = uVar3 >> 2 & 1 | uVar8;
      *(ushort *)(lVar7 + 0x114) = uVar3 & 0xfffb | (ushort)(uVar4 << 2);
      if (uVar8 == 0) break;
LAB_01473d18:
      *(uint *)(lVar7 + 0xe8) = uVar2;
      *(uint *)(lVar7 + 0xec) = uVar2;
      lVar9 = lVar9 + 8;
      if (lVar9 == 0x38) {
        return;
      }
    }
    if ((((uint)*(byte *)(lVar7 + 0xec) != (uVar2 & 0xff)) ||
        ((uint)*(byte *)(lVar7 + 0xed) != (uVar2 >> 8 & 0xff))) ||
       ((uint)*(byte *)(lVar7 + 0xee) != (uVar2 >> 0x10 & 0xff))) {
      *(ushort *)(lVar7 + 0x114) = uVar3 | 4;
      goto LAB_01473d18;
    }
    bVar6 = (uint)*(byte *)(lVar7 + 0xef) != uVar2 >> 0x18;
    *(ushort *)(lVar7 + 0x114) = uVar3 & 0xfffb | (ushort)((uVar4 | bVar6) << 2);
    if (bVar6) goto LAB_01473d18;
    lVar9 = lVar9 + 8;
    if (lVar9 == 0x38) {
      return;
    }
  } while( true );
}


