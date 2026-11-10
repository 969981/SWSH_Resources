/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01214860; name: FUN_01214860
 */


undefined4 * FUN_01214860(undefined8 *param_1,undefined4 *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  
  lVar7 = param_1[8];
  uVar3 = param_1[9];
  uVar9 = param_1[10];
  puVar16 = (undefined4 *)(lVar7 + uVar3 * 0x260);
  if (uVar3 < uVar9) {
    uVar17 = *param_1;
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (*(ulong *)(lVar4 + 0x80) < 0x10) {
      *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar17;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      *puVar16 = *param_2;
      lVar5 = lVar7 + uVar3 * 0x260;
      *(undefined1 *)(lVar5 + 0x10) = 0;
      *(undefined1 *)(lVar5 + 0x18) = 0;
      *(undefined1 *)(lVar5 + 0x28) = 0;
      *(undefined1 *)(lVar5 + 0x4c) = 0;
      *(undefined1 *)(lVar5 + 0x60) = 0;
      *(undefined1 *)(lVar5 + 0x9c) = 0;
      *(undefined1 *)(lVar5 + 0xf0) = 0;
      *(undefined1 *)(lVar5 + 0x1b0) = 0;
      *(undefined1 *)(lVar5 + 0x200) = 0;
      *(undefined1 *)(lVar5 + 0x230) = 0;
      *(undefined1 *)(lVar5 + 0x238) = 0;
      *(undefined4 *)(lVar5 + 0x250) = 0;
      *(undefined8 *)(lVar5 + 0x248) = 0;
      *(undefined8 *)(lVar5 + 0x240) = 0;
      if (*(char *)(param_3 + 0x120) != '\0') {
        lVar6 = lVar7 + uVar3 * 0x260;
        *(undefined8 *)(lVar6 + 0x208) = *(undefined8 *)(param_3 + 0x128);
        uVar17 = *(undefined8 *)(param_3 + 0x130);
        uVar11 = *(undefined8 *)(param_3 + 0x138);
        uVar10 = *(undefined8 *)(param_3 + 0x140);
        *(undefined8 *)(lVar6 + 0x228) = *(undefined8 *)(param_3 + 0x148);
        *(undefined8 *)(lVar6 + 0x220) = uVar10;
        *(undefined8 *)(lVar6 + 0x218) = uVar11;
        *(undefined8 *)(lVar6 + 0x210) = uVar17;
        *(undefined1 *)(lVar5 + 0x200) = 1;
      }
      if (*(char *)(param_3 + 0xc0) != '\0') {
        lVar7 = lVar7 + uVar3 * 0x260;
        uVar10 = *(undefined8 *)(param_3 + 0xf4);
        uVar11 = *(undefined8 *)(param_3 + 0xfc);
        uVar12 = *(undefined8 *)(param_3 + 0x104);
        *(undefined4 *)(lVar7 + 0x1fc) = *(undefined4 *)(param_3 + 0x10c);
        uVar17 = *(undefined8 *)(param_3 + 0xc4);
        *(undefined8 *)(lVar7 + 0x1bc) = *(undefined8 *)(param_3 + 0xcc);
        *(undefined8 *)(lVar7 + 0x1b4) = uVar17;
        uVar13 = *(undefined8 *)(param_3 + 0xdc);
        uVar15 = *(undefined8 *)(param_3 + 0xec);
        uVar14 = *(undefined8 *)(param_3 + 0xe4);
        uVar17 = *(undefined8 *)(param_3 + 0xd4);
        *(undefined8 *)(lVar7 + 500) = uVar12;
        *(undefined8 *)(lVar7 + 0x1ec) = uVar11;
        *(undefined8 *)(lVar7 + 0x1dc) = uVar15;
        *(undefined8 *)(lVar7 + 0x1cc) = uVar13;
        *(undefined8 *)(lVar7 + 0x1d4) = uVar14;
        *(undefined8 *)(lVar7 + 0x1e4) = uVar10;
        *(undefined8 *)(lVar7 + 0x1c4) = uVar17;
        *(undefined1 *)(lVar5 + 0x1b0) = 1;
      }
      FUN_012156b0((undefined1 *)(lVar5 + 0x10),param_3);
      FUN_01225e20(puVar16);
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      param_1[9] = param_1[9] + 1;
      return puVar16;
    }
  }
  else {
    uVar8 = param_1[1];
    uVar1 = uVar3 + 1;
    if (uVar1 - uVar9 <= uVar8 - uVar9) {
      uVar2 = uVar9 << 3;
      if (4 < uVar9 >> 0x3d) {
        uVar2 = 0xffffffffffffffff;
      }
      if (uVar9 >> 0x3d == 0) {
        uVar2 = (uVar9 << 3) / 5;
      }
      uVar9 = uVar8;
      if (uVar2 <= uVar8) {
        uVar9 = uVar2;
      }
      if (uVar1 <= uVar9) {
        uVar1 = uVar9;
      }
      if (uVar1 <= uVar8) {
        uVar17 = (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,uVar1 * 0x260,0x10);
        FUN_01215940(param_1,uVar17,uVar1,puVar16,1,param_3,param_2);
        return (undefined4 *)(param_1[8] + ((long)(uVar3 * 0x260) >> 5) * 0x20);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


