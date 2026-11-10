/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006fa810; name: FUN_006fa810
 */


/* WARNING: Removing unreachable block (ram,0x006fa9c8) */

void FUN_006fa810(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  int local_64;
  
  uVar5 = FUN_0199bf60(*(undefined8 *)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0xa8) = uVar5;
  lVar6 = nn::util::BinaryFileHeader::GetFirstBlock();
  puVar4 = PTR_DAT_027155e8;
  FUN_019a2e80(lVar6,PTR_DAT_027155e8,0,0,0);
  plVar9 = (long *)(param_1 + 0x78);
  uVar7 = (ulong)*(int *)(lVar6 + 0x1c);
  uVar8 = *(long *)(param_1 + 0x80) - *plVar9 >> 5;
  if (uVar8 < uVar7) {
    FUN_006fb010(plVar9,uVar7 - uVar8);
    iVar2 = *(int *)(lVar6 + 0x1c);
    puVar3 = PTR_DAT_027157f0;
  }
  else {
    if (uVar8 != uVar7) {
      lVar13 = *plVar9 + uVar7 * 0x20;
      lVar12 = *(long *)(param_1 + 0x80);
      while (lVar11 = lVar12, lVar13 != lVar11) {
        lVar12 = lVar11 + -0x20;
        FUN_006f6820(lVar12);
        if (*(long *)(lVar11 + -0x18) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar11 + -0x18) + 0x48) + 0x18))();
          *(undefined8 *)(lVar11 + -0x18) = 0;
        }
      }
      *(long *)(param_1 + 0x80) = lVar13;
    }
    iVar2 = *(int *)(lVar6 + 0x1c);
    puVar3 = PTR_DAT_027157f0;
  }
  PTR_DAT_027157f0 = puVar3;
  if (0 < iVar2) {
    lVar11 = 0;
    lVar12 = 0;
    lVar13 = 0;
    do {
      lVar10 = *(long *)(*(long *)(lVar6 + 0x20) +
                         *(long *)(puVar3 + (ulong)*(byte *)(lVar6 + 0x14) * 8) + lVar11);
      FUN_019a31e0(*(undefined8 *)(lVar10 + 0x68),puVar4,lVar10);
      lVar10 = FUN_019a2d40(lVar10,puVar4);
      if (lVar10 != 0) {
        (**(code **)PTR_DAT_02713a38)(*(undefined8 *)puVar4,0x19,&local_64);
        FUN_006f1b70(&local_88,param_2,1,lVar10,(long)local_64);
        puVar1 = (undefined8 *)(*plVar9 + lVar12);
        *puVar1 = local_88;
        if (puVar1[1] != 0) {
          (**(code **)(*(long *)(puVar1[1] + 0x48) + 0x18))();
          puVar1[1] = 0;
        }
        puVar1[1] = local_80;
        puVar1[2] = local_78;
        puVar1[3] = local_70;
        local_80 = 0;
        local_88 = 0;
        local_78 = 0xffffffffffffffff;
        local_70 = 0;
        FUN_006f6820(&local_88);
        if (local_80 != 0) {
          (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
          local_80 = 0;
        }
      }
      lVar13 = lVar13 + 1;
      lVar12 = lVar12 + 0x20;
      lVar11 = lVar11 + 0x40;
    } while (lVar13 < *(int *)(lVar6 + 0x1c));
  }
  return;
}


