/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008fd740; name: FUN_008fd740
 */


void FUN_008fd740(long param_1,char *param_2)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  bool bVar4;
  char cVar5;
  long *plVar6;
  ulong uVar7;
  uint uVar8;
  ushort uVar9;
  
  if (*(char *)(param_1 + 0x2a7) != '\x02') {
    return;
  }
  bVar1 = param_2[2];
  if ((bVar1 & 0x30) != 0) {
    return;
  }
  if (*(ushort *)(param_2 + 10) == 0) {
    return;
  }
  if ((bVar1 >> 3 & 1) == 0) {
    uVar9 = *(ushort *)(param_2 + 6);
LAB_008fd79c:
    if (uVar9 == 0) {
      return;
    }
    bVar4 = false;
    plVar6 = *(long **)(param_1 + 0x358);
  }
  else {
    param_2[2] = bVar1 & 0xf7;
    if ((bVar1 & 1) != 0) {
      uVar9 = *(ushort *)(param_2 + 0xc);
      uVar2 = *(ushort *)(param_2 + 8);
      if (uVar2 <= uVar9) {
        return;
      }
      *(ushort *)(param_2 + 0xc) = uVar9 + 1;
      if ((ushort)(uVar9 + 1) != uVar2) {
        return;
      }
      *(ushort *)(param_2 + 6) = uVar2;
      plVar6 = *(long **)(param_1 + 0x358);
      if (plVar6 == (long *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x008fd8f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x4e8))(plVar6,uVar2,uVar2);
      return;
    }
    uVar9 = *(ushort *)(param_2 + 6);
    if ((*(ushort *)(param_2 + 10) <= uVar9) || (*param_2 != '\0')) goto LAB_008fd79c;
    *(ushort *)(param_2 + 6) = uVar9 + 1;
    if (*(short *)(param_2 + 4) == 0) {
      *(ushort *)(param_2 + 8) = uVar9 + 1;
    }
    bVar4 = true;
    plVar6 = *(long **)(param_1 + 0x358);
  }
  if (plVar6 == (long *)0x0) {
    return;
  }
  if (*param_2 == '\x01') {
    uVar7 = (**(code **)(*plVar6 + 0x460))();
    if ((uVar7 & 1) == 0) {
      return;
    }
    param_2[2] = param_2[2] | 4;
    *param_2 = '\x02';
    return;
  }
  if (*param_2 != '\0') {
    return;
  }
  cVar5 = (**(code **)(*plVar6 + 0x4e0))();
  if (cVar5 == '\x01') {
    uVar9 = *(ushort *)(param_2 + 8);
    if (1 < uVar9) {
      uVar8 = uVar9 - 1;
      goto LAB_008fd948;
    }
LAB_008fda08:
    uVar8 = (uint)uVar9;
    param_2[4] = '-';
    param_2[5] = '\0';
    if (!bVar4) goto LAB_008fd974;
  }
  else if (cVar5 == '\x02') {
    uVar9 = *(ushort *)(param_2 + 8);
    if ((uint)*(ushort *)(param_2 + 10) <= (uint)uVar9) goto LAB_008fda08;
    uVar8 = uVar9 + 1;
LAB_008fd948:
    *(short *)(param_2 + 8) = (short)uVar8;
    param_2[4] = '-';
    param_2[5] = '\0';
  }
  else {
    if (cVar5 == '\x03') {
      param_2[1] = '\x01';
      FUN_008fa610(*(undefined8 *)(param_1 + 0x58));
      (**(code **)(**(long **)(param_1 + 0x358) + 0x458))();
      param_2[2] = param_2[2] | 2;
      *param_2 = '\x01';
      param_2[4] = '\0';
      param_2[5] = '\0';
      (**(code **)(**(long **)(param_1 + 0x358) + 0x500))
                (*(long **)(param_1 + 0x358),*(undefined2 *)(param_2 + 6),1);
      (**(code **)(**(long **)(param_1 + 0x358) + 0x5e8))(*(long **)(param_1 + 0x358),0x1e);
      (**(code **)(**(long **)(param_1 + 0x358) + 0x648))();
    }
    if (!bVar4) goto LAB_008fd974;
    uVar8 = (uint)*(ushort *)(param_2 + 8);
  }
  (**(code **)(**(long **)(param_1 + 0x358) + 0x4e8))
            (*(long **)(param_1 + 0x358),*(undefined2 *)(param_2 + 6),uVar8);
LAB_008fd974:
  sVar3 = *(short *)(param_2 + 4);
  if ((sVar3 == 0) || (*(short *)(param_2 + 4) = sVar3 + -1, sVar3 != 1)) {
    return;
  }
  param_2[1] = '\x02';
  FUN_008fa610(*(undefined8 *)(param_1 + 0x58));
  (**(code **)(**(long **)(param_1 + 0x358) + 0x458))();
  (**(code **)(**(long **)(param_1 + 0x358) + 0x4f8))
            (*(long **)(param_1 + 0x358),*(undefined2 *)(param_2 + 8));
  param_2[2] = param_2[2] | 2;
  *param_2 = '\x01';
  (**(code **)(**(long **)(param_1 + 0x358) + 0x5e8))(*(long **)(param_1 + 0x358),0x1e);
                    /* WARNING: Could not recover jumptable at 0x008fda04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x358) + 0x648))();
  return;
}


