/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0120da90; name: FUN_0120da90
 */


void FUN_0120da90(long param_1)

{
  long *plVar1;
  char *pcVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  undefined1 auStack_70 [16];
  
  lVar5 = FUN_007b5710(*(undefined8 *)PTR_DAT_027104b0);
  puVar4 = PTR_DAT_027104a0;
  uVar12 = 0;
  do {
    while( true ) {
      lVar8 = param_1 + uVar12 * 0xd90;
      lVar7 = *(long *)(lVar8 + 0x1b78);
      if (lVar7 != 0) break;
LAB_0120db10:
      uVar12 = uVar12 + 1;
      if (uVar12 == 8) {
        return;
      }
    }
    plVar6 = *(long **)(lVar5 + 0x40);
    lVar3 = *(long *)(lVar5 + 0x48);
    if ((lVar3 == 0) || (*plVar6 == lVar7)) {
      plVar10 = plVar6;
    }
    else {
      lVar9 = lVar3 * 8;
      plVar11 = plVar6;
      do {
        lVar9 = lVar9 + -8;
        if (lVar9 == 0) goto LAB_0120db4c;
        plVar10 = plVar11 + 1;
        plVar1 = plVar11 + 1;
        plVar11 = plVar10;
      } while (*plVar1 != lVar7);
    }
    if (plVar6 + lVar3 != plVar10) goto LAB_0120db10;
LAB_0120db4c:
    pcVar2 = (char *)(param_1 + uVar12 * 0xd90 + 0x1b80);
    if ((((*pcVar2 != '\0') && (*(long *)(param_1 + 0x68) != 0)) &&
        (*(int *)(*(long *)(param_1 + 0x68) + 0x54) != 0)) &&
       (plVar6 = *(long **)(param_1 + 0x70), plVar6 != (long *)0x0)) {
      (**(code **)(*plVar6 + 8))(plVar6,lVar7,uVar12 & 0xffffffff);
    }
    lVar7 = FUN_007a8430(*(undefined8 *)puVar4,uVar12 & 0xffffffff);
    if (lVar7 != 0) {
      if ((*(uint *)(lVar7 + 0x4c) | 0x1000000) >> 0x10 == 0x302) {
        FUN_01956260(auStack_70,lVar7);
      }
      FUN_01955f40(auStack_70,lVar7);
    }
    *(undefined8 *)(lVar8 + 0x1b78) = 0;
    *pcVar2 = '\0';
    uVar12 = uVar12 + 1;
    if (uVar12 == 8) {
      return;
    }
  } while( true );
}


