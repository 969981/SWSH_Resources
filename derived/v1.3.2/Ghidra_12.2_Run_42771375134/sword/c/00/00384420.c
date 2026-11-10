/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00384420; name: FUN_00384420
 */


void FUN_00384420(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  byte bVar3;
  long lVar4;
  uint *puVar5;
  int *piVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  byte *pbVar10;
  undefined8 local_110;
  undefined1 local_108;
  undefined1 uStack_107;
  undefined6 uStack_106;
  
  uVar2 = *param_2;
  lVar4 = *param_1;
  puVar5 = (uint *)(lVar4 + 0x10);
  uVar7 = *puVar5;
  if (uVar7 != 0) {
    lVar8 = *(long *)(lVar4 + 8);
    uVar9 = (ulong)(uVar7 - 1);
    pbVar10 = (byte *)(lVar8 + uVar9 * 0x10 + 8);
    if (*pbVar10 == 0) {
      bVar3 = 0;
      if ((char)param_1[9] != '\0') {
        bVar3 = (**(code **)(*(long *)param_1[5] + 0x20))
                          ((long *)param_1[5],*(undefined8 *)(lVar8 + uVar9 * 0x10));
        bVar3 = bVar3 & 1;
        lVar4 = *param_1;
        *(byte *)(param_1 + 9) = bVar3;
        lVar8 = *(long *)(lVar4 + 8);
        puVar5 = (uint *)(lVar4 + 0x10);
        uVar7 = *puVar5;
        uVar9 = (ulong)(uVar7 - 1);
        pbVar10 = (byte *)(lVar8 + uVar9 * 0x10 + 8);
      }
      *(byte *)(lVar8 + uVar9 * 0x10 + 9) = bVar3;
      *pbVar10 = bVar3;
    }
  }
  uStack_107 = (undefined1)param_1[9];
  local_108 = 0;
  local_110 = uVar2;
  if (uVar7 < (*(uint *)(lVar4 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined8 *)(*(long *)(lVar4 + 8) + (ulong)uVar7 * 0x10);
    puVar1[1] = (ulong)CONCAT61(uStack_106,uStack_107) << 8;
    *puVar1 = uVar2;
    *puVar5 = *puVar5 + 1;
  }
  else {
    FUN_00321500(lVar4,&local_110);
  }
  piVar6 = (int *)param_1[0xb];
  if (piVar6 != (int *)0x0) {
    *piVar6 = *piVar6 + 1;
  }
                    /* WARNING: Subroutine does not return */
  memset(&local_110,0,0xe0);
}


