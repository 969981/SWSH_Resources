/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fb9780; name: FUN_00fb9780
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00fb9780(long param_1,long *param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  long lVar8;
  ulong *puVar9;
  ulong uVar10;
  
  *(undefined1 *)(param_1 + 0x44) = 0;
  if (param_3 == 0) {
    *(undefined1 *)(param_1 + 0x47) = 0;
    lVar8 = *param_2;
    if (lVar8 == 0x5742865396e549d0) {
      uVar7 = 1;
    }
    else if (lVar8 == 0x674edc539f9f74a6) {
      uVar7 = 3;
    }
    else {
      if (lVar8 != 0x5ea5c3539ab81c81) {
        *(undefined8 *)(param_1 + 0x1f8) = *(undefined8 *)(param_1 + 0x1f0);
        *(undefined1 *)(param_1 + 0x1c0) = 0;
        return;
      }
      uVar7 = 2;
    }
    *(undefined1 *)(param_1 + 0x47) = uVar7;
    *(undefined1 *)(param_1 + 0x44) = 1;
    uVar3 = *(uint *)(param_1 + 0x1c4);
    *(undefined2 *)(param_1 + 0x1c1) = 0;
    *(undefined1 *)(param_1 + 0x1c3) = 0;
    *(undefined4 *)(param_1 + 0x1c8) = 0;
    *(undefined8 *)(param_1 + 0x1cc) = 0;
    uVar6 = _UNK_01d4b578;
    uVar5 = _DAT_01d4b570;
    *(undefined8 *)(param_1 + 0x1d4) = 0;
    *(undefined4 *)(param_1 + 0x1dc) = 0;
    *(undefined1 *)(param_1 + 0x1c0) = 0;
    *(undefined8 *)(param_1 + 0x1f8) = *(undefined8 *)(param_1 + 0x1f0);
    *(undefined8 *)(param_1 + 0x1e8) = uVar6;
    *(undefined8 *)(param_1 + 0x1e0) = uVar5;
    if ((int)uVar3 < 0) {
      puVar9 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
      uVar2 = *puVar9;
      uVar10 = puVar9[1] ^ uVar2;
      uVar3 = (int)puVar9[1] + (int)uVar2 & 0xff;
      *puVar9 = uVar10 ^ (uVar2 >> 0x28 | uVar2 << 0x18) ^ uVar10 << 0x10;
      puVar9[1] = uVar10 >> 0x1b | uVar10 << 0x25;
      *(uint *)(param_1 + 0x1c4) = uVar3;
      cVar4 = *(char *)(param_1 + 0x46);
    }
    else {
      cVar4 = *(char *)(param_1 + 0x46);
    }
    if (cVar4 != '\0') {
      *(undefined1 *)(param_1 + 0x46) = 0;
      return;
    }
    uVar1 = uVar3 + 0x100;
    if (-1 < (int)(uVar3 + 1)) {
      uVar1 = uVar3 + 1;
    }
    *(uint *)(param_1 + 0x1c4) = (uVar3 + 1) - (uVar1 & 0xffffff00);
  }
  else if (param_3 == 2) {
    if (*(char *)(param_1 + 0x47) != '\0') {
      *(undefined1 *)(param_1 + 0x46) = 1;
      return;
    }
  }
  else if (param_3 == 1) {
    *(undefined1 *)(param_1 + 0x47) = 0;
    return;
  }
  return;
}


