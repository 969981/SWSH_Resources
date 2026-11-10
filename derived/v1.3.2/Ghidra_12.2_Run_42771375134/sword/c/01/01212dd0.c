/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01212dd0; name: FUN_01212dd0
 */


undefined4 * FUN_01212dd0(undefined8 *param_1,undefined4 *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 *puVar15;
  long lVar16;
  undefined8 uVar17;
  
  lVar3 = param_1[8];
  uVar4 = param_1[9];
  uVar8 = param_1[10];
  puVar15 = (undefined4 *)(lVar3 + uVar4 * 0x260);
  if (uVar4 < uVar8) {
    uVar17 = *param_1;
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (*(ulong *)(lVar5 + 0x80) < 0x10) {
      *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar17;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      *puVar15 = *param_2;
      lVar16 = lVar3 + uVar4 * 0x260;
      *(undefined1 *)(lVar16 + 0x10) = 0;
      *(undefined1 *)(lVar16 + 0x18) = 0;
      *(undefined1 *)(lVar16 + 0x28) = 0;
      *(undefined1 *)(lVar16 + 0x4c) = 0;
      *(undefined1 *)(lVar16 + 0x60) = 0;
      *(undefined1 *)(lVar16 + 0x9c) = 0;
      *(undefined1 *)(lVar16 + 0xf0) = 0;
      *(undefined1 *)(lVar16 + 0x1b0) = 0;
      *(undefined1 *)(lVar16 + 0x200) = 0;
      *(undefined1 *)(lVar16 + 0x230) = 0;
      *(undefined1 *)(lVar16 + 0x238) = 0;
      *(undefined4 *)(lVar16 + 0x250) = 0;
      *(undefined8 *)(lVar16 + 0x248) = 0;
      *(undefined8 *)(lVar16 + 0x240) = 0;
      if (*(char *)(param_3 + 0x1e0) != '\0') {
        lVar6 = lVar3 + uVar4 * 0x260;
        *(undefined8 *)(lVar6 + 0x208) = *(undefined8 *)(param_3 + 0x1e8);
        uVar17 = *(undefined8 *)(param_3 + 0x1f0);
        uVar10 = *(undefined8 *)(param_3 + 0x1f8);
        uVar9 = *(undefined8 *)(param_3 + 0x200);
        *(undefined8 *)(lVar6 + 0x228) = *(undefined8 *)(param_3 + 0x208);
        *(undefined8 *)(lVar6 + 0x220) = uVar9;
        *(undefined8 *)(lVar6 + 0x218) = uVar10;
        *(undefined8 *)(lVar6 + 0x210) = uVar17;
        *(undefined1 *)(lVar16 + 0x200) = 1;
      }
      if (*(char *)(param_3 + 400) != '\0') {
        lVar6 = lVar3 + uVar4 * 0x260;
        uVar12 = *(undefined8 *)(param_3 + 0x1c4);
        uVar13 = *(undefined8 *)(param_3 + 0x1cc);
        uVar14 = *(undefined8 *)(param_3 + 0x1d4);
        *(undefined4 *)(lVar6 + 0x1fc) = *(undefined4 *)(param_3 + 0x1dc);
        uVar17 = *(undefined8 *)(param_3 + 0x194);
        *(undefined8 *)(lVar6 + 0x1bc) = *(undefined8 *)(param_3 + 0x19c);
        *(undefined8 *)(lVar6 + 0x1b4) = uVar17;
        uVar17 = *(undefined8 *)(param_3 + 0x1bc);
        uVar9 = *(undefined8 *)(param_3 + 0x1ac);
        uVar10 = *(undefined8 *)(param_3 + 0x1a4);
        uVar11 = *(undefined8 *)(param_3 + 0x1b4);
        *(undefined8 *)(lVar6 + 500) = uVar14;
        *(undefined8 *)(lVar6 + 0x1ec) = uVar13;
        *(undefined8 *)(lVar6 + 0x1dc) = uVar17;
        *(undefined8 *)(lVar6 + 0x1cc) = uVar9;
        *(undefined8 *)(lVar6 + 0x1d4) = uVar11;
        *(undefined8 *)(lVar6 + 0x1e4) = uVar12;
        *(undefined8 *)(lVar6 + 0x1c4) = uVar10;
        *(undefined1 *)(lVar16 + 0x1b0) = 1;
      }
      if (*(char *)(param_3 + 0xd0) != '\0') {
        memcpy((void *)(lVar3 + uVar4 * 0x260 + 0x100),(void *)(param_3 + 0xe0),0xb0);
        *(undefined1 *)(lVar16 + 0xf0) = 1;
      }
      FUN_01213f00((undefined1 *)(lVar16 + 0x10),param_3);
      FUN_01225e20(puVar15);
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      param_1[9] = param_1[9] + 1;
      return puVar15;
    }
  }
  else {
    uVar7 = param_1[1];
    uVar1 = uVar4 + 1;
    if (uVar1 - uVar8 <= uVar7 - uVar8) {
      uVar2 = uVar8 << 3;
      if (4 < uVar8 >> 0x3d) {
        uVar2 = 0xffffffffffffffff;
      }
      if (uVar8 >> 0x3d == 0) {
        uVar2 = (uVar8 << 3) / 5;
      }
      uVar8 = uVar7;
      if (uVar2 <= uVar7) {
        uVar8 = uVar2;
      }
      if (uVar1 <= uVar8) {
        uVar1 = uVar8;
      }
      if (uVar1 <= uVar7) {
        uVar17 = (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,uVar1 * 0x260,0x10);
        FUN_012141a0(param_1,uVar17,uVar1,puVar15,1,param_3,param_2);
        return (undefined4 *)(param_1[8] + ((long)(uVar4 * 0x260) >> 5) * 0x20);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


