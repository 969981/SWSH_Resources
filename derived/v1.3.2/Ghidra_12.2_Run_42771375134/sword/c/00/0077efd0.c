/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077efd0; name: FUN_0077efd0
 */


void FUN_0077efd0(long *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  
  iVar2 = FUN_0077d480(param_2);
  *(int *)((long)param_1 + 0xb4) = iVar2;
  *(undefined8 *)((long)param_1 + 0xac) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  uVar7 = 0x200;
  if (0x200 < iVar2 + 1U) {
    uVar7 = iVar2 + 1;
  }
  if (param_1[0xf] == 0) {
LAB_0077f044:
    plVar9 = (long *)param_1[1];
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar9;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    lVar4 = (**(code **)(*plVar9 + 0x10))(plVar9,0x80,8);
    if (lVar4 == 0) {
      (**(code **)(*plVar9 + 0xb8))(plVar9);
    }
    FUN_0077d050(lVar4,uVar7);
    *(long **)(lVar4 + 8) = plVar9;
    *(long *)(lVar4 + 0x10) = lVar4;
    *(undefined8 *)(lVar4 + 0x18) = 0x80;
    *(undefined8 *)(lVar4 + 0x20) = 8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    if (param_1[0xf] != 0) {
      (**(code **)(*(long *)(param_1[0xf] + 0x48) + 0x18))();
      param_1[0xf] = 0;
    }
    param_1[0xf] = lVar4;
    if (lVar4 == 0) {
      uVar1 = 1;
      lVar4 = 0;
      goto LAB_0077f128;
    }
  }
  else {
    uVar3 = FUN_0077d490();
    if (uVar3 < uVar7) {
      lVar4 = param_1[0xf];
      param_1[0xf] = 0;
      if (lVar4 == 0) goto LAB_0077f044;
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    }
    lVar4 = param_1[0xf];
    if (lVar4 == 0) goto LAB_0077f044;
  }
  FUN_0077d4d0(lVar4,param_2);
  FUN_0077d470(param_1[0xf]);
  uVar1 = FUN_0077d9b0();
  lVar4 = param_1[0xf];
LAB_0077f128:
  *(undefined1 *)((long)param_1 + 0x99) = uVar1;
  *(undefined1 *)((long)param_1 + 0x9b) = 0;
  *(undefined1 *)((long)param_1 + 0xa3) = 0;
  *(undefined4 *)(param_1 + 0x15) = 4;
  *(undefined4 *)((long)param_1 + 0x114) = 0;
  uVar6 = FUN_0077d470(lVar4);
  FUN_0077dad0(uVar6,*(undefined1 *)((long)param_1 + 0x9b));
  if ((char)param_1[0x13] != '\0') {
    lVar4 = 0;
    uVar8 = 0;
    do {
      lVar5 = param_1[0xb] + lVar4;
      *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(lVar5 + 0x10);
      *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(lVar5 + 0x18);
      *(char *)(param_1[0xb] + lVar4 + 0x92) = (char)uVar8;
      plVar9 = (long *)(param_1[0xb] + lVar4);
      lVar5 = *plVar9;
      lVar10 = plVar9[3];
      *(long *)(lVar5 + 0x30) = plVar9[2];
      *(int *)(lVar5 + 0x38) = (int)lVar10;
      *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) | 0x10;
      (**(code **)(**(long **)(param_1[0xb] + lVar4) + 0x100))
                (*(long **)(param_1[0xb] + lVar4),&DAT_0213fa00,0);
      *(undefined1 *)(*(long *)(param_1[0xb] + lVar4) + 0x59) = 0xff;
      uVar8 = uVar8 + 1;
      lVar4 = lVar4 + 0xa0;
    } while (uVar8 < *(byte *)(param_1 + 0x13));
  }
  *(undefined1 *)((long)param_1 + 0x9c) = 0;
  *(undefined1 *)((long)param_1 + 0x9f) = 0;
  FUN_0077f910(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077f218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x80))(param_1);
  return;
}


