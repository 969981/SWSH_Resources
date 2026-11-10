/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012b9b90; name: FUN_012b9b90
 */


void FUN_012b9b90(uint *param_1,long param_2,long param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  int *piVar9;
  uint uVar10;
  long local_68;
  
  puVar3 = PTR_DAT_02727478;
  if (*(int *)(param_3 + 0x38) < 1) {
    uVar7 = 0x55;
    local_68 = 1;
  }
  else {
    local_68 = 1;
    lVar8 = 0;
    piVar9 = (int *)(param_3 + 0x1c);
    uVar7 = 0x55;
    do {
      uVar2 = *(uint *)(puVar3 + (long)piVar9[-1] * 4);
      if ((uVar2 == 0x24) || (uVar10 = uVar2, uVar2 == 0x22)) {
        uVar4 = FUN_0131acf0(*(undefined8 *)(param_2 + 0xc0));
        uVar10 = 0x23;
        if ((uVar4 & 1) == 0) goto LAB_012b9c68;
        lVar6 = *(long *)(param_2 + 0xc0);
        if (lVar6 != 0) {
          FUN_0131acf0(lVar6);
          piVar5 = *(int **)(lVar6 + 0x130);
          puVar1 = (uint *)((long)piVar5 + (ulong)*(ushort *)((long)piVar5 + (4 - (long)*piVar5)));
          uVar10 = 0x23;
          if (*(char *)((long)puVar1 + (ulong)uVar2 + (ulong)*puVar1 + 4) != '\0') {
            uVar10 = uVar2;
          }
          goto LAB_012b9c68;
        }
        uVar10 = 0x23;
        uVar4 = FUN_0131acf0(*(undefined8 *)(param_2 + 0xc0));
      }
      else {
LAB_012b9c68:
        uVar4 = FUN_0131acf0(*(undefined8 *)(param_2 + 0xc0));
      }
      if ((uVar4 & 1) != 0) {
        lVar6 = *(long *)(param_2 + 0xc0);
        if (lVar6 != 0) {
          if (uVar10 < 0x55) {
            FUN_0131acf0(lVar6);
            piVar5 = *(int **)(lVar6 + 0x130);
            puVar1 = (uint *)((long)piVar5 + (ulong)*(ushort *)((long)piVar5 + (4 - (long)*piVar5)))
            ;
            if (*(char *)((long)puVar1 + (ulong)uVar10 + (ulong)*puVar1 + 4) == '\0')
            goto LAB_012b9cc0;
          }
          local_68 = (long)*piVar9;
          uVar7 = uVar10;
        }
      }
LAB_012b9cc0:
      lVar8 = lVar8 + 1;
      piVar9 = piVar9 + 2;
    } while (lVar8 < *(int *)(param_3 + 0x38));
  }
  uVar2 = *(uint *)(PTR_DAT_02727480 + (long)*(int *)(param_3 + 0x3c) * 4);
  *param_1 = uVar7;
  param_1[1] = 0;
  *(long *)(param_1 + 2) = local_68;
  param_1[4] = uVar2;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_3 + 0x40);
  return;
}


