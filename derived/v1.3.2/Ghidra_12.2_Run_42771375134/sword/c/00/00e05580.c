/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e05580; name: FUN_00e05580
 */


void FUN_00e05580(undefined8 param_1,ushort *param_2,uint *param_3)

{
  long lVar1;
  uint uVar2;
  undefined1 uVar3;
  ulong uVar4;
  uint *puVar5;
  ushort *puVar6;
  ulong uVar7;
  ushort uVar8;
  long lVar9;
  
  if (*(ushort *)((long)param_3 - (long)(int)*param_3) < 5) {
    uVar3 = 0;
  }
  else {
    uVar4 = (ulong)((ushort *)((long)param_3 - (long)(int)*param_3))[2];
    uVar3 = 0;
    if (uVar4 != 0) {
      uVar3 = *(undefined1 *)((long)param_3 + uVar4);
    }
  }
  *(undefined1 *)param_2 = uVar3;
  if (*(ushort *)((long)param_3 - (long)(int)*param_3) < 7) {
    uVar3 = 0;
  }
  else {
    uVar4 = (ulong)((ushort *)((long)param_3 - (long)(int)*param_3))[3];
    uVar3 = 0;
    if (uVar4 != 0) {
      uVar3 = *(undefined1 *)((long)param_3 + uVar4);
    }
  }
  *(undefined1 *)((long)param_2 + 1) = uVar3;
  uVar4 = (ulong)(int)*param_3;
  puVar5 = (uint *)((long)param_3 + (ulong)*(ushort *)((long)param_3 + (8 - uVar4)));
  uVar2 = *(uint *)((long)puVar5 + (ulong)*puVar5);
  if (uVar2 != 0) {
    puVar5 = param_3 + 3;
    uVar7 = 1;
    while( true ) {
      puVar6 = param_2 + 3;
      uVar4 = (ulong)*(ushort *)((long)param_3 + (8 - (long)(int)uVar4));
      lVar1 = uVar4 + *(uint *)((long)param_3 + uVar4);
      lVar1 = lVar1 + (ulong)*(uint *)((long)puVar5 + lVar1 + -8);
      lVar9 = lVar1 - *(int *)((long)puVar5 + lVar1 + -8);
      if (*(ushort *)((long)puVar5 + lVar9 + -8) < 5) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(ushort *)((long)puVar5 + lVar9 + -4);
        if ((ulong)uVar8 != 0) {
          uVar8 = (ushort)*(byte *)((long)puVar5 + lVar1 + (ulong)uVar8 + -8);
        }
      }
      if (9 < uVar7 - 1) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      param_2[1] = uVar8;
      lVar9 = lVar1 - *(int *)((long)puVar5 + lVar1 + -8);
      if (*(ushort *)((long)puVar5 + lVar9 + -8) < 7) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(ushort *)((long)puVar5 + lVar9 + -2);
        if ((ulong)uVar8 != 0) {
          uVar8 = (ushort)*(undefined4 *)((long)puVar5 + lVar1 + (ulong)uVar8 + -8);
        }
      }
      param_2[2] = uVar8;
      lVar9 = lVar1 - *(int *)((long)puVar5 + lVar1 + -8);
      if ((*(ushort *)((long)puVar5 + lVar9 + -8) < 9) ||
         (uVar4 = (ulong)*(ushort *)((long)puVar5 + lVar9), uVar4 == 0)) {
        *puVar6 = 0;
      }
      else {
        *puVar6 = (ushort)*(byte *)((long)puVar5 + lVar1 + uVar4 + -8);
      }
      if (uVar2 <= uVar7) break;
      uVar4 = (ulong)*param_3;
      puVar5 = puVar5 + 1;
      uVar7 = uVar7 + 1;
      param_2 = puVar6;
    }
  }
  return;
}


