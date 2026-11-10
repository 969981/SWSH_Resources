/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005a0790; name: FUN_005a0790
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_005a0790(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  
  puVar2 = PTR_DAT_02713c48;
  puVar1 = PTR_PTR_02713988;
  if (*(long *)PTR_DAT_02713c48 == 0) {
    puVar5 = (undefined8 *)
             FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x148,
                          "C:/workspace/YEBIS_draft/src/GPU/GPUGlareDef.cpp",0x14a,0);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = 8;
                    /* WARNING: Subroutine does not return */
      memset(puVar5 + 1,0,0x140);
    }
    *(undefined8 *)puVar2 = 0;
    if (_SUB_00000020 != 0) {
      uVar6 = _SUB_00000020 + *(long *)(_SUB_00000020 - 8) * 0xc;
      do {
        uVar6 = uVar6 - 0xc;
      } while (_SUB_00000020 <= uVar6);
      FUN_005b9b10(*(undefined8 *)puVar1);
    }
    _SUB_00000020 = 0;
    _DAT_00000010 = DAT_02762fa0;
    _SUB_00000018 = DAT_02762fa8;
    uRam0000000000000000 = DAT_02762f90;
    _DAT_00000008 = DAT_02762f98;
    lVar9 = *(long *)puVar2;
    uVar6 = *(ulong *)(lVar9 + 0x48);
    if (uVar6 != 0) {
      uVar7 = uVar6 + *(long *)(uVar6 - 8) * 0xc;
      do {
        uVar7 = uVar7 - 0xc;
      } while (uVar6 <= uVar7);
      FUN_005b9b10(*(undefined8 *)puVar1);
      *(undefined8 *)(lVar9 + 0x48) = 0;
    }
    *(undefined8 *)(lVar9 + 0x48) = 0;
    uVar4 = DAT_02762fc8;
    uVar3 = DAT_02762fb8;
    uVar8 = DAT_02762fb0;
    *(undefined8 *)(lVar9 + 0x38) = DAT_02762fc0;
    *(undefined8 *)(lVar9 + 0x40) = uVar4;
    *(undefined8 *)(lVar9 + 0x28) = uVar8;
    *(undefined8 *)(lVar9 + 0x30) = uVar3;
    lVar9 = *(long *)puVar2;
    uVar6 = *(ulong *)(lVar9 + 0x70);
    if (uVar6 != 0) {
      uVar7 = uVar6 + *(long *)(uVar6 - 8) * 0xc;
      do {
        uVar7 = uVar7 - 0xc;
      } while (uVar6 <= uVar7);
      FUN_005b9b10(*(undefined8 *)puVar1);
      *(undefined8 *)(lVar9 + 0x70) = 0;
    }
    *(undefined8 *)(lVar9 + 0x70) = 0;
    uVar4 = DAT_02762fe8;
    uVar3 = DAT_02762fd8;
    uVar8 = DAT_02762fd0;
    *(undefined8 *)(lVar9 + 0x60) = DAT_02762fe0;
    *(undefined8 *)(lVar9 + 0x68) = uVar4;
    *(undefined8 *)(lVar9 + 0x50) = uVar8;
    *(undefined8 *)(lVar9 + 0x58) = uVar3;
    lVar9 = *(long *)puVar2;
    uVar6 = *(ulong *)(lVar9 + 0x98);
    if (uVar6 != 0) {
      uVar7 = uVar6 + *(long *)(uVar6 - 8) * 0xc;
      do {
        uVar7 = uVar7 - 0xc;
      } while (uVar6 <= uVar7);
      FUN_005b9b10(*(undefined8 *)puVar1);
      *(undefined8 *)(lVar9 + 0x98) = 0;
    }
    *(undefined8 *)(lVar9 + 0x98) = 0;
    uVar4 = DAT_02763008;
    uVar3 = DAT_02762ff8;
    uVar8 = DAT_02762ff0;
    *(undefined8 *)(lVar9 + 0x88) = DAT_02763000;
    *(undefined8 *)(lVar9 + 0x90) = uVar4;
    *(undefined8 *)(lVar9 + 0x78) = uVar8;
    *(undefined8 *)(lVar9 + 0x80) = uVar3;
    lVar9 = *(long *)puVar2;
    uVar6 = *(ulong *)(lVar9 + 0xc0);
    if (uVar6 != 0) {
      uVar7 = uVar6 + *(long *)(uVar6 - 8) * 0xc;
      do {
        uVar7 = uVar7 - 0xc;
      } while (uVar6 <= uVar7);
      FUN_005b9b10(*(undefined8 *)puVar1);
      *(undefined8 *)(lVar9 + 0xc0) = 0;
    }
    *(undefined8 *)(lVar9 + 0xc0) = 0;
    uVar4 = DAT_02763028;
    uVar3 = DAT_02763018;
    uVar8 = DAT_02763010;
    *(undefined8 *)(lVar9 + 0xb0) = DAT_02763020;
    *(undefined8 *)(lVar9 + 0xb8) = uVar4;
    *(undefined8 *)(lVar9 + 0xa0) = uVar8;
    *(undefined8 *)(lVar9 + 0xa8) = uVar3;
    lVar9 = *(long *)puVar2;
    uVar6 = *(ulong *)(lVar9 + 0xe8);
    if (uVar6 != 0) {
      uVar7 = uVar6 + *(long *)(uVar6 - 8) * 0xc;
      do {
        uVar7 = uVar7 - 0xc;
      } while (uVar6 <= uVar7);
      FUN_005b9b10(*(undefined8 *)puVar1);
      *(undefined8 *)(lVar9 + 0xe8) = 0;
    }
    *(undefined8 *)(lVar9 + 0xe8) = 0;
    uVar4 = DAT_02763048;
    uVar3 = DAT_02763038;
    uVar8 = DAT_02763030;
    *(undefined8 *)(lVar9 + 0xd8) = DAT_02763040;
    *(undefined8 *)(lVar9 + 0xe0) = uVar4;
    *(undefined8 *)(lVar9 + 200) = uVar8;
    *(undefined8 *)(lVar9 + 0xd0) = uVar3;
    lVar9 = *(long *)puVar2;
    uVar6 = *(ulong *)(lVar9 + 0x110);
    if (uVar6 != 0) {
      uVar7 = uVar6 + *(long *)(uVar6 - 8) * 0xc;
      do {
        uVar7 = uVar7 - 0xc;
      } while (uVar6 <= uVar7);
      FUN_005b9b10(*(undefined8 *)puVar1);
      *(undefined8 *)(lVar9 + 0x110) = 0;
    }
    *(undefined8 *)(lVar9 + 0x110) = 0;
    uVar4 = DAT_02763068;
    uVar3 = DAT_02763058;
    uVar8 = DAT_02763050;
    *(undefined8 *)(lVar9 + 0x100) = DAT_02763060;
    *(undefined8 *)(lVar9 + 0x108) = uVar4;
    *(undefined8 *)(lVar9 + 0xf0) = uVar8;
    *(undefined8 *)(lVar9 + 0xf8) = uVar3;
    puVar1 = PTR_DAT_02713c40;
    *(undefined8 *)(PTR_DAT_02713c40 + 0x10) = 0;
    *(undefined8 *)(puVar1 + 0x18) = 0x3f8000003f800000;
    *(undefined8 *)puVar1 = 0x3f8000003f800000;
    *(undefined8 *)(puVar1 + 8) = 0x3f8000003f800000;
    *(undefined8 *)(puVar1 + 0x30) = 0x3f800000;
    *(undefined8 *)(puVar1 + 0x38) = 0x3f80000000000000;
    *(undefined8 *)(puVar1 + 0x20) = 0x3f80000000000000;
    *(undefined8 *)(puVar1 + 0x28) = 0x3f80000000000000;
    puVar2 = PTR_DAT_02713c50;
    *(undefined8 *)PTR_DAT_02713c50 = 0x3f8000003f800000;
    *(undefined8 *)(puVar2 + 8) = 0x3f8000003f800000;
    uVar8 = *(undefined8 *)(puVar1 + 0x38);
    *(undefined8 *)(puVar2 + 0x10) = *(undefined8 *)(puVar1 + 0x30);
    *(undefined8 *)(puVar2 + 0x18) = uVar8;
    uVar8 = *(undefined8 *)(puVar1 + 0x28);
    *(undefined8 *)(puVar2 + 0x20) = 0x3f80000000000000;
    *(undefined8 *)(puVar2 + 0x28) = uVar8;
    uVar8 = *(undefined8 *)(puVar1 + 0x18);
    *(undefined8 *)(puVar2 + 0x30) = *(undefined8 *)(puVar1 + 0x10);
    *(undefined8 *)(puVar2 + 0x38) = uVar8;
  }
  return 0;
}


