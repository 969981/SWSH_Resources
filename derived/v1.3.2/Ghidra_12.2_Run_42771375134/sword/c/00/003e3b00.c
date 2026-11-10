/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e3b00; name: FUN_003e3b00
 */


long FUN_003e3b00(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ushort uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  undefined4 uVar11;
  long lVar12;
  
  if (*(char *)(param_1 + 0x1ed8) != '\0') {
    lVar6 = *(long *)(param_1 + 0x1048);
    uVar4 = *(uint *)(lVar6 + 0x10);
    uVar7 = (ulong)uVar4;
    if (uVar4 != 0) {
      lVar9 = *(long *)(lVar6 + 8);
      uVar8 = 0;
      do {
        while( true ) {
          if (uVar8 < uVar4 - 1) {
            Hint_Prefetch(*(undefined8 *)(lVar9 + uVar8 * 8 + 8),0,0,0);
          }
          lVar12 = *(long *)(lVar9 + uVar8 * 8);
          puVar10 = *(uint **)(lVar12 + 0x18);
          uVar5 = *(ushort *)((long)puVar10 + 10);
          if ((uVar5 >> 1 & 1) == 0) break;
LAB_003e3bfc:
          uVar8 = uVar8 + 1;
          if (uVar8 == uVar7) {
            return param_1;
          }
        }
        uVar1 = uVar8 + 1;
        if (uVar1 < uVar7) {
          param_1 = *(long *)(*(long *)(lVar9 + uVar1 * 8) + 0x18);
          Hint_Prefetch(param_1,0,0,0);
        }
        if ((((uVar5 & 0x1f) >> 3 & 1) == 0) || ((short)puVar10[2] == 0)) goto LAB_003e3bfc;
        lVar2 = *(long *)(lVar6 + 0x40) + (ulong)*puVar10;
        lVar3 = *(long *)(lVar12 + 0x10);
        lVar12 = *(long *)(*(long *)(lVar12 + 8) + 0x50);
        if (*(char *)(lVar12 + 0xd) == '\0') {
          *(undefined8 *)(lVar2 + 0xc) = 0;
          *(undefined4 *)(lVar2 + 0x14) = 0;
          *(undefined8 *)(lVar2 + 0x24) = 0;
          *(undefined4 *)(lVar2 + 0x2c) = 0;
          lVar12 = *(long *)(lVar3 + 0x50);
          if (*(char *)(lVar12 + 0xd) == '\0') goto LAB_003e3c28;
LAB_003e3bc8:
          *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar12 + 0x50);
          *(undefined4 *)(lVar2 + 0x1c) = *(undefined4 *)(lVar12 + 0x54);
          *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(lVar12 + 0x58);
          *(undefined4 *)(lVar2 + 0x30) = *(undefined4 *)(lVar12 + 0x60);
          *(undefined4 *)(lVar2 + 0x34) = *(undefined4 *)(lVar12 + 100);
          uVar11 = *(undefined4 *)(lVar12 + 0x68);
        }
        else {
          *(undefined4 *)(lVar2 + 0xc) = *(undefined4 *)(lVar12 + 0x50);
          *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(lVar12 + 0x54);
          *(undefined4 *)(lVar2 + 0x14) = *(undefined4 *)(lVar12 + 0x58);
          *(undefined4 *)(lVar2 + 0x24) = *(undefined4 *)(lVar12 + 0x60);
          *(undefined4 *)(lVar2 + 0x28) = *(undefined4 *)(lVar12 + 100);
          *(undefined4 *)(lVar2 + 0x2c) = *(undefined4 *)(lVar12 + 0x68);
          lVar12 = *(long *)(lVar3 + 0x50);
          if (*(char *)(lVar12 + 0xd) != '\0') goto LAB_003e3bc8;
LAB_003e3c28:
          uVar11 = 0;
          *(undefined8 *)(lVar2 + 0x18) = 0;
          *(undefined4 *)(lVar2 + 0x20) = 0;
          *(undefined8 *)(lVar2 + 0x30) = 0;
        }
        *(undefined4 *)(lVar2 + 0x38) = uVar11;
        *(ushort *)((long)puVar10 + 10) = uVar5 & 0xfff7;
        uVar8 = uVar1;
      } while (uVar1 != uVar7);
    }
  }
  return param_1;
}


