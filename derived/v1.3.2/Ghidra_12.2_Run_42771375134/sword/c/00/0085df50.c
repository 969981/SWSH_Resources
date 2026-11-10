/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0085df50; name: FUN_0085df50
 */


undefined8 FUN_0085df50(long param_1,ulong *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  int *piVar7;
  int iVar8;
  undefined8 uVar9;
  
LAB_0085df74:
  do {
    pbVar1 = (byte *)*param_2;
    if (pbVar1 < (byte *)param_2[1]) {
      uVar5 = (uint)*pbVar1;
      if ((char)*pbVar1 < '\x01') goto LAB_0085e0c4;
      *(uint *)(param_2 + 4) = uVar5;
      *param_2 = (ulong)(pbVar1 + 1);
LAB_0085dfa4:
      if (uVar5 == 10) {
        uVar6 = param_2[7];
        *(int *)(param_2 + 7) = (int)uVar6 + -1;
        if ((int)uVar6 < 1) {
          return 0;
        }
        do {
          piVar7 = *(int **)(param_1 + 0x28);
          if (piVar7 == (int *)0x0) {
            iVar8 = *(int *)(param_1 + 0x24);
LAB_0085e008:
            FUN_00824290(param_1 + 0x18,iVar8 + 1);
            piVar7 = *(int **)(param_1 + 0x28);
            iVar8 = *piVar7;
LAB_0085e01c:
            *piVar7 = iVar8 + 1;
            uVar9 = FUN_00860a60(0,*(undefined8 *)(param_1 + 0x18));
            iVar8 = *(int *)(param_1 + 0x20);
            *(int *)(param_1 + 0x20) = iVar8 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0x28) + (long)iVar8 * 8 + 8) = uVar9;
          }
          else {
            iVar3 = *(int *)(param_1 + 0x20);
            iVar8 = *piVar7;
            if (iVar8 <= iVar3) {
              if (iVar8 == *(int *)(param_1 + 0x24)) goto LAB_0085e008;
              goto LAB_0085e01c;
            }
            *(int *)(param_1 + 0x20) = iVar3 + 1;
            uVar9 = *(undefined8 *)(piVar7 + (long)iVar3 * 2 + 2);
          }
          uVar4 = FUN_0080cab0(param_2);
          uVar6 = FUN_0085cbc0(uVar9,param_2);
          if ((uVar6 & 1) == 0) {
            return 0;
          }
          uVar6 = FUN_0080cc00(param_2,uVar4);
          if ((uVar6 & 1) == 0) {
            return 0;
          }
          pcVar2 = (char *)*param_2;
          if (((char *)param_2[1] <= pcVar2) || (*pcVar2 != '\n')) goto LAB_0085e090;
          *param_2 = (ulong)(pcVar2 + 1);
        } while( true );
      }
    }
    else {
      uVar5 = 0;
LAB_0085e0c4:
      uVar5 = FUN_0080d8c0(param_2,uVar5);
      *(uint *)(param_2 + 4) = uVar5;
      if (uVar5 - 1 < 0x7f) goto LAB_0085dfa4;
    }
    if (uVar5 == 0) {
      return 1;
    }
    if ((uVar5 & 7) == 4) {
      return 1;
    }
    uVar6 = *(ulong *)(param_1 + 8);
    if ((uVar6 & 1) == 0) {
      uVar9 = FUN_009bb7d0((ulong *)(param_1 + 8));
      uVar6 = FUN_00810550(param_2,uVar5,uVar9);
    }
    else {
      uVar6 = FUN_00810550(param_2,uVar5,uVar6 & 0xfffffffffffffffe);
    }
    if ((uVar6 & 1) == 0) {
      return 0;
    }
  } while( true );
LAB_0085e090:
  *(int *)(param_2 + 7) = (int)param_2[7] + 1;
  if ((pcVar2 == (char *)param_2[1]) &&
     ((*(int *)((long)param_2 + 0x2c) != 0 || ((int)param_2[3] == (int)param_2[5])))) {
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined1 *)((long)param_2 + 0x24) = 1;
    return 1;
  }
  goto LAB_0085df74;
}


