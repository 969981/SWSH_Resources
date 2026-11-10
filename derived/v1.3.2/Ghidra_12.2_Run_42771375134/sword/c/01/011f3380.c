/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f3380; name: FUN_011f3380
 */


void FUN_011f3380(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  
  puVar5 = PTR_DAT_02725ce8;
  if (*PTR_DAT_02725ce8 != '\0') {
    return;
  }
  *(undefined8 *)(PTR_DAT_02725ce8 + 0x20) = param_1;
  *(undefined8 *)(puVar5 + 0x28) = 0;
  *(undefined4 *)(puVar5 + 0x30) = 0;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  plVar6 = (long *)(puVar5 + 8);
  *plVar6 = 0;
  *puVar5 = 1;
  if (99 < (ulong)(*(long *)(puVar5 + 0x18) - *plVar6 >> 7)) {
    return;
  }
  lVar9 = *(long *)(puVar5 + 0x10) - *plVar6 >> 7;
  lVar7 = (**(code **)(**(long **)(puVar5 + 0x20) + 0x10))(*(long **)(puVar5 + 0x20),0x3200,8);
  if (lVar7 == 0) {
    (**(code **)(**(long **)(puVar5 + 0x20) + 0xb8))();
    puVar10 = (undefined8 *)(lVar9 * 0x80);
    lVar9 = *plVar6;
    lVar13 = *(long *)(puVar5 + 0x10);
    if (lVar13 != lVar9) goto LAB_011f3438;
  }
  else {
    puVar10 = (undefined8 *)(lVar7 + lVar9 * 0x80);
    lVar9 = *plVar6;
    lVar13 = *(long *)(puVar5 + 0x10);
    if (lVar13 != lVar9) {
LAB_011f3438:
      puVar4 = PTR_DAT_02710860;
      puVar11 = puVar10;
      do {
        uVar14 = *(undefined8 *)(puVar5 + 0x20);
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
        if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar14;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        uVar2 = *(undefined8 *)(lVar13 + -0x78);
        uVar14 = *(undefined8 *)(lVar13 + -0x70);
        uVar3 = *(undefined8 *)(lVar13 + -0x68);
        puVar12 = puVar11 + -0x10;
        *puVar12 = *(undefined8 *)(lVar13 + -0x80);
        puVar11[-0xe] = uVar14;
        puVar11[-0xd] = uVar3;
        puVar11[-0xf] = uVar2;
        uVar14 = *(undefined8 *)(lVar13 + -0x60);
        uVar2 = *(undefined8 *)(lVar13 + -0x58);
        uVar3 = *(undefined8 *)(lVar13 + -0x48);
        puVar11[-10] = *(undefined8 *)(lVar13 + -0x50);
        puVar11[-9] = uVar3;
        puVar11[-0xc] = uVar14;
        puVar11[-0xb] = uVar2;
        uVar14 = *(undefined8 *)(lVar13 + -0x40);
        uVar2 = *(undefined8 *)(lVar13 + -0x38);
        uVar3 = *(undefined8 *)(lVar13 + -0x28);
        puVar11[-6] = *(undefined8 *)(lVar13 + -0x30);
        puVar11[-5] = uVar3;
        puVar11[-8] = uVar14;
        puVar11[-7] = uVar2;
        uVar14 = *(undefined8 *)(lVar13 + -0x20);
        uVar2 = *(undefined8 *)(lVar13 + -0x18);
        puVar1 = (undefined8 *)(lVar13 + -0x10);
        uVar3 = *(undefined8 *)(lVar13 + -8);
        lVar13 = lVar13 + -0x80;
        puVar11[-2] = *puVar1;
        puVar11[-1] = uVar3;
        puVar11[-4] = uVar14;
        puVar11[-3] = uVar2;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        puVar11 = puVar12;
      } while (lVar9 != lVar13);
      lVar9 = *plVar6;
      goto LAB_011f34f4;
    }
  }
  puVar12 = puVar10;
LAB_011f34f4:
  lVar13 = *(long *)(puVar5 + 0x18);
  *(long *)(puVar5 + 0x18) = lVar7 + 0x3200;
  *plVar6 = (long)puVar12;
  *(undefined8 **)(puVar5 + 0x10) = puVar10;
  if (lVar9 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x011f3538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(puVar5 + 0x20) + 0x18))(*(long **)(puVar5 + 0x20),lVar9,lVar13 - lVar9,8)
  ;
  return;
}


