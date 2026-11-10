/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0068c000; name: FUN_0068c000
 */


undefined8
FUN_0068c000(long param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6,
            char *param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 uVar8;
  code *pcVar9;
  long lVar10;
  undefined4 uVar11;
  
  if (param_7 == (char *)0x0) {
    return 0xfffffffa;
  }
  if (param_8 != 0x70) {
    return 0xfffffffa;
  }
  if (*param_7 != '1') {
    return 0xfffffffa;
  }
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  pcVar9 = *(code **)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (pcVar9 == (code *)0x0) {
    pcVar9 = FUN_00694500;
    *(code **)(param_1 + 0x40) = FUN_00694500;
    *(undefined8 *)(param_1 + 0x50) = 0;
    lVar10 = *(long *)(param_1 + 0x48);
  }
  else {
    lVar10 = *(long *)(param_1 + 0x48);
  }
  if (lVar10 == 0) {
    *(code **)(param_1 + 0x48) = FUN_00694510;
    uVar5 = 6;
    if (param_2 != 0xffffffff) {
      uVar5 = param_2;
    }
  }
  else {
    uVar5 = 6;
    if (param_2 != 0xffffffff) {
      uVar5 = param_2;
    }
  }
  if ((int)param_4 < 0) {
    uVar11 = 0;
    uVar2 = -param_4;
  }
  else {
    uVar2 = param_4 - 0x10;
    if ((int)param_4 < 0x10) {
      uVar2 = param_4;
    }
    uVar11 = 1;
    if (0xf < (int)param_4) {
      uVar11 = 2;
    }
  }
  uVar8 = 0xfffffffe;
  if ((((param_6 < 5) && (uVar8 = 0xfffffffe, uVar5 < 10)) && (param_3 == 8)) &&
     ((param_5 - 1U < 9 && ((uVar2 & 0xfffffff8) == 8)))) {
    uVar1 = 9;
    if (uVar2 != 8) {
      uVar1 = uVar2;
    }
    plVar7 = (long *)(*pcVar9)(*(undefined8 *)(param_1 + 0x50),1,0x1730);
    if (plVar7 != (long *)0x0) {
      iVar3 = 1 << (ulong)(uVar1 & 0x1f);
      *(long **)(param_1 + 0x38) = plVar7;
      *(undefined4 *)((long)plVar7 + 0x2c) = uVar11;
      *(int *)((long)plVar7 + 0x44) = iVar3;
      *(uint *)(plVar7 + 9) = uVar1;
      *(int *)((long)plVar7 + 0x4c) = iVar3 + -1;
      iVar4 = 1 << (ulong)(param_5 + 7U & 0x1f);
      *(int *)((long)plVar7 + 0x74) = iVar4;
      *(uint *)(plVar7 + 0xf) = param_5 + 7U;
      *plVar7 = param_1;
      plVar7[6] = 0;
      *(int *)((long)plVar7 + 0x7c) = iVar4 + -1;
      *(uint *)(plVar7 + 0x10) = (param_5 + 9U & 0xff) / 3;
      lVar10 = (**(code **)(param_1 + 0x40))(*(undefined8 *)(param_1 + 0x50),iVar3,2);
      plVar7[10] = lVar10;
      lVar10 = (**(code **)(param_1 + 0x40))
                         (*(undefined8 *)(param_1 + 0x50),*(undefined4 *)((long)plVar7 + 0x44),2);
      plVar7[0xc] = lVar10;
      lVar10 = (**(code **)(param_1 + 0x40))
                         (*(undefined8 *)(param_1 + 0x50),*(undefined4 *)((long)plVar7 + 0x74),2);
      iVar3 = 1 << (ulong)(param_5 + 6U & 0x1f);
      plVar7[0xd] = lVar10;
      plVar7[0x2e5] = 0;
      *(int *)(plVar7 + 0x2df) = iVar3;
      lVar10 = (**(code **)(param_1 + 0x40))(*(undefined8 *)(param_1 + 0x50),iVar3,4);
      uVar2 = *(uint *)(plVar7 + 0x2df);
      plVar7[2] = lVar10;
      plVar7[3] = (ulong)uVar2 << 2;
      puVar6 = PTR_PTR_02714e90;
      if (((plVar7[10] != 0) && (plVar7[0xc] != 0)) && ((lVar10 != 0 && (plVar7[0xd] != 0)))) {
        plVar7[0x2de] = lVar10 + (ulong)uVar2 * 3;
        *(uint *)((long)plVar7 + 0xb4) = uVar5;
        *(uint *)(plVar7 + 0x17) = param_6;
        plVar7[0x2e0] = lVar10 + (ulong)(uVar2 & 0xfffffffe);
        *(undefined1 *)((long)plVar7 + 0x3c) = 8;
        uVar8 = FUN_0068c3a0(param_1);
        return uVar8;
      }
      *(undefined4 *)(plVar7 + 1) = 0x29a;
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(puVar6 + 0x30);
      FUN_0068c290(param_1);
    }
    uVar8 = 0xfffffffc;
  }
  return uVar8;
}


