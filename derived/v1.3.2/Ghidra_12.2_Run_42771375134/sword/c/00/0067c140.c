/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0067c140; name: FUN_0067c140
 */


void FUN_0067c140(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  
  iVar8 = (int)*(undefined8 *)(param_1 + 0x180);
  if (0 < iVar8) {
    lVar9 = *(long *)(param_1 + 0x198);
    lVar10 = 0;
    do {
      uVar7 = FUN_005c9030(lVar9,(undefined8 *)(param_2 + 0x28));
      if ((uVar7 & 1) != 0) {
        if (-1 < (int)lVar10) goto LAB_0067c210;
        break;
      }
      lVar10 = lVar10 + 1;
      lVar9 = lVar9 + 0x20;
    } while (lVar10 < iVar8);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  uVar5 = *(undefined8 *)(param_2 + 0x40);
  uVar7 = *(ulong *)(param_1 + 0x180);
  uVar6 = *(ulong *)(param_1 + 0x188);
  if (uVar6 <= uVar7) {
    if (*(long *)(param_1 + 0x1b0) == 0) {
      lVar10 = uVar6 * 2;
      if (lVar10 == 0) {
        lVar10 = 1;
      }
      uVar7 = FUN_0067c900(param_1 + 0x170,lVar10,1);
    }
    else {
      uVar7 = FUN_0067c900(param_1 + 0x170,*(long *)(param_1 + 0x1b0) + uVar6,1);
    }
    if ((uVar7 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x180) = 0;
      *(undefined8 *)(param_1 + 0x1a0) = 0;
      *(undefined8 *)(param_1 + 0x1a8) = 0;
      lVar10 = *(long *)(param_2 + 0x98);
      goto joined_r0x0067c214;
    }
    uVar7 = *(ulong *)(param_1 + 0x180);
  }
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x198) + uVar7 * 0x20);
  puVar1[2] = uVar3;
  puVar1[3] = uVar5;
  *puVar1 = uVar2;
  puVar1[1] = uVar4;
  lVar10 = *(long *)(param_1 + 0x180) + 1;
  *(long *)(param_1 + 0x180) = lVar10;
  *(long *)(param_1 + 0x1a0) = *(long *)(param_1 + 0x198);
  *(long *)(param_1 + 0x1a8) = *(long *)(param_1 + 0x198) + lVar10 * 0x20;
LAB_0067c210:
  lVar10 = *(long *)(param_2 + 0x98);
joined_r0x0067c214:
  for (; lVar10 != 0; lVar10 = *(long *)(lVar10 + 0x20)) {
    FUN_0067c140(param_1,lVar10);
  }
  return;
}


