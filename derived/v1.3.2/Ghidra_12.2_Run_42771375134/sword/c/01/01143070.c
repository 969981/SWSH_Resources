/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01143070; name: FUN_01143070
 */


void FUN_01143070(long *param_1,long *param_2,undefined1 param_3,undefined1 param_4,
                 undefined2 param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  lVar5 = *param_1;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  lVar7 = *param_2;
  if (lVar7 == 0) {
LAB_01143108:
    plVar6 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    iVar3 = FUN_0077d480(lVar5);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    if (iVar3 != 0) {
      FUN_0077d660(*param_1);
      *(undefined2 *)((long)param_1 + 10) = 0;
    }
  }
  else {
    plVar6 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    iVar3 = FUN_0077d480(lVar7);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    lVar5 = *param_1;
    if (iVar3 != 0) {
      FUN_0077d2f0(lVar5,*param_2);
      *(undefined1 *)(param_1 + 1) = param_3;
      *(undefined1 *)((long)param_1 + 9) = param_4;
      *(undefined2 *)((long)param_1 + 10) = param_5;
      goto LAB_0114314c;
    }
    if (lVar5 != 0) goto LAB_01143108;
  }
  *(undefined1 *)(param_1 + 5) = 0;
LAB_0114314c:
  uVar1 = *param_6;
  uVar2 = param_6[1];
  uVar4 = param_6[2];
  *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)(param_6 + 3);
  *(undefined8 *)((long)param_1 + 0x1c) = uVar4;
  *(undefined8 *)((long)param_1 + 0x14) = uVar2;
  *(undefined8 *)((long)param_1 + 0xc) = uVar1;
  return;
}


