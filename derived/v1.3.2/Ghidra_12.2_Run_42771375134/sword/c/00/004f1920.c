/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f1920; name: FUN_004f1920
 */


/* WARNING: Removing unreachable block (ram,0x004f19e4) */

undefined8 FUN_004f1920(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  
  if (*param_1 == 0) {
    uVar10 = *(uint *)(param_2 + 1);
    iVar3 = uVar10 - *(uint *)(param_1 + 1);
    if (*(uint *)(param_1 + 1) <= uVar10) goto LAB_004f1978;
  }
  else {
    *(uint *)(param_1 + 1) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02713640);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
    uVar10 = *(uint *)(param_2 + 1);
    uVar1 = *(uint *)(param_1 + 1);
    iVar3 = uVar10 - uVar1;
    if (uVar1 <= uVar10) {
LAB_004f1978:
      puVar4 = PTR_DAT_02713640;
      if (*(uint *)((long)param_1 + 0xc) < uVar10) {
        uVar1 = *(uint *)((long)param_1 + 0xc) + iVar3;
        puVar5 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02713640,(ulong)uVar1 << 3);
        if (puVar5 == (undefined8 *)0x0) {
          return 2;
        }
        puVar6 = (undefined8 *)*param_1;
        if ((puVar6 != (undefined8 *)0x0) && (puVar6 != puVar5)) {
          uVar2 = *(uint *)(param_1 + 1);
          if (uVar2 != 0) {
            *puVar5 = *puVar6;
            if (uVar2 != 1) {
              if (uVar2 == 2) {
                lVar8 = 1;
              }
              else {
                lVar9 = 0;
                do {
                  lVar8 = lVar9;
                  puVar5[lVar8 + 1] = *(undefined8 *)(*param_1 + lVar8 * 8 + 8);
                  puVar5[lVar8 + 2] = *(undefined8 *)(*param_1 + lVar8 * 8 + 0x10);
                  lVar9 = lVar8 + 2;
                } while (((ulong)uVar2 - 1) - (ulong)(~uVar2 & 1) != lVar8 + 2);
                lVar8 = lVar8 + 3;
                if ((~uVar2 & 1) == 0) goto LAB_004f1aac;
              }
              puVar5[lVar8] = *(undefined8 *)(*param_1 + lVar8 * 8);
            }
LAB_004f1aac:
            puVar6 = (undefined8 *)*param_1;
          }
          FUN_00404870(*(undefined4 *)puVar4,puVar6);
        }
        *param_1 = (long)puVar5;
        *(uint *)((long)param_1 + 0xc) = uVar1;
        *(uint *)(param_1 + 1) = uVar10;
        iVar3 = (int)param_2[1];
        goto joined_r0x004f1a04;
      }
    }
  }
  *(uint *)(param_1 + 1) = uVar10;
  iVar3 = (int)param_2[1];
joined_r0x004f1a04:
  if (iVar3 != 0) {
    uVar7 = 0;
    do {
      lVar9 = uVar7 * 8;
      uVar7 = uVar7 + 1;
      *(undefined8 *)(*param_1 + lVar9) = *(undefined8 *)(*param_2 + lVar9);
    } while (uVar7 < *(uint *)(param_2 + 1));
  }
  return 1;
}


